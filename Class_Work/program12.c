#include<stdio.h>
#include<stdlib.h>


int main()
{
    
    int NO = 0;

    printf("Enter NUmber:\n");

      if(scanf("%d",&NO) != 1)

      {
        fprintf(stderr,"Invalid input");

        return EXIT_FAILURE;

      }


      printf("Input is valid");

    


    return EXIT_SUCCESS;
}
