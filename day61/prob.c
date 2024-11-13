#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(char *)a - *(char *)b);
}

int main() {
    char input[101], output[101];
    scanf("%s", input);

    int len = strlen(input), j = 0;
    for (int i = 0; i < len; i += 2) {
        output[j++] = input[i];
    }

    qsort(output, j, sizeof(char), compare);

    for (int i = 0; i < j; i++) {
        if (i > 0) printf("+");
        printf("%c", output[i]);
    }

    return 0;
}
