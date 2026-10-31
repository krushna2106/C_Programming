#include <stdio.h>
#include <stdlib.h>
/*
    Function Name : SquareMeter
    Description   : Accepts area in square feet and convert it intoo square meter.(1 square feet + 0.0929 Square meter) 
    e.g  5 -> 0.464515
    Input         : Integer
    Output        : double
    Author        : Krushna Ravindra Chaudhari
    Date          : 30/10/2026
*/

double SquareMeter(int iSquareFeet)
{
    double fSquaremeter = 0.0;

    fSquaremeter = iSquareFeet * 0.0929f;

    return fSquaremeter;

    
}
int main()
{
    int iSquareFoot = 0;
    double dRet = 0.0f;

    printf("Enter area in square feet\n");
    scanf("%d",&iSquareFoot);

    dRet = SquareMeter(iSquareFoot);

    printf("The Area in Square meter: %lf", dRet);

    return EXIT_SUCCESS;
}