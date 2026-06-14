#include<stdio.h>
void sum(int a){
    int sum=0;
    for(int i=1;i<=a;i++){
        sum+=i;
    }
    printf("Sum of %d numbers=%d",a,sum);
}
int main(){
    int a;
    printf("Enter the number of terms:");
    scanf("%d",&a);
    sum(a);
    return 0;
}