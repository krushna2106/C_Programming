

#include <stdio.h>
#include<stdlib.h>
// like the shop licence
/////////////////////////
/*   Functin name : Addition
     Input n      :  Integer, Inter
     output       :  Interger
     Destription  :performs Addtion
     Date         : 04/ 10/ 2026
     Author name  : Krushna Ravindra chaudhari
*/
/////////////////////////
int Addition(
                 int iNo1,  // First input
                
                 int iNo2 // second input
            )
{
    int iAns = 0;
    iAns = iNo1 + iNo2; // Bussiness logic
    return iAns;
}
/////////////////////////
/*
    Entry point of the application
*/
/////////////////////////
int main()
{
    int ivalue1 = 0, ivalue2 = 0, iResult = 0;

    printf("Enter first number\n");
    scanf("%d", &ivalue1);

    printf("Enter second number\n");
    scanf("%d", &ivalue2);

    iResult = Addition(ivalue1, ivalue2);

    printf("Addtion is : %d\n", iResult);

    return EXIT_SUCCESS;
}
/////////////////////
/*
step 5 : test the program

 tested test cases
 -------------------------------
 input1     Input2      output
-------------------------------
    10            11        21
    11           0          11
    0            11          11
    20           -9           11
    -9            20          11
    -20            -10         -30
---------------------------------
*/
///////////////////////////////////////
