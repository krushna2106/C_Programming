#include<stdio.h>
#include<stdlib.h>
/*
    Function Name : Pattern
    Description   : Accept number of rows and  of column from user and display below pattern
                    1  2  3  4
                    5  6  7  8
                    9  1  2  3 
                    4  5  6  7
    Input : Interger ,Integer
    output: void
    Author : krushna Ravindra chaudhari
    Date   : 08/11/26

*/
void pattern(int iRows, int iColumn)
{
    int k = 0;

    k = 1;
    
    for(int i = 1;i<= iRows;i++)
    {
        for(int j = 1;j<=iColumn;j++,k++)
        {
            if(k == 10)
            {
                k = 1;
            }
            printf("%d\t",k);
            
        }
        printf("\n");
    }
}


int main()
{
    int iValue1 = 0,iValue2 = 0;
    printf("Enter the Number of Rows and Column\n");
    scanf("%d%d",&iValue1,&iValue2);
    pattern(iValue1,iValue2);

    return EXIT_SUCCESS;
}