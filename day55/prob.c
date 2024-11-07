#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        int n;
        scanf("%d", &n);
        if (n <= 2) {
            printf("0\n");
        } else {
            printf("%d\n", (n - 1) / 2);
        }
    }
    return 0;
}
