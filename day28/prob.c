#include<stdio.h>
#include<stdlib.h>
int main()
{
    int k,r,rem;
    int i = 1;
    scanf("%d %d", &k, &r);
    rem = k * i ;
    while((rem % 10 != 0) && ((rem - r )% 10 != 0))
    {
        i++;
        rem = k*i;
    }
    printf("%d", i);
    return 0;
}
