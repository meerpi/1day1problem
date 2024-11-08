#include <stdio.h>

int main() 
{
    int t, x;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) 
    {
        scanf("%d", &x);
        if (x >= 1900) 
        {
            printf("Division 1\n");
        }
        if (x >= 1600 && x <= 1899) 
        {
            printf("Division 2\n");
        }
        if (x >= 1400 && x <= 1599) 
        {
            printf("Division 3\n");
        }
        if (x <= 1399) {
            printf("Division 4\n");
        }
    }

    return 0;
}
