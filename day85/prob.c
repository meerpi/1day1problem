#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) 
    {
        long n;
        scanf("%ld", &n);
        
        if (n % 4 == 0) 
        {
            printf("YES\n");
        }
        else 
        {
            printf("NO\n");
        }
    }
    
    return 0;
}
