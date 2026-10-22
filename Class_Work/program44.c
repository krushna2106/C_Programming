#include<stdio.h>
#include<stdlib.h>
 float Average(int ino1, int ino2)
 {
     
    float fans = 0.0f;
  {

     fans=( ino2+ino2)/2;

     return fans;

  }
  


 }
int main()
{
  int ivalue1 = 0, ivalue2 = 0;
    float fResult = 0.0f;

  

  printf("Enter first number\n");
  scanf("%d",&ivalue1);

   printf("Enter second  number\n");
  scanf("%d",&ivalue2);

     fResult = Average(ivalue1,ivalue2);

     printf("Average number is %f\n",fResult);
  
  
   EXIT_SUCCESS;
}
