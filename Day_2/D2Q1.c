#include <stdio.h>

int main() {

    int n;
    printf("Size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Array: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int pos;
    printf("Enter the position: ");
    scanf("%d", &pos);
    
    for(int i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    
    for(int i = 0; i < n - 1; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}