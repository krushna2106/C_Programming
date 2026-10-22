#include<stdio.h>
#include<stdlib.h>
 float Average(int ino1, int ino2 , int ino3)
 {
     
    float fans = 0.0f;
  {
       // typecasting 
     fans=((float) ino2 + (float)ino2) + (float)ino3/2;

     return fans;

  }
  


 }
int main()
{
  int ivalue1 = 0, ivalue2 = 0, ivalue3 = 0;
    float fResult = 0.0f;

  

  printf("Enter first number\n");
  scanf("%d",&ivalue1);

   printf("Enter second  number\n");
  scanf("%d",&ivalue2);

   printf("Enter Third number\n");
  scanf("%d",&ivalue3);

     fResult = Average(ivalue1,ivalue2,ivalue3);

     printf("Average number is %f\n",fResult);
  
  
   EXIT_SUCCESS;
}

// program is for the average of two number and we should typescast the parameter into float
