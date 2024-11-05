#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() 
{
    int n;
    scanf("%d", &n);

    int p;
    scanf("%d", &p);
    int *l_1 = (int*)malloc(p * sizeof(int));
    for (int i = 0; i < p; i++) 
    {
        scanf("%d", &l_1[i]);
    }

    int q;
    scanf("%d", &q);
    int *l_2 = (int*)malloc(q * sizeof(int));
    for (int i = 0; i < q; i++) 
    {
        scanf("%d", &l_2[i]);
    }

    bool levels[n + 1];
    for (int i = 1; i <= n; i++) 
    {
        levels[i] = false;
    }

    for (int i = 0; i < p; i++) 
    {
        if (l_1[i] >= 1 && l_1[i] <= n) 
        {
            levels[l_1[i]] = true;
        }
    }

    for (int i = 0; i < q; i++) 
    {
        if (l_2[i] >= 1 && l_2[i] <= n) 
        {
            levels[l_2[i]] = true;
        }
    }

    bool allLevels = true;
    for (int i = 1; i <= n; i++) 
    {
        if (!levels[i]) 
        {
            allLevels = false;
            break;
        }
    }

    if (allLevels) 
    {
        printf("I become the guy.\n");
    } else {
        printf("Oh, my keyboard!\n");
    }

    free(l_1);
    free(l_2);

    return 0;
}
