
//Input :10
// 1   3   5   7   9   // the Gap between the input is 2 
#include <stdio.h>
#include <stdlib.h>

void Display(iNo)


{
   // here the we modified the updation section by 2 m
    int iCnt = 0;
    for (iCnt = 1; iCnt <= iNo; iCnt=+2)
    {

        printf("%d\t",iCnt);
    }

    printf("\n");
}

int main()
{
    int iValue = 0;
    printf("enter the frequency\n");
    scanf("%d", &iValue);

    Display(iValue);

        return EXIT_SUCCESS;
}
