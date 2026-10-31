#include<stdio.h>
#include<stdlib.h>

/*
    Function Name : Display
    Description :it is used to print number of * on Screen
    input :INT
    output : 
    Author : Krushna Ravindra chaudhari
    Date  : 20/10/2026
*/


void Display(int iNo)

{
    int iCnt = 0;
    iCnt = iNo;
    while(iCnt>=1)
    {
        printf("*");
        iCnt --;
    }
}
 
int main()
{
     int iValue = 0;
     printf("Enter the Number : \n");
     scanf("%d",&iValue);

     Display(iValue);

    return EXIT_SUCCESS;
}