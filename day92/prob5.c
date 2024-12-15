#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int k,l1,r1,l2, r2;
        scanf("%d %d %d %d %d", &k, &l1, &r1, &l2, &r2);
        int x = l1;
        int y = l2;
        int n = 0;
        int count = 0;
        while((l1 <= x && x <= r1) && (l2 <= y && y <= r2))
        {
            if((n >= 0)&& (y/x == pow(k,n)))
            {
                count++;
            }
            n++;
            x++;
            y++;
        }
        printf("%d\n", count);
    }
    return 0;
}