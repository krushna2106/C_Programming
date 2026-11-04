#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/*
    Fucntion Name: CountTwo
    Description: Accept the Number from the user and Count Frequecy of 2 in the digit
    Input: Integer
    output:bool
    author: krushna Ravindra chaudhari
    Date 4/11/2026
*/

int CountTwo(int iNO)
{
    int iDigit = 0;
    int iCount = 0;

    while (iNO != 0)
    {
        iDigit = iNO % 10;

        if (iDigit == 2)
        {
           iCount++;
        }
        iNO = iNO / 10;
    }
    return iCount;

    
}

int main()
{
    int iRet = 0;
    int iValue = 0;

    printf("Enter the Number:\n");
    scanf("%d", &iValue);

    iRet = CountTwo(iValue);

    if (iRet == 0)
    {
        printf("The digit does not contain 2\n");
    }
    else
    {
        printf("The Frequecy of 2 is :%d\n",iRet);
    }

    return EXIT_SUCCESS;
}