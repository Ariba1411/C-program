#include<stdio.h>
int main(){
    int a,remainder,reverse=0;
    printf("Enter the number:");
    scanf("%d",&a);
    while(a!=0){
        remainder=a%10;
        reverse=reverse*10+remainder;
        a=a/10;
    }       
    printf("%d",reverse);
    return 0;
}