#include <stdio.h>
#include <stdlib.h>
/*

    Function Name : CheckMultipleDivisibility
    Description : check the value is divisible by 3 and 5 or not
    input : Int,Int
    output : void
    Author : Krushna Ravindra chaudhari
    Date  : 21/10/2026
*/
void CheckAdmission(float fMarks,int iAge)
{
    if((fMarks >= 60) && iAge>=17)
    {
        printf("you are Eligible for admission\n");
    }
    else if((fMarks,iAge <= 0) || (fMarks,iAge>=100))
    {
    printf("your entered inValid input\n");
    }
    
     else 
    {
        printf("Not Eligible\n");

    }
}
int main()
{

    int iAge = 0 ;
    float fMarks = 0;

    printf("Enter Marks and and Age  :\n");
    scanf("%f %d", &fMarks,&iAge);

   CheckAdmission(fMarks,iAge);

    return EXIT_SUCCESS;
}