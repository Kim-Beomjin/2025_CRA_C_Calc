#include "gmock/gmock.h"

class Cal {
public:
	int getGob(int a, int b) {
		return a * b;
	}
};

TEST(t1, t2) {
	EXPECT_EQ(1, 1);
}

int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}