#include <stdio.h>

int main() {
    int count = 0, n;
    scanf("%d", &n);
    char x[n + 1];
    scanf("%s", x);
    for (int i = 0; i < n - 1; i++) {
        if (x[i] == x[i + 1]) {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}
