#include <stdio.h>

int main() {
    int a;
    printf("Enter size: ");
    scanf("%d", &a);
    int arr[a];
    printf("Enter elements:\n");
    for(int i = 0; i < a; i++) {
    scanf("%d", &arr[i]);
    }
    printf("Array in reverse:\n");
    for(int i = a - 1; i >= 0; i--) {
    printf("%d ", arr[i]);
    }
    return 0;
}