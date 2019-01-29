#include <stdio.h>
#include <stdlib.h>

int main()
{
    float weight=0.00;
    float height=0.00;
    float bmi=0.00;


    printf("Enter weight:");
    scanf("%f",&weight);
    printf("Enter height:");
    scanf("%f",&height);
    bmi=weight/(height*height);
    printf("bmi=%f",bmi);



    return 0;
}
