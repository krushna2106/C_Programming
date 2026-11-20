#include <stdio.h>
#include <stdlib.h>
/*
    Fucntion Name : ChkChar
    Description : Accept the string  and character from the user and check wheather the character is present in string or not
    Input :    String ,character
    output : BooL
    Author : Krushna Ravindra Chaudhari
    Date  : 11/11/2026
*/


#define True 1
#define False 0

typedef int BOOL;
// can use string library fucntion;
BOOL ChkChar(char *str, char ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {
        ch = ch + 32;
    }

    while (*str != '\0')
    {
        if (*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;
        }

        if (*str == ch)
        {
            return True;
        }
        
        
        str++;
    }

    return False;
}

int main()
{
    char Arr[50];
    char cValue = '\0';

    BOOL bRet = False;

    printf("Enter the String\n");
    fgets(Arr, 50, stdin);

    printf("Enter the Character\n");
    scanf("%c", &cValue);

    bRet = ChkChar(Arr, cValue);

    if (bRet == 1)
    {
        printf("Character is There is string\n");
    }
    else
    {
        printf("Character is not There in the string\n");
    }

    return EXIT_SUCCESS;
}