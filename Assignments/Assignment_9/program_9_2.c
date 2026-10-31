#include <stdio.h>
#include <stdlib.h>
/*
    Function Name : DollarToINR
    Description   : Accept amount in us dollar and return its corresponding value in Indian currency consider 1$ as 70 rupees.
    Input         : Integer
    Output        : Integer
    Author        : Krushna Ravindra Chaudhari
    Date          : 30/10/2026
*/

int DollarToINR(int iNO)
{
    int iCnt = 0;
    if (iNO < 0)
    {
        iNO = -iNO;
    }
    return (iNO * 70);
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter the Number\n");
    scanf("%d", &iValue);
    iRet = DollarToINR(iValue);
    printf("amount in Rupees %d", iRet);

    return EXIT_SUCCESS;
}
