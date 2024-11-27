#include <stdio.h>
#include <stdbool.h>

int main()
{
    int m, n;
    scanf("%d %d", &m, &n);

    char pix;
    bool colcheck = false;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf(" %c", &pix);
            if (pix != 'B' && pix != 'W' && pix != 'G')
            {
                colcheck = true;
                break; 
            }
        }
        if (colcheck)
        {
            break;
        }
    }

    if (colcheck)
    {
        printf("#Color\n");
    }
    else
    {
        printf("#Black&White\n");
    }

    return 0;
}
