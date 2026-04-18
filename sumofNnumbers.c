#include<stdio.h>
int main(){
    int a,i;
    int sum=0;
    printf("Enter the number:");
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        sum+=i;
    }
    printf("The sum is:%d\n",sum);
    return 0;
}