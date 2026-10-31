#include<stdio.h>
#include<stdlib.h>
/*
    
    Function Name : FindGreate
    Description : Display the greater value between three interger
    input :INT,INT
    output : void
    Author : Krushna Ravindra chaudhari
    Date  : 21/10/2026

*/

void FindGreatest(int iFirst ,int iSecond, int iThird)
{
    if((iFirst >= iSecond) && (iFirst >= iThird))
    {
        printf(" the Greatst number is:%d ",iFirst);
    }
    else if((iSecond>=iFirst) && (iSecond >= iThird))
    {
        printf(" the Greatest number is: %d",iSecond);

    }
    else 
    {
        printf("the Greatest number is %d",iThird);

    }
}

int main()
{

    int iValue1 = 0, iValue2 = 0, iValue3 = 0;
    printf("Enter the three Numbers: ");
    scanf("%d %d %d3",&iValue1,&iValue2,&iValue3);

    FindGreatest(iValue1,iValue2,iValue3);

    return EXIT_SUCCESS;

}