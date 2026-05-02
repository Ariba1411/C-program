#include<stdio.h>
#include<math.h>
int main(){
     int a,b,i,c=1;
     printf("Enter the number:");
     scanf("%d",&a);
     printf("Enter power:");
     scanf("%d",&b);
     for(i=1;i<=b;i++){
        c=c*a;
        printf("%d\n",c);
     }
     return 0;
    } 