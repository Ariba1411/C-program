#include<stdio.h>
int main(){
    int a,i=1;
    printf("Enter the number:");
    scanf("%d",&a);
    do{
        if(i%2==0){
        printf("%d\n",i);
    }
    i++;
}while(i<=a);
return 0;
}