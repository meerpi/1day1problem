#include<stdio.h>

int main()
{
    int su[4], count = 0;
    int visi[4] = {0}; 

    scanf("%d %d %d %d", &su[0], &su[1], &su[2], &su[3]);

    for(int i = 0; i < 4; i++)
    {

        for(int j = i + 1; j < 4; j++)
        {
            if(su[i] == su[j])
            {
                count++;
                visi[j] = 1; 
            }
        }
    }

    printf("%d", count);
    return 0;
}
