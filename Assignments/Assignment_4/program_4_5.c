#include<stdio.h>
#include<stdlib.h>

/*
    
    Function Name : CheckDivisibility
    Description : check the value divisible by 5 or not
    input :INT
    output :  divisible 5 or not
    Author : Krushna Ravindra chaudhari
    Date  : 21/10/2026

*/
void  Checkdivisibility(int iNO)
{
    if((iNO % 5)==0)
    {
        printf("The Number is divisible by 5");

    }
    else{
        printf("The number is not dividible by 5");
    }
}
int main()
{

    int iValue = 0;
    printf("enter a Number\n");
    scanf("%d",&iValue);

    Checkdivisibility(iValue);

    return EXIT_SUCCESS;
}