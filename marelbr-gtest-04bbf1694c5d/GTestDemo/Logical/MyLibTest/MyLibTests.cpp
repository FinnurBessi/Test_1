
#include "gtest/gtest.h"
#include "../Libraries/MyLib/CalcTriangle.hpp"

TEST(MyLibTestRun, PythagoraShouldWork)
{
	CalcTriangle calc;
	
	calc.set_a(3);
	calc.set_b(4);

	EXPECT_EQ(calc.get_c(), 5);
	EXPECT_EQ(calc.get_b(), 4);
	EXPECT_EQ(calc.get_a(), 3);
	
}

