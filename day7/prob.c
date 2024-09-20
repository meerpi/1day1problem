#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cards;
    scanf("%d", &cards);
    int *arr = (int *)malloc(cards * sizeof(int));
    if (arr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (int i = 0; i < cards; i++)
    {
        scanf("%d", &arr[i]);
    }

    int s = 0, d = 0;
    int st = 0;

    for (int i = 0; i < cards;)
    {
        if (st == 0)
        {
            if (arr[i] > arr[cards - 1])
            {
                s += arr[i];
                i++;
            }
            else
            {
                s += arr[cards - 1];
                cards--;
            }
            st = 1;
        }
        else
        {
            if (arr[i] > arr[cards - 1])
            {
                d += arr[i];
                i++;
            }
            else
            {
                d += arr[cards - 1];
                cards--;
            }
            st = 0;
        }
    }

    printf("%d %d\n", s, d);

    free(arr);

    return 0;
}