#include <stdio.h>
#include <stdlib.h>
/*

    Function Name : Displays
    Description :  accept number and print number till that number
    input :INT
    output : void
    Author : Krushna Ravindra chaudhari
    Date  : 30/10/2026

*/
void Display(int iNO)
{
    int iCnt = 0;
    
    if(iNO < 0)
    {
        iNO = -iNO;
    }

    for(iCnt = 1;iCnt<=iNO;iCnt++)
    {
        
        printf("%d\t",iCnt);
    }
   
}

int main()
{
    int iValue = 0;
    printf("Enter the Number :");
    scanf("%d",&iValue);
    Display(iValue);
    return EXIT_SUCCESS;
}