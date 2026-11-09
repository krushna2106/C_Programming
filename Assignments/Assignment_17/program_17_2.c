#include <stdio.h>
#include <stdlib.h>
/*
    Function Name : Pattern
    Description   : Accept number of rows and  of column from user and display below pattern
                    2  4  6  8  10
                    1  3  5  7   9
                    2  4  6  8  10
                    1  3  5  7   9
    Input : Interger ,Integer
    output: void
    Author : krushna Ravindra chaudhari
    Date   : 08/11/26

*/
void pattern(int iRows, int iColumn)
{
    int k = 0;

    for (int i = 1; i <= iRows; i++)
    {

        if ((i % 2) == 0)
        {
            k = 1;
        }
        else
        {
            k = 2;
        }
        for (int j = 1; j <= iColumn; j++,k = k+2)
        {
            printf("%d\t",k);
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    printf("Enter the Number of Rows and Column\n");
    scanf("%d%d", &iValue1, &iValue2);
    pattern(iValue1, iValue2);

    return EXIT_SUCCESS;
}