#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int* a, const int n, const int Low, const int High, int i)
{
	a[i] = Low + rand() % (High - Low + 1);
	if (i < n - 1)
		Create(a, n, Low, High, i + 1);
}
void Print(int* c, const int n, int i)
{
	cout << setw(4) << c[i];
	if (i < n - 1)
		Print(c, n, i + 1);
	else
		cout << endl;
}
int Min(int* a, const int n, int min, int i) 
{
	min = abs(a[0]);
	if (abs(a[i]) < min)
		min = abs(a[i]);
	else
		if (i < n - 1)
			return Min(a, n, min, i + 1);
		else
			return min;

}
int Sum(int* a, const int n, int i, int S, int m)
{
	if (i < n - 1)
	{

		if (a[i] == 0)
		{
			m = i;
			S += abs(a[m]);
			if (m < n - 1)
				Sum(a, n, i + 1, S, m + 1);

		}
		return S;
	}
}
void Masuv(int* a, const int n, int i) 
{

	if (i % 2 == 1)

		if (i < n - 1)
			Masuv(a, n, i + 1);
	cout << a[i] << " ";

	if (i % 2 == 0)
		if (i < n - 1)
			Masuv(a, n, i + 1);


}
int main()
{
	srand((unsigned)time(NULL));
	int n;
	cout << "n="; cin >> n;
	int* a = new int[n];
	int Low;
	cout << "Low="; cin >> Low;
	int High;
	cout << "High="; cin >> High;
	Create(a, n, Low, High, 0);
	Print(a, n, 0);
	cout << " min = " << Min(a, n, High, 0) << endl;
	cout << " Sum = " << Sum(a, n, 0, 0, 0) << endl;
	Masuv(a, n, 0);
	delete[] a;
	a = nullptr;
	return 0;
}
