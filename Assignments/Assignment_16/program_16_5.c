#include <stdio.h>
#include <stdlib.h>

/*
    Function Name : Pattern
    Description   : Accept number of rows and  of column from user and display below pattern
                    1  2  3  4
                    5  6  7  8
                    9  10 11 12
    Input : Interger ,Integer
    output: void
    Author : krushna Ravindra chaudhari
    Date   : 08/11/26

*/
void pattern(int iRows, int iColumn)
{
    int k = 0; // take third variable to store the result

    printf("The pattern Displayed\n");
    k = 1;
    for (int i = iRows; i >= 1; i--)
    {

        for (int j = 1; j <= iColumn; j++)
        {

            printf("%d\t", k);
            k++;
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    printf("Enter Number of Rows And Column\n");
    scanf("%d%d", &iValue1, &iValue2);
    pattern(iValue1, iValue2);

    return EXIT_SUCCESS;
}