#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,a,b,res = 0;
        scanf("%d %d %d",&n,&a,&b);
        if(b > 2*a)
        {
            res = n*a;
        }
        else
        {
            if(n%2 == 0)
            {
                res = (n/2)*b;
            }
            else
            {
                res = (n/2)*b + a;
            }
        }
        printf("%d\n",res);
    }
}