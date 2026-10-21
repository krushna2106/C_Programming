/*
step 1 : Understand the problem statement
step 2 : write the algorithm
step 3 : decide the programing language
step 4 : write the program
step 5 : test the program
*/
////////////////////////////////////
///
///  Step 1:Understand the problem statement
 ///  User is goig to inter any two interger and 
 //  we have to preform  the additon
///////////////////////////////////


///////////////////////////
///  step 2: write the program
///
/* Start 
         Acceept first number as no1
         Acceept first number as no2
         Create the variable to store the result
         Perform the addition and store into Ans
         Display the result from Ans
*/
/////////////////////

/////////////////////
// step 3 : decide the programing language
//            we select c programing
////////////////////////////////////

///////////////////////
/*
    step 4 : write the program
*/
/////////////////////////

#include<stdio.h>
int Addition(int iNo1 ,int iNo2)
{
    int iAns=0 ;
    iAns= iNo1 +iNo2;    // Bussiness logic
    return iAns;
}
int main()
{
     int ivalue1 = 0 , ivalue2 = 0, iResult= 0  ;

      printf("Enter first number\n");
      scanf("%d",&ivalue1);

      printf("Enter second number\n");
      scanf("%d",&ivalue2);

       iResult = Addition(ivalue1 ,ivalue2); 

      printf("Addtion is : %d\n",iResult);


    return 0;
}
