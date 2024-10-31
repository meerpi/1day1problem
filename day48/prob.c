#include <stdio.h>
#include <string.h>

int main() 
{
    int t;
    scanf("%d", &t);
    
    for(int tc = 0; tc < t; tc++) 
    {
        char s[11];
        scanf("%s", s);
        int n = strlen(s);
        
        int found = 0;
        for(int i = 0; i < n-1; i++) 
        {
            if(s[i] != s[i+1]) {
                char temp = s[i];
                s[i] = s[i+1];
                s[i+1] = temp;
                found = 1;
                break;
            }
        }
        
        if(!found) 
        {
            printf("NO\n");
        } 
        else 
        {
            printf("YES\n");
            printf("%s\n", s);
        }
    }
    return 0;
}