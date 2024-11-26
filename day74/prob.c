#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        int hh,mm;
        scanf("%d %d", &hh, &mm);
        int init = 60*hh + mm;
        int final = 60*24;
        printf("%d\n", final - init);
    }
    
}