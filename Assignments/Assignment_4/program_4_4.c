#include<stdio.h>
#include<stdlib.h>

/*
    
    Function Name :  CheckVotingEligibility
    Description : show the eligibility of voting
    input :INT
    output :  eligible or not
    Author : Krushna Ravindra chaudhari
    Date  : 21/10/2026

*/
void  CheckVotingEligibility(int iAge)
{
    if(iAge > 18)
    {
        printf("you are eligible for voting");

    }
    else{
        printf("you are not eligible of voting");
    }
}
int main()
{

    int iAge;
    printf("Enter yout Age\n");
    scanf("%d",&iAge);

   CheckVotingEligibility(iAge);

    return EXIT_SUCCESS;
}