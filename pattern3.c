#include<stdio.h>
int main(){
    int i,j,k,rows;
    printf("Enter the number of rows:");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++){
    for(k=1;k<=i-1;k++){
        printf(" ");
    }
    for(j=4;j>=i;j--){
        printf("*");
    }
    printf("\n");
    }
    return 0;
}