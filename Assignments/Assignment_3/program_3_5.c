#include<stdio.h>
#include<stdlib.h>

/*
    Function Name : Chkvowl
    Description : Check the input is vowel or not
    output : void
    Author : Krushna Ravindra chaudhari
    Date  : 20/10/2026
*/


typedef int BOOL;
#define TRUE 1;
#define FALSE 0;
BOOL ChkVowl(char ch)

{
    if (((ch=='a') || (ch=='e') || (ch=='i') ||
        (ch=='o') || (ch=='u') ||
        (ch=='A') || (ch=='E') || (ch=='I') ||
        (ch=='O') || (ch=='U')))
        {

            return 1;
        }

        else{
            return 0;
        }


}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;
    printf("Enter Character\n");
    scanf("%c",&cValue);
    
    bRet = ChkVowl(cValue);
    if (bRet == 1)
    {
        printf("Character is vowel");

    }
    else 
    {
        printf("it is not vowel");
    }

    return EXIT_SUCCESS;
    

}