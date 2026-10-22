#include<stdio.h>
#include<stdlib.h>
/*
    Function Name : Display
    Description : displsy the data Basis of inpurt
    input :INT
    output : 
    Author : Krushna Ravindra chaudhari
    Date  : 20/10/2026
*/




void display( int iNo)
{
    if(iNo<10)
    {
        printf("hello");
    }
    else{
        printf("Demo");
    }



}


int main()
{
    int iValue =0;
    printf("Enter the Number:\n");
    scanf("%d",&iValue);

    display(iValue);


    return EXIT_SUCCESS;
}
