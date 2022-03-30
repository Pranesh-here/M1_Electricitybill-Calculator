#include<stdio.h>
#include "unity.h"

// Below code is for Domestic/Home Appliances along with the calculation of,
// Duty charges
// Fixed Charges
// Penalty fee (for customers who didn't pay within the due date)

double do_billcalculator(int unit,int fine)
{
    double amount,total=0;
    if(unit<=100)
    {
        total=0;
    }

    else if(unit<=200)
    {
        int duty=18,fixed_charges=20;
        unit=unit-100;
        amount=(unit*1.5);
        total=amount+duty+fixed_charges;
    }

    else if(unit<=500)
    {
        int duty=48,fixed_charges=30;
        unit=unit-100;
        if(unit>100)
        {
            amount=(100*2);
            unit=unit-100;
            amount=(amount+(unit*3));
            total=amount+duty+fixed_charges;
        }
    }

    else if(unit>500)
    {
        float duty=167.2;
        int fixed_charges=50;
        unit=unit-100;
        if(unit>100)
        {
            amount=(100*3.5);
            unit=unit-100;
            if(unit>300)
            {
                amount=(amount+(300*4.6));
                unit=unit-300;
                amount=(amount+(unit*6.6));
                total=amount+duty+fixed_charges;
            }
        }
    }
    
    if(fine==0)
    {
        double per,addfine;
        per=(total*(1.5/100));
        addfine=total+per;
        return addfine;
    }
    else
    {
        return total;
    }
}



//Below code is for Commercial Industries:

double co_billcalculator(int unit)
{
    double total=0;
    if(unit<500)
    {
        total=(4*unit);
        return total;
    }
    else
    {
        total=(4.6*unit);
        return total;
    }
}

void test_billcalculator()
{
    TEST_ASSERT_EQUAL(2622.00,co_billcalculator(570));
    TEST_ASSERT_EQUAL(1960.00,co_billcalculator(490));
    TEST_ASSERT_EQUAL(0.00,do_billcalculator(92,1));
    TEST_ASSERT_EQUAL(0.00,do_billcalculator(92,0));
    TEST_ASSERT_EQUAL(158.00,do_billcalculator(180,1));
    TEST_ASSERT_EQUAL(160.37,do_billcalculator(180,0)); 
    TEST_ASSERT_EQUAL(1118.00,do_billcalculator(480,1));
    TEST_ASSERT_EQUAL(1134.77,do_billcalculator(480,0));
    TEST_ASSERT_EQUAL(9682.40,do_billcalculator(1672,1));
    TEST_ASSERT_EQUAL(9827.64,do_billcalculator(1672,0));
}
