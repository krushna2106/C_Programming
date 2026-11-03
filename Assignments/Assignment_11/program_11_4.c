#include <stdio.h>
#include <stdlib.h>
/*
    Function Name : RangeSum
    Description   : Displays addition of even integers in a given range
    Input         : Two integers representing the start and end of the range
    Output        : int
    Author        : Krushna Ravindra Chaudhari
    Date          : 3/11/2026
*/
int RangeSum(int iStart, int iEnd)
{
    int iCnt = 0;
    int iSum = 0;

    if (iStart > iEnd)
    {

         return EXIT_FAILURE;
    }
    else if ((iStart < 0) || (iEnd < 0))
    {

        return EXIT_FAILURE;
    }

    for (iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if((iCnt % 2)==0)
        {

            iSum = iSum + iCnt;
        }
    }

    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;

    printf("Enter the starting point of the range:\n");
    scanf("%d", &iValue1);

    printf("Enter the ending point of the range :\n");

    scanf("%d", &iValue2);

    iRet = RangeSum(iValue1, iValue2);
    if (iRet == 1)
    {
        printf("Invalid range");
    }
    else
    {
        printf("Additon is :%d", iRet);
    }

    return EXIT_SUCCESS;
}