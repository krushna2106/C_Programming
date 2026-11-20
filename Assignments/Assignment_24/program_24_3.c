#include <stdio.h>
#include <stdlib.h>
/*
    Fucntion Name : ChkChar
    Description : Accept the string from user and accept one character .return index of first occurrance of that character
    Input :    String ,character
    output : int
    Author : Krushna Ravindra Chaudhari
    Date  : 11/11/2026
*/



// can use string library fucntion;
int  countChar(char str[], char ch)
{
    int i = 0;

    if (ch >= 'A' && ch <= 'Z')
    {
        ch = ch + 32;
    }

    while (str[i] != '\0')
    {
        char temp = str[i];
        if (*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;
        }

        if (temp == ch)
        {
            return i;
        }
        
        
        i++;
    }
    return EXIT_FAILURE;

 
}

int main()
{
    char Arr[50];
    char cValue = '\0';

    int iRet = 0;

    printf("Enter the String\n");
    fgets(Arr, 50, stdin);

    printf("Enter the Character\n");
    scanf("%c", &cValue);

    iRet = countChar(Arr, cValue);
    printf("Character frequency is %d",iRet);

    
    return EXIT_SUCCESS;
}