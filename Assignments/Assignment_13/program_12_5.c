#include <stdio.h>
#include <stdlib.h>
/*
    Fucntion Name: Count
    Description: Accept the NUmber from the user and Count Frequency in the digit less than 6
    Input: Integer
    output:Integer
    author: krushna Ravindra chaudhari
    Date 4/11/2026
*/
int Count(int iNO)
{
    int iDigit = 0;
    int iCount = 0;

    while(iNO != 0)
    {
        iDigit = iNO % 10;
        
            if(iDigit < 6)
            {
                iCount++;
            }
        
            iNO = iNO/10;

    }
    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the digit\n");
    scanf("%d",&iValue);

    iRet = Count(iValue);
    printf("The Frequecy of digit less than 6 is: %d\n",iRet);

    return EXIT_SUCCESS;

}
