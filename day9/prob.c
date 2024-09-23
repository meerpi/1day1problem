#include<stdio.h>

int main()
{
    int n,m,o,num,pp,z;
    char s[100];
    char *ptr = s;
    scanf("%d",&n);
    for(int i =0 ; i< 2*n;i++)
    {
        scanf("%d %d",&m , &o);
        for(int j = 0; j < m; j++)
        {
            fgets(s , n ,stdin);
            while(sscanf(ptr , "&d" , &num) == 1)
            {
                if (num > o)
                {
                    pp += num;
                    num = 0;
                    continue;
                }
                z++;
                ptr++;

            }

        }
    }

}