#include<stdio.h>

int main()

{
    int c,f;

    printf("Enter Celsius: ");
    scanf("%d",&c);

    f=((c*9)/5)+32;

    printf("\n %d is the Fahernhit",f);

    return 0;
}
