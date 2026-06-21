#include<stdio.h>
int main(){
int n;
printf("Enter the number of elements of an array:");
scanf("%d",&n);
int arr[n];
printf("Enter the elements of an array:");
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
}
int c=arr[0];
for (int i=1; i<n; i++)
{ 
if(arr[i]>c){
c=arr[i];
}
}
printf("The largest number of the array=%d",c);
return 0;
}