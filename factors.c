#include<stdio.h>
int main(){
    int a,i;
    printf("Enter the number:");
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        if(a%i==0){
        printf("The factors of %d are: %d\n",a,i);
        }
}
return 0;
}