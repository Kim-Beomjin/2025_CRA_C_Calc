#include "gmock/gmock.h"
#include <random>
class Cal {
public:
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