#include <stdio.h>
#include <stdlib.h>
/*
    Function Name : RangeDisplay
    Description   : Displays all integers in a given range
    Input         : Two integers representing the start and end of the range
    Output        : None
    Author        : Krushna Ravindra Chaudhari
    Date          : 3/11/2026
*/
void RangeDisplay(int iStart,int iEnd)
{
    if(iStart > iEnd)
    {
        fprintf(stderr,"Invalid Range\n");
        return ;

    }
    
    int iCnt = 0;
    for(iCnt = iStart;iCnt<=iEnd;iCnt++)
    {
        printf("%d\t",iCnt);
    }
    printf("\n");

}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the starting point of the range: ");
    scanf("%d", &iValue1);

    printf("Enter the ending point of the range: ");
    scanf("%d", &iValue2);

    RangeDisplay(iValue1, iValue2);

    return EXIT_SUCCESS;
}
