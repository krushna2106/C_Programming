
//Input :4
// 1 2 3 4 
#include <stdio.h>
#include <stdlib.h>

void Display(int iNo) //  iNo is local variable of of class display
                      // and it store the argument that passed by the main method to call it 
                      // here the method calling by passing the parameter is using

{
     int iNo = 0;
    int iCnt = 0;
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {

        printf("%d\t" ,iCnt);
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
