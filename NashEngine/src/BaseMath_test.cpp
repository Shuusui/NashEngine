#include "gtest\gtest.h"
#include "include\BaseMath.h"


TEST(basemath, AbsF)
{
	float x = -1.5f;
	x = Nash::AbsF(x);
	EXPECT_FLOAT_EQ(x, 1.5f);
}