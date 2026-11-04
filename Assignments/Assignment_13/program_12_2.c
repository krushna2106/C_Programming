#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/*
    Fucntion Name: ChkZero
    Description: Accept the Number from the user and Ckeck wheather the Zero in the digit
    Input: Integer
    output:bool
    author: krushna Ravindra chaudhari
    Date 4/11/2026
*/

bool ChkZero(int iNO)
{
    int iDigit = 0;

    while (iNO != 0)
    {
        iDigit = iNO % 10;

        if (iDigit == 0)
        {
            return true;
        }
        iNO = iNO / 10;
    }

    return false;
}

int main()
{
    bool bRet = false;
    int iValue = 0;

    printf("Enter the Number:\n");
    scanf("%d", &iValue);

    bRet = ChkZero(iValue);

    if (bRet)
    {
        printf("The digit contains zero\n");
    }
    else
    {
        printf("There is no zero in digit\n");
    }

    return EXIT_SUCCESS;
}