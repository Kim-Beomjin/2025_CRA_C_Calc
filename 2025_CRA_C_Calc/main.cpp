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