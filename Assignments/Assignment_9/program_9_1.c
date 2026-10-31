#include<stdio.h>
#include<stdlib.h>
/*
    Function Name : TableRev
    Description   : Accept number from user and display below pattern
    e.g input 5 -> * * * * * # # # # #

    Input         : Integer
    Output        : void
    Author        : Krushna Ravindra Chaudhari
    Date          : 30/10/2026
*/

void Display(int iNO)
{
    int iCnt = 0;
    if(iNO < 0)
    {
        iNO = -iNO;
    }
    
    for(iCnt = 0;iCnt<=iNO;iCnt++)
    {
        printf("*\t");
        
    }
     for(iCnt = 0;iCnt<=iNO;iCnt++)
    {
        printf("#\t");
        
    }
    
}
int main()
{
    int iValue = 0;
    printf("Enter the Number\n");
    scanf("%d",&iValue);
    Display(iValue);

    return EXIT_SUCCESS;
}
