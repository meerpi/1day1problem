#include <stdio.h>

int main() 
{
    int t;
    scanf("%d", &t); 
    for(int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        int a = 0;
        int i = 1; 
        while (1) 
        {
            int m = 2 * i - 1;
            if (i % 2 == 1) 
            {
                a -= m;
            } else 
            {
                a += m;
            }
            if (a < -n || a > n) 
            {
                if (i % 2 == 1) 
                {
                    printf("Sakurako\n");
                } else 
                {
                    printf("Kosuke\n");
                }
                break;
            }
            i++;
        }
    }
    return 0;
}
