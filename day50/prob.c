#include <stdio.h>
#include <string.h>

int main() 
{
    int n;
    char s[105], result[105];
    scanf("%d", &n);
    while (n--) 
    {
        scanf("%s", s);
        int len = strlen(s);
        
        if (len == 2) 
        {
            printf("%s\n", s);
            continue;
        }
        
        result[0] = s[0];
        result[1] = s[1];
        int pos = 2;
        int i = 2;
        
        while (pos < len) 
        {
            result[i] = s[pos + 1];
            i++;
            pos += 2;
        }
        result[i] = '\0';
        printf("%s\n", result);
    }
    return 0;
}