#include<stdio.h>

/*
    Function Name : DisplayConvert
    Description :convert the cases of alphabet
    input :Char
    output : void
    Author : Krushna Ravindra chaudhari
    Date  : 20/10/2026
*/




void DisplayConvert(char Cvalue)
{
    if(Cvalue>='A'&& Cvalue<='Z')
    {
       Cvalue  = Cvalue + 32;
       printf("%c",Cvalue);
    }
    else if (Cvalue>='a'&& Cvalue<='z')
    {
        Cvalue = Cvalue -32;
        printf("%c",Cvalue);
    }

}
int main()
{
    char cvalue = '\0';
    printf("Enter character \n");
    scanf("%c",&cvalue);

    DisplayConvert(cvalue);
    return 0;


}