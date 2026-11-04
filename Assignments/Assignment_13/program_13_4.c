#include <stdio.h>
#include <stdlib.h>
/*
    Function Name : MultiDigits
    Description : Accept the Number from user and return the Multipication of all digits
     of digits in between the 3 and 7.
    Input: Interger
    Output: Interger
    Author : Krushna Ravindra chaudhari
    Date : 04/11/2026
*/

int MultiDigits(int iNO)
{
    int iDigit = 0;
    int iMul = 1;
    

    while (iNO != 0)
    {
        iDigit = iNO % 10;
        iMul = iMul * iDigit;

        iNO = iNO / 10;
    }
    return iMul;
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter Number\n");
    scanf("%d", &iValue);

    iRet = MultiDigits(iValue);
    printf("The Multipication Digits Are: %d\n", iRet);

    return EXIT_SUCCESS;
}