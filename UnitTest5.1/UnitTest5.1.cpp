#include "pch.h"
#include "CppUnitTest.h"
#include "../laba5.1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest51
{
	TEST_CLASS(UnitTest51)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			double a;
			a = f(1);
			Assert::AreEqual(a, 2, 4189.);

		}
	};
}
