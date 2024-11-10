#include <stdio.h>

int main() 
{
    int x, y, z, k;
    scanf("%d %d", &x, &y);
    if ((x * y) % 2 == 0) 
    {
        z = (x * y) / 2;
        printf("%d\n", z);
    } else 
    {
        z = (x * y) - 1;
        k = z / 2;
        printf("%d\n", k);
    }
    return 0;
}
