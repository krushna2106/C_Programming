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
void  CheckEvenOdd(int iNO)
{

    if((iNO % 2) == 0)
    { 
        printf("The number is even");
    }
    
    else{
        printf("The number is odd");
    }
}

int main()
{

    int iValue = 0;
    printf("enter a Number\n");
    scanf("%d",&iValue);

    CheckEvenOdd(iValue);

    return EXIT_SUCCESS;
}