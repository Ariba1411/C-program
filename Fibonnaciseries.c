#include<stdio.h>
int main(){
    int a,i,b=0,c=1,n;
    printf("Enter the number of terms:");
    scanf("%d",&a);
    for(i=1;i<=a;i++){
    printf("%d\n",b);
    n=b+c;
    b=c;
    c=n;
    }
    return 0;
}
