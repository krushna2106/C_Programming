#include <stdio.h>
#include <stdlib.h>
/*
    Function Name : multiply
    Description : Accept three number from user and and print the its multiplication
    Input : Integer
    output : integer
    Author : Krushan Ravindra chaudhari
    Date : 04/11/20206
*/

int multiply(int iNO1,int iNO2,int iNO3)
{
    if(iNO1 == 0)
    {
        iNO1 = 1;

    }
    else if(iNO2 == 0)
    {
        iNO2 = 1;
    }
    else if(iNO3 == 0)
    {
        iNO3 = 1;
    }

    return iNO1*iNO2*iNO3;
}

int main()
{
    int iValue1 = 0,iValue2,iValue3;
    int iRet = 0;

    printf("Enter first Number\n");
    scanf("%d",&iValue1);

    
    printf("Enter Second Number\n");
    scanf("%d",&iValue2);


    
    printf("Enter Third Number\n");
    scanf("%d",&iValue3);


    iRet = multiply(iValue1,iValue2,iValue3);
    printf("The multiplication is : %d",iRet);


    return EXIT_SUCCESS;
}
