#include <stdio.h>
#include <stdlib.h>

// By using we don't have to defined #include<stdbool.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL check(int iNo)
{
    if ((iNo % 5) == 0)
    {
        return TRUE;
    }
    else
    {

        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("enter the number\n");
    scanf("%d",&iValue);
    bRet = check(iValue);
    if (bRet == TRUE)
    {
        printf("divisible by 5\n");
    }
    else
    {

        printf("not divisible by 5\n");
    }

    return EXIT_SUCCESS;
}