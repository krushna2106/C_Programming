#include<stdio.h>
#include<stdlib.h>
/*
    Function Name : DisplayEvenRange
    Description   : Displays Even integers in a given range
    Input         : Two integers representing the start and end of the range
    Output        : None
    Author        : Krushna Ravindra Chaudhari
    Date          : 3/11/2026
*/
void DisplayEvenRange(int iStart,int iEnd)
{
    int iCnt = 0;
    if(iStart > iEnd)
    {
        fprintf(stderr,"Invalid Range\n");
        return;

    }

    for(iCnt =iStart;iCnt<=iEnd;iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            printf("%d\t",iCnt);
        }
    }
    printf("\n");

}

int main()
{
    int iValue1 = 0 , iValue2 = 0;
    printf("Enter the starting point of the range:\n");
    scanf("%d", &iValue1);
    printf("Enter the ending point of the range\n:");
    scanf("%d", &iValue2);

    DisplayEvenRange(iValue1,iValue2);

    return EXIT_SUCCESS;
}