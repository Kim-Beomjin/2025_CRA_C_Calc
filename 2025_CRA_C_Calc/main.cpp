#include "gmock/gmock.h"

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

TEST(t1, t2) {
	EXPECT_EQ(1, 1);
}

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
int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}
