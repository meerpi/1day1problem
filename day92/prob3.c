#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    while(n--)
    {
        int m,a,b,c;
        int first_rowl = 0;
        int seated = 0;
        int second_rowl = 0;
        scanf("%d %d %d %d", &m, &a, &b, &c);
        if(m - a > 0)
        {
            first_rowl = m - a;
            seated = a;
        }
        else
        {
            first_rowl = 0;
            seated = m;
        }
        if(m - b > 0)
        {
            second_rowl = m - b;
            seated += b;
        }
        else
        {
            second_rowl = 0;
            seated += m;
        }
        if(second_rowl + first_rowl > c)
        {
            seated += c;
        }
        else
        {
            seated += second_rowl + first_rowl;
        }
        printf("%d\n", seated);

        
    }
}