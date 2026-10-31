

#include<stdio.h>
#include<stdlib.h>
/*
    
    Function Name : Display
    Description : Accept the number from user and the number using backward loop
    input :INT
    output :  void
    Author : Krushna Ravindra chaudhari
    Date  : 21/10/2026

*/

void display()
{
    int iCnt =0;
    iCnt = 5;
    while(iCnt>1)
    {

        printf("%d\n",iCnt);
        iCnt --;
    }

}

int main()
{
    display();


    return EXIT_SUCCESS;
}