#include <stdio.h>
#include <stdlib.h>
/*
    Function Name : Pattern
    Description   : Accept number of rows and  of column from user and display below pattern
                    a  b  c  d  e
                    1  2  3  4  5
                    a  b  c  d  e
                    1  2  3  4  5
    Input : Interger ,Integer
    output: void
    Author : krushna Ravindra chaudhari
    Date   : 08/11/26

*/
void pattern(int iRows, int iColumn)
{
  char ch = '\0';

    for (int i = 1; i <= iRows; i++)
    {

        for (int j =1,ch ='a'; j <= iColumn; j++,ch++)
        {
          if((i % 2)!= 0)
          {
            printf("%C\t",ch);

          }
          else
          {
            printf("%d\t",j);
          }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    printf("Enter the Number of Rows and Column\n");
    scanf("%d %d", &iValue1, &iValue2);
    pattern(iValue1, iValue2);

    return EXIT_SUCCESS;
}