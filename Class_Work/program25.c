#include<stdio.h>
#include<Stdlib.h>

int main()
{

    char sName[30];

    printf("Enter Your name\n");

    scanf("%s", sName);  // here string is not taking full name;

    printf("%s welcome ",sName);

return EXIT_SUCCESS;

}
