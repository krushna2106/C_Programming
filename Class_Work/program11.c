#include<stdio.h>
#include<stdlib.h>


int main()
{
    
    int NO = 0;

    printf("Enter NUmber:\n");

      if(scanf("%d",&NO) != 1) // here  we are cheacking the return value of scanf 

      {
        printf("Invalid input");

        return EXIT_FAILURE;

      }

      else{
      printf("Input is valid");
      }
    


    return EXIT_SUCCESS;
}
