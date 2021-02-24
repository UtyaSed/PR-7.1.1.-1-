#include "pch.h"
#include "CppUnitTest.h"
#include "../PR 7.1.1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[8][5] = { {18,39,7,11,7},{13,45,4,9,30},{49,33,7,18,15},{12,5,24,22,42},{37,16,41,31,22},
							{26,38,7,10,31},{5,34,28,15,19},{47,17,26,48,28} };
			int S = 0;
			void Calc(int** a, const int rowCount, const int colCount, int& S, int& k);
			Assert::AreEqual(S, 334);
		}
	};
}
