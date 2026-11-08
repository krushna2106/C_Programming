#include<stdio.h>
#include<stdlib.h>

/*
    Function Name : Pattern
    Description   : Accept number of rpws and numver of column from user and display below pattern
                   A  A  A  A  A
                   B  B  B  B  B
                   C  C  C  C  C

    Input : Interger ,Integer
    output: void
    Author : krushna Ravindra chaudhari
    Date   : 08/11/26

*/
void pattern(int iRows,int iColumn)
{
    char Ch = '\0';
    for(int i = 1,Ch = 'A'; i<=iRows;i++,Ch++)
    {
       
        for(int j = 1; j <= iColumn; j++)
        {
            printf("%c\t",Ch);
        }
        printf("\n");
    }
    
    
}


int main()
{
    int iValue1 = 0,iValue2 = 0;
    printf("Enter the Rows And Column\n");
    scanf("%d%d",&iValue1,&iValue2);
    pattern(iValue1,iValue2);
    
    return EXIT_SUCCESS;
}