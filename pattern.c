#include<stdio.h>
int main(){
    int a,i;
    printf("Enter the number of rows:");
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        printf("*\n");
    }
    return 0;
}