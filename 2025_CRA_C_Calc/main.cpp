#include "gmock/gmock.h"

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

int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}