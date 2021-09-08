#include "unity.h"
void setUp() {}
void tearDown() {}

void test_extractYear(void)
{
    char userid[15] = "2021BTCSE00025";
    TEST_ASSERT_EQUAL(2021,extractYear(userid));
}

int main()
{
    UNITY_BEGIN();
    
    RUN_TEST(test_extractYear);
    
    return UNITY_END();
}

