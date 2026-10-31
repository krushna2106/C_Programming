#include <stdio.h>
#include <stdlib.h>
/*

    Function Name : Number
    Description :  accept number  from user and if numbver is less the 50 print small,
     if number is greater than 50 and less than 100 then print Medium ,if number greate than 100 then print large
    input :INT
    output : void
    Author : Krushna Ravindra chaudhari
    Date  : 30/10/2026

*/
void Number(int iNO)
{
    if (iNO < 0)
    {
        iNO = -iNO;
    }

        if (iNO < 50)
        {
            printf("Small");
        }
        else if (iNO < 100)
        {
            printf("Medium");
        }
        else
        {
            printf("Large");
        }
    
}
int main()
{
    int iValue = 0;
    printf("Enter the number\n");
    scanf("%d", &iValue);
    Number(iValue);

    return EXIT_SUCCESS;
}