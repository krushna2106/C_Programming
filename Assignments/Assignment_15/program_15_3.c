#include <stdio.h>
#include <stdlib.h>
/*
    Function Name : ChkEquals
    Description : Accept  two number from user and check wheather the numbers are Equals or Not
    Input : Integer
    output : bool
    Author : Krushan Ravindra chaudhari
    Date : 04/11/20206
*/
typedef int BOOL;
#define False 0
#define True 1
BOOL ChkEquals(int iNO1, int iNO2)
{
    if(iNO1 == iNO2)
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
    int iValue1 = 0,iValue2;
    BOOL bRet = False;

    printf("Enter Two Number\n");
    scanf("%d%d",&iValue1,&iValue2);

    bRet = ChkGreater(iValue1,iValue2);
    if (bRet = True)
    {

        printf("Equals");
    }
    else
    {
        printf("NOt Equald");
    }

    return EXIT_SUCCESS;
}
