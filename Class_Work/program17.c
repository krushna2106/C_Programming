#include<stdio.h>
#include<stdlib.h>


int main()
{
 int ivalue = 0;

 printf("Enter the nuber:\n");
    scanf("%d", &ivalue);

    if((ivalue % 2) == 0)
    {
        printf("it is even nuber\n");



    }
    else
    {

         printf("It is odd number");
    }
    

    return EXIT_SUCCESS;
}