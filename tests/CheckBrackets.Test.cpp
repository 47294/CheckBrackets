#include <gtest/gtest.h>
extern "C"{
#include "../includes/lib.h"
}
TEST(TEST1, abc)
{
	ASSERT_EQ(CheckBrackets("abc()"), true);
}
