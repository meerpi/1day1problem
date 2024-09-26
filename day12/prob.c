Copy
#include <stdio.h>
int check(int a, int b)
{
    if(a == b) return 0;
    else if(a > b) return 1;
    else return -1;
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[4][n];
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<4;j++)
        {
            scanf("%d",&a[j][i]);
        }
    }
    for(int i=0;i<n;i++)
    {
        int w = 0;
        if(check(a[0][i],a[2][i]) + check(a[1][i],a[3][i]) > 0)
        {
            w++;
        }
        if(check(a[0][i],a[3][i]) + check(a[1][i],a[2][i]) > 0)
        {
            w++;
        }
        if(check(a[1][i],a[2][i]) + check(a[0][i],a[3][i]) > 0)
        {
            w++;
        }
        if(check(a[1][i],a[3][i]) + check(a[0][i],a[2][i]) > 0)
        {
            w++;
        }
        printf("%d\n",w);
 
    }
    return 0;
}