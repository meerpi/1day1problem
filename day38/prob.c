#include<stdio.h>
#include<stdlib.h>

int compare(const void* a, const void* b) 
{
    return (*(int*)a - *(int*)b);
}
int main()
{
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        int a,b,c,d,w1,w2;
        scanf("%d %d %d %d", &a, &b, &c, &d);
        int n[4] = {a,b,c,d};
        qsort(n, 4, sizeof(int), compare);
        if(a > b)
        {
            w1 = a;
        }
        else
        {
            w1 = b;
        }
        if(c > d)
        {
            w2 = c;
        }
        else
        {
            w2 = d;
        }   
        if(w1 == n[3] && w2 == n[2] || w1 == n[2] && w2 == n[3])
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}