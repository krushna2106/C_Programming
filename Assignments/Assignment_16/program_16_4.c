#include<stdio.h>
#include<stdlib.h>

/*
    Function Name : Pattern
    Description   : Accept number of rows and  of column from user and display below pattern
                     4   4    4    4   4
                     3   3    3    3   3
                     2   2    2    2   2
                     1   1    1    1   1
    Input : Interger ,Integer
    output: void
    Author : krushna Ravindra chaudhari
    Date   : 08/11/26

*/
void pattern(int iRows,int iColumn)
{

    printf("The pattern Displayed\n");

    for(int i = iRows; i>=1;i--)
    {
       
        for(int j = 1; j <= iColumn; j++)
        {
            
            printf("%d\t",i);
        }
        printf("\n");
    }
    
    
}


int main()
{
    int iValue1 = 0,iValue2 = 0;
    printf("Enter Number of Rows And Column\n");
    scanf("%d%d",&iValue1,&iValue2);
    pattern(iValue1,iValue2);
    
    return EXIT_SUCCESS;
}