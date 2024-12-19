#include <stdio.h>

int main() 
{
    int n, k;
    scanf("%d %d", &n, &k);

    int participation[n];
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &participation[i]);
    }

    int count = 0;
    for (int i = 0; i < n; i++) 
    {
        if (participation[i] + k <= 5) 
        {
            count++;
        }
    }

    int mt = count / 3;
    printf("%d\n", mt);

    return 0;
}
