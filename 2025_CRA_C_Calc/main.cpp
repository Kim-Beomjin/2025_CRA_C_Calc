#include "gmock/gmock.h"
#include "iostream"

using namespace testing;

class Cal {
public:
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
			std::cout << "0���� ���� �� �����ϴ�. (����� 0���� �����ϴ�.)";

			return false;
		}

		return true;
	}
};

TEST(t1, t2)
{
	EXPECT_EQ(1, 1);
}

int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}