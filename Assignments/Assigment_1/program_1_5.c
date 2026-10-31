#include<stdio.h>
#include<stdlib.h>
/*
    
    Function Name : Accept
    Description : Accept one number from user and print that number of * on screen
    input :INT
    output :  void
    Author : Krushna Ravindra chaudhari
    Date  : 21/10/2026

*/
void Accept(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt<=iNo;iCnt++)
    {

        printf("*");
    }

}



int main()
{
    int iValue = 0;
    printf("Enter the numbers\n");
    scanf("%d\n",iValue);
    Accept(iValue);



    return EXIT_SUCCESS;
}