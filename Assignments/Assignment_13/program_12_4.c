#include <stdio.h>
#include <stdlib.h>
/*
    Fucntion Name: CountFour
    Description: Accept the Number from the user and Count Frequency 4 in the digit
    Input: Integer
    output:Integer
    author: krushna Ravindra chaudhari
    Date 4/11/2026
*/
int CountFour(int iNO)
{
    int iDigit = 0;
    int iCount = 0;

    while(iNO != 0)
    {
        iDigit = iNO % 10;
        
            if(iDigit == 4)
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

    iRet = CountFour(iValue);
    printf("The Frequecy of 4 is:%d\n",iRet);

    return EXIT_SUCCESS;

}
