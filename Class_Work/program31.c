#include<stdio.h>
#include<Stdlib.h>

int main()
{

    char sName[30];
    int iAge = 0;
    float fMarks = 0.0f;


    printf("Enter Your name\n");

    scanf("%[^'\n'] s", sName);  //enter remains in input buffer

    printf("Enter your Age:\n");
    scanf(" %d",&iAge); // space added

    printf("Enter your marks:\n");
    scanf("%f",&fMarks);

    printf("welcome%s",sName);

    printf("Your Age is %d\n",iAge);
    printf("Your markks is %f\n",fMarks);
    

return EXIT_SUCCESS;

}
