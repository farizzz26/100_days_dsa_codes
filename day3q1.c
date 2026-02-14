//Problem: Implement linear search to find key k in an array. Count and display the number of comparisons performed.


#include <stdio.h>

int main() {
    int n, k;
    
    // Input size
    scanf("%d", &n);
    
    int arr[n];
    
    // Input array elements
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Input key to search
    scanf("%d", &k);
    
    int found = 0;
    int comparisons = 0;
    
    // Linear Search
    for(int i = 0; i < n; i++) {
        comparisons++;   // Count comparison
        
        if(arr[i] == k) {
            printf("Element found at position %d\n", i + 1);
            found = 1;
            break;
        }
    }
    
    if(!found) {
        printf("Element not found\n");
    }
    
    printf("Number of comparisons: %d\n", comparisons);
    
    return 0;
}
