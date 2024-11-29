#include <stdio.h>

int main() 
{
    int t;
    scanf("%d", &t); 
    for(int i = 0; i < t; i ++) 
    {
        int n, x;
        scanf("%d %d", &n, &x); 
        if (n <= 2) 
        {
            printf("1\n"); 
        } 
        else 
        {
            int floor = (n - 2 + x - 1) / x + 1;
            printf("%d\n", floor);
        }
    }
    
    return 0;
}
