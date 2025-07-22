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
  
TEST(t1, getGobTest) {
	Cal cal;
	EXPECT_EQ(20, cal.getGob(4, 5));
}

TEST(t1, getZegopTest) {
	Cal cal;
	EXPECT_EQ(100, cal.getZegop(10));
}

TEST(t1, getMinusTest) {
	Cal cal;
	EXPECT_EQ(10, cal.GetMinus(20, 10));
}

int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}
