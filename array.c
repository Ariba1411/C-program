#include<stdio.h>
int main(){
    int a,i;
    printf("Enter the number of terms:");
    scanf("%d",&a);
    int arr[a];
    printf("The elements of an array are:");
    for(i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<a;i++){
    printf("%d",arr[i]);
    }
    return 0;
}