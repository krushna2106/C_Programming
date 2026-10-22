#include<stdio.h>
#include<stdlib.h>

/*
    
    Function Name : checkNumber
    Description : check number is positive or negative
    input :INT
    output :  Even or Odd
    Author : Krushna Ravindra chaudhari
    Date  : 21/10/2026

*/
void  CheckNumber(int iNO)
{
    if(iNO > 0)
    {
        printf("The Number is postive");

    }
    else if(iNO == 0)
    {
        printf("zero\n");
    }
    else{
        printf("The number is negative");
    }
}
int main()
{

    int iValue = 0;
    printf("enter a Number\n");
    scanf("%d",&iValue);

    CheckNumber(iValue);

    return EXIT_SUCCESS;
}