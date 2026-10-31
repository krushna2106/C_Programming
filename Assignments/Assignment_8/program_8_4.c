#include<stdio.h>
#include<stdlib.h>
/*
    Function Name : Table
    Description   : Accept number from user and display its table
    Input         : Integer
    Output        : void
    Author        : Krushna Ravindra Chaudhari
    Date          : 30/10/2026
*/

void Table(int iNO)
{
    int iCnt = 0;
    if(iNO < 0)
    {
        iNO = -iNO;
    }
    
    for(iCnt = 0;iCnt<=10;iCnt++)
    {
        printf("%d\t",iCnt*iNO);
        
    }
    
}
int main()
{
    int iValue = 0;
    printf("Enter the Number\n");
    scanf("%d",&iValue);
    Table(iValue);

    return EXIT_SUCCESS;
}
