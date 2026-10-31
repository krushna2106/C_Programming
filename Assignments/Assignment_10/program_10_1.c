#include<stdio.h>
#include<stdlib.h>
/*
    Function Name : CircleArea
    Description   : Accepts radius of circle from user and calculate it's area
    Input         : float
    Output        : double
    Author        : Krushna Ravindra Chaudhari
    Date          : 30/10/2026
*/

double CircleArea(float fRadius)
{
    double dArea = 0.0;
    float pi = 3.14;
    
    dArea = (pi * (fRadius * fRadius));

    return dArea;
}
int main()
{
    float fValue = 0.0f;
    double dRet = 0;
    printf("Enter the Radius\n");
    scanf("%f",&fValue);
    dRet = CircleArea(fValue);
    printf("Area of circle is :%lf",dRet);


    return EXIT_SUCCESS;
}