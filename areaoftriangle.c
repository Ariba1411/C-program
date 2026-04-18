#include<stdio.h>
int main(){
    float a,b,area;
    printf("Enter base:");
    scanf("%f",&a);
    printf("Enter height:");
    scanf("%f",&b);
    area=0.5*a*b;
    printf("The area of triangle is:%f",area);
    return 0;
}