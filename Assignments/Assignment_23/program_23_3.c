#include<stdio.h>
#include<stdlib.h>
/*
    Fucntion Name : StrtoggleX
    Description : Accept the string from user and toggle the case.
    Input :    String
    output : toggle String
    Date : 10/11/2026
    Author : Krushna Ravindra Chaudhari


*/
void strtoggleX(char *str)
{
   

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32; // upper case to lower case
        }
        else if (*str >='a'&& *str <= 'z')

            *str = *str +32 ; // lower case of upper case

        str++;
    }

}

int main()
{
    char Arr[50];

    printf("Enter String : ");
    scanf("%[^\n]",Arr);

    strtoggleX(Arr);
    printf("Modified string is %s",Arr);

    return EXIT_SUCCESS;
}