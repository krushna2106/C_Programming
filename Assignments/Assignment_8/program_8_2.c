#include <stdio.h>
#include <stdlib.h>

/*
    Function Name : Display
    Description   : Accepts a single digit number from the user and displays its word representation.
    Input         : Integer
    Output        : Void
    Author        : Krushna Ravindra Chaudhari
    Date          : 30/10/2026
*/

void Display(int iNO)
{
    switch (iNO)
    {
    case 0:
        printf("zero");
        break;

    case 1:
        printf("One");
        break;

    case 2:
        printf("Two");
        break;

    case 3:
        printf("Three");
        break;

    case 4:
        printf("Four");
        break;

    case 5:
        printf("Five");
        break;

    case 6:
        printf("Six");
        break;

    case 7:
        printf("Seven");
        break;

    case 8:
        printf("Eight");
        break;

    case 9:
        printf("Nine");
        break;

    default:
        printf("Invalid Input");
    }
}
int main()
{
    int ivalue = 0;
    printf("Enter the Number: \n");
    scanf("%d", &ivalue);
    Display(ivalue);
    return EXIT_SUCCESS;
}