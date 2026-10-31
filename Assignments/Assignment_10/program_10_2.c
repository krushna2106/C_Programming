#include<stdio.h>
#include<stdlib.h>
/*
    Function Name : RectangleArea
    Description   : Accepts width and  Height from user and calculate it's area
    Input         : float, flaot
    Output        : double
    Author        : Krushna Ravindra Chaudhari
    Date          : 30/10/2026
*/

double RectangleArea(float fwidth,float fHeight)
{
    double dArea = 0.0;
    
    
    dArea =  (fwidth * fHeight);

    return dArea;
}
int main()
{
    float fWidth = 0.0f , fHeight;
    double dRet = 0;
    printf("Enter Width and Height of Rectangle\n");
    scanf("%f%f",&fWidth,&fHeight);
    dRet = RectangleArea(fWidth, fHeight);
    printf("Area of Rectangle is :%lf",dRet);


    return EXIT_SUCCESS;
}