#include <stdio.h>
#include <stdlib.h>
/*

    Function Name : CalculateElectricityBill
    Description : Calculate electrictity based on the Tax slabs
    input :INT
    output : Float
    Author : Krushna Ravindra chaudhari
    Date  : 21/10/2026

*/

 float CalculateElectricityBill(int iUnits)
{
    float fBill = 0.0f;
    if ((iUnits <=100))
    {
        fBill = (iUnits*5.0f);
        return fBill;
       
    }
    else if(iUnits <=200)
    {
        fBill = (100 * 5) +((iUnits - 100) * 7.0f);
         return fBill;
    }
    else 
    {
        fBill = (100 * 5.0f) +(100 * 7.0f) +((iUnits - 200)*10.0f);
        
        return fBill;
    }
}
int main()
{
    int iUnits = 0;
    float fRet = 0.0f;
    printf("Enter consumed unit\n");
    scanf("%d", &iUnits);

     fRet = CalculateElectricityBill(iUnits);

    printf(" total bill is %f",fRet);

    return EXIT_SUCCESS;
}