#include<stdio.h>
int main(){
    float a,b;
    printf("Enter the first number:");
    scanf("%f",&a);
    printf("Enter the second number:");
    scanf("%f",&b);
    printf("The sum of two numbers is:%f\n",a+b);
    printf("The difference of two numbers is:%f\n",a-b);
    printf("The product of two numbers is:%f\n",a*b);
    printf("The quotient of two numbers is:%f\n",a/b);
    return 0;
}