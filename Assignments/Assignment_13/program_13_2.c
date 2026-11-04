#include<stdio.h>
#include<stdlib.h>
/*
    Function Name : countOdd
    Description : Accept the Number from user and return the count of Odd digits
    Input: Interger
    Output: Interger
    Author : Krushna Ravindra chaudhari
    Date : 04/11/2026
*/

int CountOdd(int iNO)
{
    int iDigit = 0;
    int iCount = 0;

    while(iNO != 0)
    {
        iDigit = iNO % 10;

        if((iDigit % 2)!= 0)
        {
            iCount++;
        }

        iNO = iNO/10;

    }
    return iCount;
}
int main()
{
    int iValue = 0;
    int iRet =  0;
    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = CountOdd(iValue);
    printf("The Even Digits Are: %d\n",iRet);

    return EXIT_SUCCESS;
}