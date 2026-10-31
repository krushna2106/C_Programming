#include <stdio.h>
#include <stdlib.h>
/*

    Function Name : CalculateDiscoun
    Description : diplay the discounted price
    input : float
    output : float
    Author : Krushna Ravindra chaudhari
    Date  : 21/10/2026
*/
float CalculateDiscount(float fAmount)
{
    float FfinalAmount = 0.0f;
    float FfinalDiscount = 0.0f;

    if ((fAmount < 1000))
    {

        return fAmount;
    }
    else if ((fAmount >= 1000) && (fAmount <= 5000))
    {
        FfinalDiscount = ((fAmount * 10) / 100.0f);
        FfinalAmount = (fAmount - FfinalDiscount);

        return FfinalAmount;
    }
    else
    {

        FfinalDiscount = ((fAmount * 20) / 100.0f);
        FfinalAmount = (fAmount - FfinalDiscount);
        return FfinalAmount;
    }
}
int main()
{
    float fAmount = 0.0f;
    float fRet = 0.0f;

    printf("Enter The Amount\n");
    scanf("%f", &fAmount);

    fRet = CalculateDiscount(fAmount);
    printf("The final Amount is %f\n", fRet);

    return EXIT_SUCCESS;
}
