#include <stdio.h>
#include <string.h>

int main() 
{
    int a[4];
    char s[100001];
    int tc = 0;

    scanf("%d %d %d %d", &a[0], &a[1], &a[2], &a[3]);

    scanf("%s", s);

    for (int i = 0; s[i] != '\0'; i++)
    {
        int st = s[i] - '1';  
        tc += a[st];
    }

    printf("%d\n", tc);

    return 0;
}
