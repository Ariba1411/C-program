#include<stdio.h>
int main(){
int n;
printf("Enter the number of elements:");
scanf("%d",&n);
int arr[n];
printf("Enter the elements of array:");
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
}
int c;
c=arr[0];
for(int i=1;i<n;i++){
if(arr[i]<arr[0]){
c=arr[i];
}
}
printf("The smallest number is:%d",c);
return 0;
}