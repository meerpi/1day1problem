#include <stdio.h>

int main() 
{
    int n;
    scanf("%d", &n);

    int p[n], result[n];

    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &p[i]);
    }

    for (int i = 0; i < n; i++) 
    {
        result[p[i] - 1] = i + 1;
    }

    for (int i = 0; i < n; i++) 
    {
        printf("%d ", result[i]);
    }

    return 0;
}
