#include <stdio.h>
#include <stdlib.h>
 
// A function to return the minimum of three integers
int min3(int a, int b, int c)
{
    int min = a;
    if (b < min) min = b;
    if (c < min) min = c;
    return min;
}
 
int main()
{
    int x;
    scanf("%d", &x);
    int o = 0, t= 0, tr = 0;
    int arr[x];
    for(int i = 0; i < x; i++)
    {
        scanf("%d", &arr[i]);
    }
    int* on = malloc(x * sizeof(int));
    int* tw = malloc(x * sizeof(int));
    int* trr = malloc(x * sizeof(int));
    for(int i = 0; i < x; i++)
    {
        if(arr[i]==1)
        {
            o++;
            on[o - 1] = i + 1;
        }
        else if(arr[i]==2)
        {
            t++;
            tw[t - 1] = i + 1;
        }
        else
        {
            tr++;
            trr[tr - 1] = i + 1;
        }
    }
    int  p=min3(o,t,tr);
    printf("%d\n", p);
    for(int i = 0; i < p; i++)
    {
        printf("%d %d %d\n", on[i], tw[i], trr[i]);
    }
 
    // Free the memory
    free(on);
    free(tw);
    free(trr);
 
    return 0;
}