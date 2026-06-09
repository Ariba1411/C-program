#include <stdio.h>
int main() {
int a;
printf("Enter the number of elements: ");
scanf("%d", &a);
int arr[a];
printf("Enter %d elements:\n", a);
for(int i = 0; i < a; i++) {
scanf("%d", &arr[i]);
}
for(int i = 0; i < a - 1; i++) {
arr[i] = arr[i + 1];
}
a = a - 2;
printf("Array after deleting first and last elements:\n");
for(int i = 0; i < a; i++) {
printf("%d ", arr[i]);
}
return 0;
}