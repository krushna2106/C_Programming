
//Input :10
// 1 3 5 7 9
#include <stdio.h>
#include <stdlib.h>

int Summation( int iNo)


{
   
    int iCnt = 0;

    int iSum = 0;

    //icnt = icnt =1;
    for (iCnt = 1; iCnt <= iNo; iCnt++) // short hand operator
    {

       iSum = iSum *  iCnt;
    }

    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("enter the frequency\n");
    scanf("%d", &iValue);

    iRet = Summation(iValue);

    printf("Summation is :%d\n",iRet);

        return EXIT_SUCCESS;
}
