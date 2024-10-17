#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t); 
    for (int i = 0; i < t; i++) {
        int m, n, o;
        scanf("%d %d %d", &m, &n, &o);
        
        if (o > n && n > m) {
            printf("STAIR\n");
        }
        else if (m < n && n > o) {
            printf("PEAK\n");
        }
        else {
            printf("NONE\n");
        }
    }
    return 0;
}
