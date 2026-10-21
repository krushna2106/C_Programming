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

int main()
{
     int ivalue1  , ivalue2, iResult  ;

      printf("Enter first number");
      scanf("%d",&ivalue1);

      printf("Enter second number");
      scanf("%d",&ivalue2);

       iResult = ivalue1 + ivalue2 ;  // Bussiness logic

      printf("%d\n",iResult);


    return 0;
}
