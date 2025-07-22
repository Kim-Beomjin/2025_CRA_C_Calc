#include "gmock/gmock.h"

class Cal {
public:
	int getZegop(int a) { return a * a; }
};

TEST(t1, t2) {
	EXPECT_EQ(1, 1);
}

int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}