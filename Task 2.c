#include<stdio.h>

int main()

{
    float a,b,c,avg;

    printf("Enter First Number: ");
    scanf("%f",&a);
    printf("Enter Second Number: ");
    scanf("%f",&b);
    printf("Enter Third Number: ");
    scanf("%f",&c);

    avg=(a+b+c)/3;

    printf("\n %.1f is the average",avg);

    return 0;
}
