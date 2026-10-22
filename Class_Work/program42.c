#include<stdio.h>
#include<stdlib.h>
 int Maximum(int ino1, int ino2)
 {
     if(ino2>ino2 )
  {

    return ino1;

  }
  else{
       return ino2;

  }


 }
int main()
{
  int ivalue1 = 0, ivalue2 = 0,  iResult = 0;

  

  printf("Enter first number\n");
  scanf("%d",&ivalue1);

   printf("Enter second  number\n");
  scanf("%d",&ivalue2);

     iResult = Maximum(ivalue1,ivalue2);

     printf("Maximum number is %d\n",iResult);
  
  
   EXIT_SUCCESS;
}
