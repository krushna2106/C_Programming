#include<stdio.h>
#include<stdlib.h>
/*
    Function Name : KMtoMeter
    Description   : Accepts the distance in kilometer from user and convert into meter
    Input         : Integer
    Output        : Integer
    Author        : Krushna Ravindra Chaudhari
    Date          : 30/10/2026
*/

float KMtoMeter(float KM)
{
   int iMeter = 0;

   if(KM < 0)
   {
        KM = -KM;
   }
   iMeter = KM * 1000;
   
   return iMeter;
    


}
int main()
{
    float fValue = 0.0f;
    int iRet = 0;
    printf("Enter the Kilometer\n");
    scanf("%f",&fValue);
    iRet = KMtoMeter(fValue);
    printf("The distance in meter: %d",iRet);


    return EXIT_SUCCESS;
}