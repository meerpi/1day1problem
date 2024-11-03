#include<stdio.h>
#include<string.h>
#include <stdio.h>

int canSwap(char s[]) {
    int len = 3;
    char a[3] = {'a', 'b', 'c'};
    int diffind[2];
    int diff = 0;

    for (int i = 0; i < len; i++) {
        if (s[i] != a[i]) {
            if (diff < 2) {
                diffind[diff] = i; 
            }
            diff++;
        }
    }

    if (diff == 2 &&
        s[diffind[0]] == a[diffind[1]] &&
        s[diffind[1]] == a[diffind[0]]) {
        return 1;
    }

    return 0;
}
int main()
{
    int n;
    scanf("%d", &n);
    while(n--)
    {
        char s[4];
        scanf("%s", s);
        if(strcmp(s,"abc") == 0)
        {
            printf("YES\n");
        }
        else
        {
            if(canSwap(s))
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
    }
}