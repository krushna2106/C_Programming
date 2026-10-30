#include<stdio.h>
#include<Stdlib.h>

int main()
{

    char sName[30];

    printf("Enter Your name\n");

    scanf("%[^'\n'] s", sName);  

    printf("welcome%s",sName);

return EXIT_SUCCESS;

}
