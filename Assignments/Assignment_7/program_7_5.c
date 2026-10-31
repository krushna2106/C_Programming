#include<stdio.h>
#include<stdlib.h>
/*

    Function Name : MultipleDisplays
    Description :  accept number N numbers from user and print first 5 multiple of N
    input :INT
    output : void
    Author : Krushna Ravindra chaudhari
    Date  : 30/10/2026

*/
void  MultipleDisplay(int iNO)
{
    int iCnt = 0;
    for(iCnt=1;iCnt<=5;iCnt++)
    {
        printf("%d\t",iCnt*iNO);
    }
    printf("\n");
}
int main()
{
    int iValue = 0;
    printf("Enter the Number\n");
    scanf("%d",&iValue);
    MultipleDisplay(iValue);
    return EXIT_SUCCESS;
}