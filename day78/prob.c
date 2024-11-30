#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) 
    {
        int a;
        scanf("%d", &a);
        
        int b[a]; 
        for (int j = 0; j < a; j++) 
        {
            scanf("%d", &b[j]); 
        }
        int c;
        if(b[0] != b[1] && b[0] != b[2])
            c = b[1];
        else 
            c = b[0];
        int count = 0;
        
        for (int k = 0; k < a; k++) 
        {
            if (b[k] == c) 
            {
                count++;
            }
            else 
            {
                count++;
                break;
            }
        }
        printf("%d\n", count);
    }

    return 0;
}
