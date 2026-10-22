#include<stdio.h>
#include<stdlib.h>

/*
    
    Function Name : FindGreate
    Description : Display the greater value between two interger
    input :INT,INT
    output : INT
    Author : Krushna Ravindra chaudhari
    Date  : 21/10/2026

*/
void  FindGreater(int iFirst,int iSecond)
{
    if(iFirst>iSecond)
    {
        printf("%d  is Greater\n",iFirst);
    }
    else if(iFirst<iSecond)
    {
        printf("%d  is Greater\n",iSecond);
    }
    else if(iFirst =iSecond)
    {
        printf("both values are equals");
    }
}

int main()
{

    int iValue1 = 0;
    int iValue2 = 0;
    printf("Enter 2  Number\n");
    scanf("%d %d",&iValue1,&iValue2);

    FindGreater(iValue1,iValue2);

    return EXIT_SUCCESS;
}