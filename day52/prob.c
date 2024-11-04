#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int n;
    scanf("%d", &n);
    while(n--)
    {
        char p[4];
        scanf("%s", p);
        if(tolower(p[0]) == 'y' && tolower(p[1]) == 'e' && tolower(p[2]) == 's')
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}