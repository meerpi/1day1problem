#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    scanf("%d", &num);
    int digit[num][3];
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < 3; j++)
         {
            scanf("%d", &digit[i][j]);
        }
    }
    for(int i = 0; i<num; i++)
    {
        int j = 0;

            if((digit[i][j] + digit[i][j+1]) >= 10 || (digit[i][j]+digit[i][j+2]) >=10 ||(digit[i][j+1] + digit[i][j+2] >=10))
            {
                printf("yes\n");
            }
            else
            {
                printf("no\n");
            }
    }
}