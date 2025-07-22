#include "gmock/gmock.h"
#include <random>
class Cal {
public:
	int getSum(int a, int b)
	{
		return a + b;
	}

	int getSumSum(int a, int b, int c)
	{
		return a + b + c;
	}

	int getGob(int a, int b) 
	{
		return a * b;
	}

	int getZegop(int a) 
	{ 
		return a * a; 
	}

	int GetMinus(int a, int b) 
	{
		return a - b;
	}
};

TEST(calculate_test, getSum) {
	Cal cal;
	int a = 1, b = 2;
	int result;

	result = cal.getSum(a, b);
	EXPECT_EQ(a + b, result);
}

TEST(calculate_test, getSumSum) {
	Cal cal;
	int a = 1, b = 2, c = 3;
	int result;

	result = cal.getSumSum(a, b, c);
	EXPECT_EQ(a + b + c, result);
}

TEST(calculate_test, getZegop) {
	Cal cal;
	EXPECT_EQ(100, cal.getZegop(10));
}
TEST(calculate_test, getMinus)
{
	Cal calculator;
	for (int i = 0; i < 1000; i++) {
		int a = rand();
		int b = rand();
		EXPECT_EQ(calculator.GetMinus(a, b), (a - b));
	}
}

TEST(calculate_test, getGobLeftZero) {
	Cal cal;
	int expect = 0;
	int real = cal.getGob(0, 1);

	EXPECT_EQ(expect, real);
}

TEST(calculate_test, getGobRightZero) {
	Cal cal;
	int expect = 0;
	int real = cal.getGob(1, 0);

	EXPECT_EQ(expect, real);
}

TEST(calculate_test, getGobNormal) {
	Cal cal;
	int expect = 10;
	int real = cal.getGob(2, 5);

	EXPECT_EQ(expect, real);
}

int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}
