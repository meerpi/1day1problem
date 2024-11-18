#include <stdio.h>
#include <string.h>

int main() {
    int count = 0;
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        char operation[4];
        scanf("%s", operation);
        if (strcmp(operation, "X++") == 0 || strcmp(operation, "++X") == 0) {
            count++;
        } else if (strcmp(operation, "X--") == 0 || strcmp(operation, "--X") == 0) {
            count--;
        } else {
            printf("0\n");
            continue;
        }
    }
    printf("%d\n", count);
    return 0;
}
