#include <stdio.h>
#include <stdlib.h>

/*
    Function Name : Pattern
    Description   : Accept number of rpws and numver of column from user and display below pattern
                    A   B   C    D
                    a   b   c    d
                    A   B   C    D
                    a   b   c    d

    Input : Interger ,Integer
    output: void
    Author : krushna Ravindra chaudhari
    Date   : 08/11/26

*/
void Pattern(int iRow, int iColumn)

{
    char Ch = '\0';

    for (int iCnt = 1; iCnt <= iRow; iCnt++)
    {
        if ((iCnt % 2) == 0)
        {
            Ch = 'a';
        }
        else
        {
            Ch = 'A';
        }

        for (int j = 1; j <= iColumn; j++, Ch)
        {

            printf("%c\t", Ch);
        }
        printf("\n");
    }
}
int main()
{
    int iRow = 0, iColumn = 0;

    printf("Enter the Rows and column\n");
    scanf("%d%d", &iRow, &iColumn);

    Pattern(iRow, iColumn);

    return EXIT_SUCCESS;
}