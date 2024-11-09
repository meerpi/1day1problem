#include <stdio.h>

int main() 
{
    int count = 0;
    int e;
    scanf("%d", &e);
    
    while (e >= 5) 
    {
        e = e - 5;
        count++;
    }
    while (e >= 4)
    {
        e = e - 4;
        count++;
    }
    while (e >= 3) 
    {
        e = e - 3;
        count++;
    }
    while (e >= 2) 
    {
        e = e - 2;
        count++;
    }
    while (e >= 1) 
    {
        e = e - 1;
        count++;
    }
    
    printf("%d\n", count);
    return 0;
}
