#include "pch.h"
#include "CppUnitTest.h"
#include "../IntPower.h"
#include "../IntPower.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			IntPower A(2, 2);
			int f = A.power();
			Assert::AreEqual(f, 4);
		}
	};
}
