#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int s, count = 0, ZeroSeq = 0;
        scanf("%d", &s);

        int *arr = (int*)malloc(s * sizeof(int));

        for (int j = 0; j < s; j++) 
        {
            scanf("%d", &arr[j]);
        }

        for (int j = 0; j < s; j++) 
        {
            if (arr[j] == 0) 
            {
                if (ZeroSeq == 0) 
                { 
                    count++;
                    ZeroSeq = 1; 
                }
            } 
            else 
            {
                ZeroSeq = 0;
            }
        }

        printf("%d\n", count);

        free(arr);
    }

    return 0;
}
