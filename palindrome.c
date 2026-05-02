#include<stdio.h>
int main(){
    int a,i,original;
    printf("Enter the number:");
    scanf("%d",&a);
    original=a;
    int remainder,reverse=0;
    while(a!=0){
    remainder=a%10;
    reverse=reverse*10+remainder;
    a=a/10;
    }
    if(original==reverse){
    printf("The number is a palindrome");
    }
    else{
    printf("The number is not a palindrome");
    }
    return 0;
}

