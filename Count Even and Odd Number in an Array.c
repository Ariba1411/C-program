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
int even=0;
int odd=0;
for(int i=0;i<n;i++){
if(arr[i]%2==0){
even++;
}
else{
odd++;
}
}
printf("Number of even numbers:%d\n",even);
printf("Number of odd numbers:%d\n",odd);
return 0;
}