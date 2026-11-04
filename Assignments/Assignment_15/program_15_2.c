#include <stdio.h>
#include <stdlib.h>
/*
    Function Name : ChkGreater
    Description : Accept  one number from user and check wheather that number is greater than 100 or not
    Input : Integer
    output : bool
    Author : Krushan Ravindra chaudhari
    Date : 04/11/20206
*/
typedef int BOOL;
#define False 0
#define True 1
BOOL ChkGreater(int iNO)
{
    if(iNO > 100)
    {
        return True;

    }
    else
    {
        return False;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = False;

    printf("Enter the Number\n");
    scanf("%d",&iValue);

    bRet = ChkGreater(iValue);
    if (bRet = True)
    {

        printf("Greater");
    }
    else
    {
        printf("Small");
    }

    return EXIT_SUCCESS;
}
