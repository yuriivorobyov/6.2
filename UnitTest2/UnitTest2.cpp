#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\User\Desktop\Політех\АТП\6 тема\6.2\6.2\6.2\Source.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int c;
			int a[2]{ 0, 1 };
			c = Max(a, 2);
			Assert::AreEqual(c, 0);
		}
	};
}
