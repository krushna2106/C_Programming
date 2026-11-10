#include<stdio.h>
#include<stdlib.h>
/*
    Fucntion Name : Count_void_Space
    Description : Accept the string from user and count number of void Spaces
    Input :    String
    output : counted Void Spaces
    Author :  Krushna Ravindra Chaudhari
    Date : 10/11/2026
*/
#define False 0
#define True 1
void Count_Void_Space (char *str)
{
    int iFlag = False;
    int iCount = 0;
   

    while(*str != '\0')
    {
        if(*str == ' ')
        {
         iCount++;
            
         iFlag = True;
       
        }

        
        str++;
    }

    if(iFlag == False)
    {
        printf("There is no digit in the string\n");

    }
    else 
    {
        printf("The Number of void spaces : %d",iCount);
    }

}

int main()
{
    char Arr[50];

    printf("Enter String : ");
    scanf("%[^\n]",Arr);

   Count_Void_Space(Arr);
   

    return EXIT_SUCCESS;
}