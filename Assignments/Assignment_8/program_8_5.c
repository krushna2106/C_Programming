#include<stdio.h>
#include<stdlib.h>
/*
    Function Name : TableRev
    Description   : Accept number from user and display its table in reverse
    Input         : Integer
    Output        : void
    Author        : Krushna Ravindra Chaudhari
    Date          : 30/10/2026
*/

void TableRev(int iNO)
{
    int iCnt = 0;
    if(iNO < 0)
    {
        iNO = -iNO;
    }
    
    for(iCnt = 10;iCnt>=1;iCnt--)
    {
        printf("%d\t",iCnt*iNO);
        
    }
    
}
int main()
{
    int iValue = 0;
    printf("Enter the Number\n");
    scanf("%d",&iValue);
    TableRev(iValue);

    return EXIT_SUCCESS;
}
