#include<stdio.h>
int main(){
    float a,i,b;
    printf("Enter the number:");
    scanf("%f",&a);
    printf("Enter power:");
    scanf("%f",&b);
    printf("%f\n",a);
    for(i=1;i<=b;i++){
    a=a*a;
    printf("%f\n",a);
    }
    return 0;
}