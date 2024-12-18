#include <stdio.h>

int main() 
{
    int n, k;
    scanf("%d %d", &n, &k);
    int total_time = 240 - k;
    int time_spent = 0;
    int solved = 0;
    for (int i = 1; i <= n; i++) {
        time_spent += 5 * i;
        if (time_spent > total_time) {
            break;
        }
        solved++;
    }
    printf("%d\n", solved);
    return 0;
}