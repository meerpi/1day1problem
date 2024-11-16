#include <stdio.h>

int main() 
{
    int r, count = 0;
    scanf("%d", &r);

    for (int i = 0; i < r; i++) 
    {
        int x, y;
        scanf("%d %d", &x, &y);
        if (x < y && (y - x) > 1) 
        {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}