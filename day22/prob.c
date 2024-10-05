#include<stdio.h>
#include<stdlib.h>
int main()
{
    int t;
    scanf("%d", &t);
    int c[t];
    int rev = 0;
    int res =0;
    for (int i = 0; i<t; i++)
    {
        scanf("%d", &c[i]);
        if(c[i] != -1)
        {
            rev += c[i];
        }
        else
        {
            if(rev > 0)
            {
                rev--;
            }
            else
            {
                res += 1;
            }

        }
        
    }
    printf("%d\n", res);
}