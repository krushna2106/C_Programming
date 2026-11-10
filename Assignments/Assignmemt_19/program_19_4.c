#include<stdio.h>
#include<stdlib.h>
/*
    Function Name : Pattern
    Description   : Accept number of rows and  of column from user and display below pattern
                   $  *  *  *  *
                   #  $  *  *  *
                   #  #  $  *  *
                   #  #  #  $  *
                   #  #  #  #  $
    Input : Interger ,Integer
    output: void
    Author : krushna Ravindra chaudhari
    Date   : 09/11/26
*/
void pattern(int iRow,int iCol)
{
    for(int i = 1;i<=iRow;i++)
    {
        for(int j = 1;j<=iCol;j++)
        {
            if(i == j || i == 1||j == 1|| i==iRow||j==iCol)
            {
                printf("*\t");
            }
            else
            {
                printf(" \t");
            }
            
        }
        printf("\n");
    }
}
int main()
{
    int iValue1=0,iValue2 = 0;
    printf("Enter the Number of rows and colunn\n");
    scanf("%d %d",&iValue1,&iValue2);

    pattern(iValue1,iValue2);


    return EXIT_SUCCESS;
}