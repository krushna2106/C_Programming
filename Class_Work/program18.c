#include<stdio.h>
#include<stdlib.h>

void CheckEven( int iNo)
{
if((iNo % 2) == 0)
    {
        printf("it is even nuber\n");



    }
    else
    {

         printf("It is odd number");
    }
    
}
int main()
{
 int ivalue = 0;

 printf("Enter the nuber:\n");
    scanf("%d", &ivalue);

    CheckEven(ivalue);
    

    

    return EXIT_SUCCESS;
}