#include<stdio.h>
#include<stdlib.h>

int main()
{
    char word[] = "codeforces"; 
    int t;
    scanf("%d", &t);
    for(int i = 0; i < t; i++)
    {
        char n;
        int count = 0;
        scanf(" %c", &n);
        for(int j = 0; j < 10; j++)
        {
            if(n == word[j])
            {
                count++;
            }
        }
        if(count > 0)
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
