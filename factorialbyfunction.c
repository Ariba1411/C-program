#include<stdio.h>
void factorial(int a){
   long long factorial=1;
   for(int i=1;i<=a;i++){
   factorial=factorial*i;
   }
   printf("Factorial of %d=%d",a,factorial);
}
int main(){
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    factorial(a);
    return 0;
}