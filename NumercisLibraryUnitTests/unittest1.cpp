#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\NumericsLibrary\NumericalIntegration.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace NumercisLibraryUnitTests
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestPayoff)
		{
			auto epsilon = 10e-10;
			Assert::AreEqual(25.0,payoff(5),epsilon);
			Assert::AreEqual(25.0, payoff(-5),epsilon);
			Assert::AreEqual(0.0, payoff(0.0),epsilon);
			Assert::AreEqual(1.0, payoff(1.0),epsilon);
		};
		TEST_METHOD(Integration1)
		{
			auto epsilon = 10e-5;
			NumericalIntegration NumInt(1000, -3.0, 3.0);
			auto result = NumInt(payoff);
			Assert::AreEqual(18.0, result, epsilon);
		}

	};
}