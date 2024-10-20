#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int count_A = 0 ,count_B = 0;
    for(int i = 0; i < n; i++)
    {
        int a,b;
        scanf("%d %d", &a, &b);
        if(a > b)
        {
            count_A++;
        }
        else if(b > a)
        {
            count_B++;
        }
    }
    if(count_A > count_B)
    {
        printf("Mishka\n");
    }
    else if(count_B > count_A)
    {
        printf("Chris\n");
    }
    else
    {
        printf("Friendship is magic!^^\n");
    }
}