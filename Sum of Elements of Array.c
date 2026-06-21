#include<stdio.h>
int main(){
int n;
printf("Enter the number of elements of array:");
scanf("%d",&n);
int arr[n];
printf("Enter the elements of array:");
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
}
int sum=0;
for(int i=0;i<n;i++){
sum+=arr[i];
}
printf("Sum of elements of array is:%d",sum);
return 0;
}