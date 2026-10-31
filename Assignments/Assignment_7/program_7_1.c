#include <stdio.h>
#include <stdlib.h>
/*

    Function Name : pattern
    Description :  Displays the pattern 
    input :INT
    output : void
    Author : Krushna Ravindra chaudhari
    Date  : 30/10/2026

*/
void pattern(int iNO)
{
    int iCnt = 0;
    
    if(iNO < 0)
    {
        iNO = -iNO;
    }

    for(iCnt = 1;iCnt<=iNO;iCnt++)
    {
        printf("$\t*\t");

    }
    printf("\n");
}

int main()
{
    int ivalue = 0;
    printf("Enter the Number :");
    scanf("%d",&ivalue);
    pattern(ivalue);
    return EXIT_SUCCESS;
}