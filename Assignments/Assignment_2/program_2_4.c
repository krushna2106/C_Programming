#include<stdio.h>
#include<stdlib.h>

/*
    Function Name : Display
    Description :it is used the data based on Frequency 
    input :INT INT
    output : 
    Author : Krushna Ravindra chaudhari
    Date  : 20/10/2026
*/


void Display(int iNo,int ifrequency)

{
    
    int icnt = 0;
    icnt= 1;
    for(icnt =1;icnt<=ifrequency;icnt++)
    {
        printf("%d\n",iNo);
    }

}
 
int main()
{
     int iValue = 0;
     int iCount = 0;

     printf("Enter the Number : \n");
     scanf("%d",&iValue);

     printf("Enter frequency : \n");
     scanf("%d",&iCount);


     Display(iValue,iCount);

    return EXIT_SUCCESS;
}