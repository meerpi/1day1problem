#include <stdio.h>

int main() 
{
    int x;
    scanf("%d", &x);
    int l1[x], l2[x];
    
    for (int i = 0; i < x; i++) 
    {
        char s[7];
        scanf("%s", s);
        l1[i] = (s[0] - '0') + (s[1] - '0') + (s[2] - '0');
        l2[i] = (s[3] - '0') + (s[4] - '0') + (s[5] - '0');
        
        if (l1[i] == l2[i]) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }   
    return 0;
}
