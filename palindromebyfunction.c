#include<stdio.h>
void palindrome(int a){
int remainder,c;
int reverse=0;
c=a;
while(a!=0){
remainder=a%10;
reverse=reverse*10+remainder;
a=a/10;
}
if(c==reverse){
printf("The number is palindrome");
}
else{
printf("The number is not a palindrome");
}
}
int main(){
int a;
printf("Enter the no.:");
scanf("%d",&a);
palindrome(a);
return 0;
}