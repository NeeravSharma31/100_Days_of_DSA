#include <stdio.h>

int main() {
    int p, q;
    
    // Read the first server log
    if (scanf("%d", &p) != 1) return 0;
    int log1[p];
    for (int i = 0; i < p; i++) {
        scanf("%d", &log1[i]);
    }
    
    // Read the second server log
    if (scanf("%d", &q) != 1) return 0;
    int log2[q];
    for (int i = 0; i < q; i++) {
        scanf("%d", &log2[i]);
    }
    
    int i = 0, j = 0, count = 0;
    int total = p + q;
    
    while (i < p && j < q) {
        if (log1[i] <= log2[j]) {
            printf("%d", log1[i]);
            i++;
        } else {
            printf("%d", log2[j]);
            j++;
        }
        
        count++;
        if (count < total) printf(" ");
    }
    
    while (i < p) {
        printf("%d", log1[i]);
        i++;
        count++;
        if (count < total) printf(" ");
    }
    
    while (j < q) {
        printf("%d", log2[j]);
        j++;
        count++;
        if (count < total) printf(" ");
    }
    
    printf("\n");
    return 0;
}