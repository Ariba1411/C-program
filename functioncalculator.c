#include<stdio.h>
int sum(int a,int b) {
int sum=a+b;
}
int diff(int a,int b) {
int diff=a-b;
}
int product(int a,int b) {
int product=a*b;
}
int quotient(int a,int b) {
int quotient=a/b;
}
int main(){
int a,b;
printf("Enter the first number:");
scanf("%d",&a);
printf("Enter the second number:");
scanf("%d",&b);
printf("Sum=%d\n",sum(a,b));
printf("Diff=%d\n",diff(a,b));
printf("Product=%d\n",product(a,b));
printf("Quotient=%d\n",quotient(a,b));
return 0;
}
