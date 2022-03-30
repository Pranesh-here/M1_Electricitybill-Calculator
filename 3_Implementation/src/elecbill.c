#include<stdio.h>
#include<string.h>


double do_billcalculator();
double co_billcalculator();

void details()
{
    char name[100],tariff[100];
    int unit,number,length=0,value,value1,value2,value3;
    int fine;
    printf("\nDomestic or Commercial Tariff: ");
    scanf("%s",tariff);
    printf("\nEnter your name/ Industry Name: ");
    scanf("%s",name);
    printf("Enter your last 4-digit number of Customer Number: ");
    scanf("%d",&number);
    value=strcmp(tariff,"domestic");
    value1=strcmp(tariff,"Domestic");
    value2=strcmp(tariff,"commercial");
    value3=strcmp(tariff,"Commercial");

    while(number!=0)  
    {
       number=number/10;  
       length++;  
    }
    if(length!=4)
    {
        printf("\nEnter a valid 4-digit number.!");
    }
    else
    {
        printf("\nEnter total the Unit consumed: ");
        scanf("%d",&unit);
        if((value==0)||(value1==0))
        {
            printf("\nNote: Enter 0, if you FAILED to pay the bill within the due date");
            printf("\nNote: Enter 1 or positive integer, if you PAID the bill within the due date");
            printf("\n\nEnter Here: ");
            scanf("%d",&fine);
            printf("\nThe Total Amount to be paid is: Rs.%.2lf",do_billcalculator(unit,fine));
            printf("\nTotal Amount Includes Duty, Fixed Charges and Penalty Charges (if applicable).!\n");
        }
        else if((value2==0)||(value3==0))
        {
            printf("\nFor Cottage and other Commercial Industries: ");
            printf("\nThe total amount to be paid for your Indutry is: %.2f\n",co_billcalculator(unit));
        }
        else
        {
            printf("\nEnter domestic or commercial completely/correctly.!");
        }
    }
}