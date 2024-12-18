#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for(int i=1; i<=t; i++)
    {
        int n;
        scanf("%d", &n);
        int a = 1 , b = 1 , count = 0;
        do
        {
            a = n - b;
            b++;
             if(a <= 0)
            {
                break;
            }
            count++;
        }while(a > 0 && b > 0);
        printf("%d\n", count);
        
    }
}
