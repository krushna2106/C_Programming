#include <stdio.h>
#include <stdlib.h>
/*
    Function Name : ChkEven
    Description : displays the number even or odd
    input :INT
    output : BOOL
    Author : Krushna Ravindra chaudhari
    Date  : 20/10/2026
*/
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkEven(int iNo)
{
    if ((iNo % 2) == 0)
    {
        return 1;
    }

    else
    {
        return 0;
    }
}

int main()
{
    int iValue = 0;

    BOOL bRet = FALSE;

    printf("Enter the Number:\n");
    scanf("%d", &iValue);

    bRet = ChkEven(iValue);
    if (bRet == 1)
    {
        printf("The number is even");
    }
    else
    {
        printf("The Number is odd");
    }

    return EXIT_SUCCESS;
}