#include<stdio.h>
void divisibility(int a){
    if(a%5==0){
        printf("The number is divisible by 5");
    }
    else{
        printf("The number is not divisible by 5");
    }
}
int main(){
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    divisibility(a);
    return 0;
}