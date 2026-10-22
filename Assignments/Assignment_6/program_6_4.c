#include <stdio.h>
#include <stdlib.h>
/*

    Function Name : checkTriangle
    Description : Check the side of triagle 
    input : int ,int,int
    output : void
    Author : Krushna Ravindra chaudhari
    Date  : 21/10/2026
*/
void CheckTriangle(int iSide1,int iSide2,int iSide3)

{
   
    if(iSide1,iSide2,iSide3 >= 0)
    {

        if (((iSide1 + iSide2)>iSide3) &&
        (iSide2 +iSide3)>iSide1 &&
        (iSide1 +iSide3)>iSide2)
        {
            printf("valid triagle\n");
        }
        else{
            printf("invalid triangle\n");
        }
    } 
    else 
    {
        printf("Invalid input");
    } 
}
    
int main()
{
    int iSide1 = 0, iSide2 = 0, iSide3 = 0;

    printf("Enter Three sides\n");
    scanf("%d %d %d",&iSide1,&iSide2,&iSide3);

    CheckTriangle(iSide1, iSide2, iSide3);

    return EXIT_SUCCESS;
}
