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

    for(int i = 0; i < a; i++) {
        for(int j = i + 1; j < a; j++) {
            if(arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("Sorted array:\n");
    for(int i = 0; i < a; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}