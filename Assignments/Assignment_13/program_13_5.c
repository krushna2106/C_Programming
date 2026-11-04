#include <stdio.h>
#include <stdlib.h>
/*
    Function Name : CountDiff
    Description : Accept the Number from user and return  Difference the Summation of Even Digit and Summation of odd digit 
    Input: Interger
    Output: Interger
    Author : Krushna Ravindra chaudhari
    Date : 04/11/2026
*/

int CountDiff(int iNO)
{
    int iDigit = 0;
    int evnSum = 0;
    int OddSum = 0;

    while (iNO != 0)
    {
        iDigit = iNO % 10;

        if ((iDigit % 2) == 0)
        {
            evnSum = evnSum + iDigit;
        }
        else
        {
            OddSum = OddSum + iDigit;
        }

        iNO = iNO / 10;
    }
    return evnSum - OddSum;
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter Number\n");
    scanf("%d", &iValue);

    iRet = CountDiff(iValue);
    printf("The Multipication Digits Are: %d\n", iRet);

    return EXIT_SUCCESS;
}