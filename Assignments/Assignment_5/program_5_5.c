#include <stdio.h>
#include <stdlib.h>
#include<ctype.h> // IMPORT TO USE THE CHARACTER METHOD
/*

    Function Name : CheckCharacter
    
    Description : Display Character it is uppercase or lowercase,or digit or specia; character
    output : void
    Author : Krushna Ravindra chaudhari
    Date  : 21/10/2026
*/
void CheckCharacter(char cValue)
{
    if(isupper(cValue))
    {
        printf("%c is upperrcase  Alphabet\n",cValue);

    }
    else if(islower(cValue))

    {
        printf("%c is a lowerCase Alphabet\n",cValue);

    }
    else if(isdigit(cValue))
    {
        printf("%c is digit\n",cValue);
    }
    else 
    {
        printf("  Special charcter\n");

    }
}
int main()
{

    char cValue = '\0';

    printf("Enter the  Character :\n");
    scanf("%C", &cValue);

    CheckCharacter(cValue);
    return EXIT_SUCCESS;
}