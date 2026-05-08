#include<stdio.h>
int main(){
    int a;
    printf("Enter index:");
    scanf("%d",&a);
    int arr[a];
    printf("Enter the elements of an array:");
    for(int i=0;i<a;i++){
    scanf("%d",&arr[i]);
    }
    for(int i=0;i<a-1;i++){
    arr[i]=arr[i+1];
    }
    a--;
    printf("New array:");
    for(int i=0;i<a;i++){
        printf("%d",arr[i]);
    }
    return 0;
}