#include <stdio.h>
/*
    Function Name : PrintEven
    Description :it is used to Displays the Even value
    input :INT
    output : void
    Author : Krushna Ravindra chaudhari
    Date  : 20/10/2026
*/

void printfEven(int iNO)
{
    if (iNO <= 0)

        return;

    int iCnt = 0;
    iCnt = 1;
    for (iCnt = 1; iCnt <= iNO; iCnt++)

    {
        printf("%d\n", iCnt * 2);
    }
}

int main()
{
    int iValue = 0;
    printf("'Enter the number:\n");

    scanf("%d", &iValue);
    printEven(iValue);

    return 0;
}