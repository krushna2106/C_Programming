
//Input :10
// 1 3 5 7 9
#include <stdio.h>
#include <stdlib.h>

void Display(iNo)


{
   
    int iCnt = 0;
    for (iCnt = 1; iCnt <= iNo; iCnt = iCnt+2)  // small change is dispacement section
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
