#include <stdio.h>
#include <stdlib.h>
/*
    Fucntion Name : strlwrX
    Description : Accept the string from user and convert it into lower case.
    Input :    String
    output :   lower case string
    Author : krushna Ravindra chaudhari
    Date  : 10/11/20206
*/
void strlwrx(char *str)
{

    while (*str != '\0')
    {
        if (*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32; // uppercase of lower case
        }
        

        str++;
    }
}

int main()
{
    char Arr[50];

    printf("Enter String : ");
    scanf("%[^\n]", Arr);

    strlwrx(Arr);
    printf("Modified string is %s", Arr);

    return EXIT_SUCCESS;
}