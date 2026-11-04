#include<stdio.h>
#include<stdlib.h>
/*
    Function Name : percentage
    Description : Accept the obtained marks and total marks from user and calculate  it's percentage
    Input : int , int
    output : float
    Author : Krushan Ravindra chaudhari
    Date : 04/11/20206
*/
float Percentage(int obtainMarks, int totalMarks )
{
    if(totalMarks == 0)
    {
        return 0.0f;
    }

    return ((float)obtainMarks/totalMarks)*100;

}
int main()
{
     float iValue1 = 0,iValue2 = 0;
    float fRet = 0.0f;

    printf("Please Enter obtained Marks\n");
    scanf("%f",&iValue1);

     printf("Please Enter total Marks\n");
     scanf("%d",&iValue2);

     fRet = Percentage(iValue1,iValue2);
     printf("The percentage is :%2.f\n",fRet);

    return EXIT_SUCCESS;
}
