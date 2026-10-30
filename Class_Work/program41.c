#include<stdio.h>
#include<stdlib.h>
 void Maximum(int ino1, int ino2)
 {
     if(ino1>ino2 )
  {

    printf("Maximum is :%d\n",ino1);

  }
  else{
        printf("Maximum is :%d\n", ino2);

  }


 }
int main()
{
  int ivalue1 = 0, ivalue2 = 0,  iResult = 0;

  

  printf("Enter first number\n");
  scanf("%d",&ivalue1);

   printf("Enter second  number\n");
  scanf("%d",&ivalue2);

    Maximum(ivalue1,ivalue2);
  
  
   EXIT_SUCCESS;
}
