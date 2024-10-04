#include <stdio.h>

int main() 
{
    int t;
    scanf("%d", &t);

    while (t--) 
    {
        int n, k;
        scanf("%d %d", &n, &k);
        
        if (((n + 1) * n / 2 - (n - k) * (n - k + 1) / 2) % 2 == 0) 
        {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
