#include "pch.h"
#include "CppUnitTest.h"
#include "../Labor6.1Rek/Lab61.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest61
{
	TEST_CLASS(UnitTest61)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int a = 5;
			int b[a] = {20, -8, -12, 10, 30 };
			int c;
			c = Count(b, a, 0, 0);
			Assert::AreEqual(2, c);
		}
	};
}
