#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;  // Number of test cases
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int s, count = 0, ZeroSeq = 0;
        scanf("%d", &s);  // Input the size of the array for the current test case

        // Dynamically allocate memory for the array
        int *arr = (int*)malloc(s * sizeof(int));
        if (arr == NULL) {
            printf("Memory allocation failed!\n");
            return 1;
        }

        // Input the elements of the array
        for (int j = 0; j < s; j++) {
            scanf("%d", &arr[j]);
        }

        // Count the number of continuous sequences of zeros
        for (int j = 0; j < s; j++) {
            if (arr[j] == 0) {
                if (ZeroSeq == 0) {  // Start of a new sequence of zeros
                    count++;
                    ZeroSeq = 1;  // Mark that we are in a zero sequence
                }
            } else {
                ZeroSeq = 0;  // Reset when a non-zero element is encountered
            }
        }

        // Output the count of continuous zero sequences
        printf("%d\n", count);

        // Free the dynamically allocated memory
        free(arr);
    }

    return 0;
}
