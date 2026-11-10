#include<stdio.h>
#include<stdlib.h>
/*
    Fucntion Name : DisplayDigit
    Description : Accept the string from user and display only digits from that string
    Input :    String
    output : Digits from the String
    Author :  Krushna Ravindra Chaudhari
    Date : 10/11/2026
*/
#define False 0
#define True 1
void DisplayDigit(char *str)
{
    int iFlag = False;
   

    while(*str != '\0')
    {
        if(*str >= '0' && *str <= '9')
        {
         printf("%c\t",*str);
            
         iFlag = True;
       
        }

        
        str++;
    }

    if(iFlag == False)
    {
        printf("There is no digit in the string\n");

    }

}

int main()
{
    char Arr[50];

    printf("Enter String : ");
    scanf("%[^\n]",Arr);

    DisplayDigit(Arr);
   

    return EXIT_SUCCESS;
}