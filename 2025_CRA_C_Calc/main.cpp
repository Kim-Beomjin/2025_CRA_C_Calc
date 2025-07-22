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
	int getGob(int a, int b) {
		return a * b;
	}

  int getZegop(int a) { return a * a; }

	int GetMinus(int a, int b) {
		return a - b;
	}
};

TEST(t1, getSum) {
	Cal cal;
	int a = 1, b = 2;
	int result;

	result = cal.getSum(a, b);
	EXPECT_EQ(a + b, result);
}

TEST(t1, getSumSum) {
	Cal cal;
	int a = 1, b = 2, c = 3;
	int result;

	result = cal.getSumSum(a, b, c);
	EXPECT_EQ(a + b + c, result);
}

TEST(t1, getZegopTest) {
	Cal cal;
	EXPECT_EQ(100, cal.getZegop(10));
}
TEST(calculate_test, minus)
{
	Cal calculator;
	for (int i = 0; i < 1000; i++) {
		int a = rand();
		int b = rand();
		EXPECT_EQ(calculator.GetMinus(a, b), (a - b));
	}
}

int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}
