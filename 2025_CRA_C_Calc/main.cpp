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
	int getGob(int a, int b) {
		return a * b;
 	}

  int getZegop(int a) { return a * a; }

	int GetMinus(int a, int b) {
		return a - b;
	}
  
	int getDivide(int operand1, int operand2)
	{
		int result = 0;

		bool retFlag;
		if (IsValidOperand(operand2) == false)
		{
			return result;
		}

		result = operand1 / operand2;

		return result;
	}
	bool IsValidOperand(int operand2)
	{
		if (operand2 == 0)
		{
			std::cout << "0으로 나눌 수 없습니다. (결과는 0으로 출력)";

			return false;
		}

		return true;
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

TEST(t1, GobLeftZero) {
	Cal cal;
	int expect = 0;
	int real = cal.getGob(0, 1);

	EXPECT_EQ(expect, real);
}

TEST(t1, GobRightZero) {
	Cal cal;
	int expect = 0;
	int real = cal.getGob(1, 0);

	EXPECT_EQ(expect, real);
}

TEST(t1, GobNormal) {
	Cal cal;
	int expect = 10;
	int real = cal.getGob(2, 5);

	EXPECT_EQ(expect, real);
}

TEST(t1, DivideSuccess) {
	Cal cal;
	int expect = 3;
	int real = cal.getDivide(6, 2);

	EXPECT_EQ(expect, real);
}

TEST(t1, DivideFail) {
	Cal cal;
	int expect = 0;
	int real = cal.getGob(5, 0);

	EXPECT_EQ(expect, real);
}

int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}
