#include<stdio.h>
#include<Stdlib.h>
/*
    Function Name : void
    Description : Accept the name from user and print that name
    Input : String
    output : String
    Author : Krushan Ravindra chaudhari
    Date : 04/11/20206
*/

int main()
{
    char Name[30];
    printf("Enter your Name\n");
    scanf("%[^'\n']S",&Name);


    printf("Your name is %s",Name);

    return EXIT_SUCCESS;
    