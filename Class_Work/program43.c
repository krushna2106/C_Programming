#include<stdio.h>
#include<stdlib.h>
 int Minimun(int ino1, int ino2)
 {
     if(ino2<ino2 )
  {

    return ino2;

  }
  else{
       return ino1;

  }


 }
int main()
{
  int ivalue1 = 0, ivalue2 = 0,  iResult = 0;

  

  printf("Enter first number\n");
  scanf("%d",&ivalue1);

   printf("Enter second  number\n");
  scanf("%d",&ivalue2);

     iResult = Minimum(ivalue1,ivalue2);

     printf("Minimun number is %d\n",iResult);
  
  
   EXIT_SUCCESS;
}
