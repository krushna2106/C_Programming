#include<stdio.h>
#include<stdlib.h>


/*
    Function Name : DisplayFactor
    Description :it is used to displays the factor of a number and use the Updator for input
    input :INT
    output : void
    Author : Krushna Ravindra chaudhari
    Date  : 20/10/2026
*/

void displayFactor(int iNo)
{
    int iCnt = 0;
    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    for(iCnt =1;iCnt<=iNo;iCnt++)
    {
        if((iNo % iCnt) == 0 )
        {

            printf("%d",iCnt);
        }
    }

}
int main()
{
    int  iValue = 0;
    printf("Enter numbers\n");
    scanf("%d",&iValue);
    
    displayFactor(iValue);

    return  EXIT_SUCCESS;

}