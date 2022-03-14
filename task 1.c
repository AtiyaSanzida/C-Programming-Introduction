#include<stdio.h>

int main()
{
    int a,b,sum,product,difference,quottent,remainder;

    printf("Enter first Number: ");
    scanf("%d",&a);
    printf("Enter second Number: ");
    scanf("%d",&b);

    sum=a+b;
    product=a*b;
    difference=a-b;
    quottent=a/b;
    remainder=a%b;

    printf("\n %d is the sum",sum);
    printf("\n %d is the product",product);
    printf("\n %d is the difference",difference);
    printf("\n %d is the quottent",quottent);
    printf("\n %d is the remainder",remainder);


    return 0;
}

