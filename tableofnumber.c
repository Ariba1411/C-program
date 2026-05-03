#include<stdio.h>
int main(){
    int a,b,c,i;
    printf("Enter the number:");
    scanf("%d",&a);
    printf("Enter other number:");
    scanf("%d",&b);
    for(i=1;i<=b;i++){
        c=a*i;
        printf("%d*%d=%d\n",a,i,c);
    }
    return 0;
}