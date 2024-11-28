#include <stdio.h>

int main() 
{
    int t;
    scanf("%d", &t); 

    char results[t];

    for (int i = 0; i < t; i++) 
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);

        if (a + b == c) 
        {
            results[i] = '+';
        } 
        else 
        {
            results[i] = '-';
        }
    }

 
    for (int i = 0; i < t; i++) 
    {
        printf("%c\n", results[i]);
    }

    return 0;
}
