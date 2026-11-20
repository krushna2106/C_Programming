#include <stdio.h>
#include <stdlib.h>

/*
    Function Name : LastOcc
    Description   : Accept string and character from user and
                    return index of last occurrence of that character.
    Input         : String, Character
    Output        : Integer
    Author        : Krushna Ravindra Chaudhari
*/

int LastOcc(char str[], char ch)
{
    int i = 0;
    int iPos = -1;

    if(ch >= 'A' && ch <= 'Z')
    {
        ch = ch + 32;
    }

    while(str[i] != '\0')
    {
        char temp = str[i];

        if(temp >= 'A' && temp <= 'Z')
        {
            temp = temp + 32;
        }

        if(temp == ch)
        {
            iPos = i;    // Store latest position
        }

        i++;
    }

    return iPos;
}

int main()
{
    char Arr[50];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter the string : ");
    fgets(Arr, sizeof(Arr), stdin);

    printf("Enter the character : ");
    scanf("%c", &cValue);

    iRet = LastOcc(Arr, cValue);

    if(iRet == -1)
    {
        printf("Character not found\n");
    }
    else
    {
        printf("Last occurrence index is : %d\n", iRet);
    }

    return 0;
}