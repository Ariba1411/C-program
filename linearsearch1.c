#include <stdio.h>

int main() {
    int a, key, found = 0;
    printf("Enter size of array: ");
    scanf("%d", &a);
    int arr[a];
    printf("Enter %d elements:\n", a);
    for(int i = 0; i < a; i++) {
    scanf("%d", &arr[i]);
    }
    printf("Enter element to search: ");
    scanf("%d", &key);
    for(int i = 0; i < a; i++) {
    if(arr[i] == key) {
    printf("Element found at position %d\n", i + 1);
    found = 1;
     break;
    }
    }
    if(found == 0) {
    printf("Element not found\n");
    }
    return 0;
}