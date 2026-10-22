#include <stdio.h>
#include <stdlib.h>
/*

    Function Name : CalculateBonus
    Description : calculate Bonus Basis on Experiance
    input : float,INT
    output : void
    Author : Krushna Ravindra chaudhari
    Date  : 21/10/2026
*/
void CalculateBonus(float fsalary, int iYears)
{
    float fBonus = 0.0f;
    if ((fsalary <= 0)  || (iYears <= 0))

    {
        printf("you entered invalid input\n");
        return;
    }
    else if (iYears >= 10)
    {
        fBonus = ((fsalary * 15) / 100.0f);
        printf(" your Bonus is %f", fBonus);
    }
    else if ((iYears < 10) || (iYears >= 5))
    {
        fBonus = ((fsalary * 10) / 100.0f);
        printf(" your Bonus is %f", fBonus);
    }
    else if (iYears < 5)
    {
        fBonus = ((fsalary * 5) / 100.0f);
        printf(" your Bonus is %f", fBonus);
    }
}
int main()
{
    float fsalary = 0.0f;
    int iYears = 0;
    printf("Enter salary and years of services: ");
    scanf("%f %d", &fsalary,&iYears);
    CalculateBonus(fsalary, iYears);
    return EXIT_SUCCESS;
}