#include "unity.h"
#include"eleclogic.h"

void setUp(void)
{
}

void tearDown(void)
{
}

int main(void)
{
    details();

    UnityBegin(NULL);

    RUN_TEST(test_billcalculator);

    return (UnityEnd());
}