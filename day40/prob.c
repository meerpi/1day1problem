#include<stdio.h>
#include<string.h>
#include<ctype.h>

void count(char * str,int *count)
    {
        for (int i = 0; i < strlen(str); i++)
        {
            count[(int)str[i]]++;
        }
    }

int main()
{
    char c1[101],c2[101],str[101];
    scanf("%s",c1);
    scanf("%s",c2);
    scanf("%s",str);
    int m,n,o;
    m = strlen(c1);
    n = strlen(c2);
    o = strlen(str);
    char comb[101];
    strcpy(comb, c1);
    strcat(comb, c2);
    if(m + n != o)
    {
        printf("NO\n");
        return 0;
    }
    else
    {
        int count1[256] = {0};
        int count2[256] = {0};
        count(comb,count1);
        count(str,count2);
        for (int i = 0; i < 256; i++)
        {
            if(count1[i] != count2[i])
            {
                printf("NO\n");
                return 0;
            }
        }
        printf("YES\n");
    }
}
