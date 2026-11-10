#include<stdio.h>
#include<stdlib.h>
/*
    Fucntion Name : struprx
    Description : Accept the string from user and conver it intp upper case.
    Input :    String
    output : Upper case string
    Author : Krushna Ravindra Chaudhari
    Date  : 10/11/2026
*/
void struprx(char *str)
{
   

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
        }

        str++;
    }

}

int main()
{
    char Arr[50];

    printf("Enter String : ");
    scanf("%[^\n]",Arr);

    struprx(Arr);
    printf("Modified string is %s",Arr);

    return EXIT_SUCCESS;
}