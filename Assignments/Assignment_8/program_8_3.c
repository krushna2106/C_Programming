#include<stdio.h>
#include<stdlib.h>
/*
    Function Name : Factorial
    Description   : Accepts a number from user and display the factorial of given number
    Input         : Integer
    Output        : long long int
    Author        : Krushna Ravindra Chaudhari
    Date          : 30/10/2026
*/


long long int Factorial(int iNO)
{
    if(iNO < 0)
    {
        iNO = -iNO;
    }

    int iCnt = 0;
    long long int iFact = 0;

    for(iCnt = 1,iFact = 1; iCnt<=iNO;iCnt++)
    {
        iFact = iFact *iCnt;
    }
    return iFact;
}

int main()
{
    int iValue = 0;
     long long int iRet = 0 ;

    
    printf("Enter the number\n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("The Factorial is : %lld",iRet);


    return EXIT_SUCCESS;
}