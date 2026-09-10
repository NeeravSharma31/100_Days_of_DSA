#include <stdio.h>

int main() {
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the Array: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int k;
    printf("Enter the target: ");
    scanf("%d", &k);

    int comparisons = 0;

    for(int i = 0; i < n; i++) {
        comparisons++; 
        if(arr[i] == k) {
            printf("Found at index %d\n", i);
            break; 
        }
    }

    printf("Comparisons = %d\n", comparisons);

    return 0;
}