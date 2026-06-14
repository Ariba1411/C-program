#include<stdio.h>
void positivenegative(int a){
    if(a>=0){
        printf("The number is positive");
    }
    else{
        printf("The number is negative");
    }
}
int main(){
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    positivenegative(a);
    return 0;
}