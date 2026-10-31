#include <stdio.h>
#include <stdlib.h>
/*

    Function Name : Display grade
    Description : Display grade of student
    input :Float,Float
    output : void
    Author : Krushna Ravindra chaudhari
    Date  : 21/10/2026

*/
void DisplayGrade(float fmarks)
{
    if (fmarks >= 90 && fmarks <= 100)
    {
        printf("A");
    }
    else if (fmarks >= 75 && fmarks <= 89)
    {
        printf("B");
    }
    else if (fmarks >= 74 && fmarks <= 60)
    {
        printf("c");
    }
    else if (fmarks >= 40 && fmarks <= 59)
    {
        printf("d");
    }
    else if (fmarks < 40)
    {
        printf("fail");
    }
    else
    {
        printf("You Entered invalid input\n");
    }
}
int main()
{
    float fmarks = 0.0f;
    printf("Enter the marks\n");
    scanf("%f", &fmarks);
    DisplayGrade(fmarks);
    return EXIT_SUCCESS;
}