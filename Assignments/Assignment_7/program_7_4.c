#include <stdio.h>
#include <stdlib.h>
/*

    Function Name : OddDisplays
    Description :  accept number N numbers from user and print all odd numbers up to N
    input :INT
    output : void
    Author : Krushna Ravindra chaudhari
    Date  : 30/10/2026

*/
void OddDisplay(int iNO)
{
    int iCnt = 0;
    
    if(iNO < 0)
    {
        iNO = -iNO;
    }

    for(iCnt = 1;iCnt<=iNO;iCnt++)
    {
        if((iCnt % 2)!= 0)
        {
         printf(" %d\t",iCnt);

        }
    }
   
}

int main()
{
    int ivalue = 0;
    printf("Enter the Number :");
    scanf("%d",&ivalue);
    OddDisplay(ivalue);
    return EXIT_SUCCESS;
}