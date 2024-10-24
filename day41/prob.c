#include<stdio.h>
#include<stdlib.h>

int main() {
    int m;
    scanf("%d", &m);

    for (int i = 0; i < m; i++) {
        int n;
        scanf("%d", &n);

        int *arr = (int *)malloc(n * sizeof(int));

        for (int z = 0; z < n; z++) {
            scanf("%d", &arr[z]);
        }

        int *res = (int *)malloc(n * sizeof(int));

        int *p1 = &arr[0];
        int *p2 = &arr[n-1];

        int front = 0; 
        int back = 0; 

        for (int j = 0; j < n; j++) {
            if (j % 2 == 0) {
                res[j] = *(p1 + front); 
                front++;
            } else {
                res[j] = *(p2 - back);
                back++;
            }
        }

        for (int j = 0; j < n; j++) {
            printf("%d ", res[j]);
        }
        printf("\n");

        free(arr);
        free(res);
    }

    return 0;
}
