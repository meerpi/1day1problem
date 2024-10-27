#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        int a,sum = 0;
        scanf("%d", &a);
        while(a > 0)
        {
            sum += a%10;
            a = a/10;
        }
        printf("%d\n", sum);
    }
}