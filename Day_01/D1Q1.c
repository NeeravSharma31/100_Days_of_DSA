/**
 * Day: Day 01
 * Question: Insert an Element at a Specific Position in an Array
 * Approach: Shift elements right from index n down to pos, then insert x at pos - 1
 * Time Complexity: O(n)
 * Space Complexity: O(1) auxiliary
 */
#include <stdio.h>

int main() {
    int n;
    
    scanf("%d", &n);
    
    int arr[n + 1];
    
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int pos, x;
    
    scanf("%d", &pos);
    scanf("%d", &x);
    
    for(int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }
    
    arr[pos - 1] = x;
    
    for(int i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}