#include <stdio.h>
#include <stdlib.h>
/*

    Function Name : Display
    Description :  accept number and print number from user and prints its numbers line
    e.g 2:  -> -2 -1 0 1 2
    input :INT
    output : void
    Author : Krushna Ravindra chaudhari
    Date  : 30/10/2026

*/
void Display(int iNO)
{
    int iCnt = 0;
    
  

    for(iCnt = -iNO;iCnt<=iNO;iCnt++)
    {
        
        printf("%d\t",iCnt);
    }
   
}

int main()
{
    int ivalue = 0;
    printf("Enter the Number :");
    scanf("%d",&ivalue);
    Display(ivalue);
    return EXIT_SUCCESS;
}