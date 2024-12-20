#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    while(n--)
    {
        int a,b;
        scanf("%d %d", &a, &b);
        if((a>b))
        {
            if(a > b*2)
            {
                printf("%d\n", a*a);
            }
            else
            {
                printf("%d\n", (b+b)*(b+b));
            }
        }
        else
        {
            if(a*2 < b)
            {
                printf("%d\n", b*b);
            }
            else
            {
                printf("%d\n", (a+a)*(a+a));
            }
        }
    }
}