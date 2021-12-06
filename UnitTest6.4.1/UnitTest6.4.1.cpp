#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\Maria\source\repos\Lab6.4.1\Lab6.4.1\Lab6.4.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest641
{
	TEST_CLASS(UnitTest641)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[] = { 0, 3, 6, 9 };
			int t = Min(a, 4, 0, 0);
			Assert::AreEqual(0, t);
		}
	};
}
