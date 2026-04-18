#include<stdio.h>
int main(){
    int a,i=1;
    int sum=0;
    printf("Enter the number:");
    scanf("%d",&a);
    do{
        sum+=i;
        i++;
    }while(i<=a);
    printf("The sum is:%d\n",sum);
    return 0;
}