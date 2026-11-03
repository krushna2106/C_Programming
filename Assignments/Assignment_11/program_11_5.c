#include <stdio.h>
#include <stdlib.h>
/*
    Function Name : RangeDisplayRev
    Description   : Accept the range from user and display all numbers in between that range in reverse order
    Input         : Two integers representing the start and end of the range
    Output        : void
    Author        : Krushna Ravindra Chaudhari
    Date          : 3/11/2026
*/
void RangeDisplayRev(int iStart, int iEnd)
{
    int iCnt = 0;
    int iSum = 0;

    if (iStart > iEnd)
    {
        fprintf(stderr,"invalid range");
        return;
    }
    

    for (iCnt = iEnd; iCnt >= iStart; iCnt--)
    {

        printf("%d\t", iCnt);
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
  
    printf("Enter the starting point of the range:\n");
    scanf("%d", &iValue1);

    printf("Enter the ending point of the range :\n");

    scanf("%d", &iValue2);

     RangeDisplayRev(iValue1, iValue2);
    

    return EXIT_SUCCESS;
}