#include<stdio.h>
void factors(int a){
    for(int i=1;i<=a;i++){
        if(a%i==0){
         printf("Factors of %d are: %d\n",a,i);
        }
    }
}
int main(){
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    factors(a);
    return 0;
}