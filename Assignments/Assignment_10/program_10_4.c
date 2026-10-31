#include <stdio.h>
#include <stdlib.h>
/*
    Function Name : FhtoCs
    Description   : Accepts the temprature in Fahrenheit and conver it into Celcius.(1 celsius = (Fahenheit -32)*(5/9))
    Input         : Integer
    Output        : Integer
    Author        : Krushna Ravindra Chaudhari
    Date          : 30/10/2026
*/

float FhtoCs(float fTemp)
{
    float fCelcius = 0.0f;

    fCelcius = (fTemp - 32) * (5.0f / 9.0f);
    return fCelcius;
}

int main()
{
    float fTemp = 0.0f;
    float fRet = 0;
    printf("Enter the temparature in Farenheit\n");
    scanf("%f",&fTemp);
    fRet = FhtoCs(fTemp);
    printf("The Temprature in Celcius: %f", fRet);

    return EXIT_SUCCESS;
}