#include<stdio.h>
#include<stdlib.h>
/*
    Function Name : DisplayDigit
    Description : accept Number from user and display its digits in reverse
    input: int
    output: int
    Author: Krushna Ravindra chaudhari
    Date: 3/11/26
    

*/
void DisplayDigit(int iNO)
{
    int iDigit = 0;
    if(iNO<0)
    {
        iNO = -iNO;
    }

    while(iNO !=0)
    {
       iDigit = iNO %10;

       printf("%d\n",iDigit);

       iNO = iNO/10;

    }
}
int main()
{
    int iValue = 0;
    printf("Enter number:\n");
    scanf("%d",&iValue);

    DisplayDigit(iValue);

    return EXIT_SUCCESS;
}