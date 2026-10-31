#include <stdio.h>
#include <stdlib.h>
/*
    Function Name : EvenFactorial
    Description   : Accept Number from user and  return differece between Even Factorial and odd factorial
    Input         : Integer
    Output        : Integer
    Author        : Krushna Ravindra Chaudhari
    Date          : 30/10/2026
*/

int EvenFactorial(int iNO)
{
    int iCnt = 0;
    int iFactOdd = 0;
    int iFactEven = 0;
    if (iNO < 0)
    {
        iNO = -iNO;
    }
    for(iCnt=1,iFactOdd=1,iFactEven=1;iCnt<=iNO;iCnt++)
    {
        if((iCnt % 2)!=0)
        {
            iFactOdd = iFactOdd * iCnt;
        }
        else 
        {
            iFactEven = iFactEven*iCnt;
        }
    }
    return (iFactEven - iFactOdd);
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter the Number\n");
    scanf("%d", &iValue);
    iRet = EvenFactorial(iValue);
    printf("The Even Factorial of number: %d", iRet);

    return EXIT_SUCCESS;
}
