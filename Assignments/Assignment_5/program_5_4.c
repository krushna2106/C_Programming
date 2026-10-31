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
void CheckMultipleDivisibility(int iNO)
{
    if(((iNO % 3)==0)  && (iNO % 5)==0)
    {
        printf("the value is divisible by both");

    }
    else if((iNO % 3)==0)
    {
        printf("The value is divisible by 3\n");

    }
    else if((iNO % 5)==0)
    {
        printf("The value is divisible by 5\n");
    }
     else 
    {
        printf("The value is not divisible by either\n");

    }
}
int main()
{

    int iValue1 = 0 ;

    printf("Enter the  Number :\n");
    scanf("%d", &iValue1);

    CheckMultipleDivisibility(iValue1);
    return EXIT_SUCCESS;
}