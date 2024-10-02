#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char name[] = {'T','i','m','u','r'};

int main()
{
    int n;
    scanf("%d",&n);
    char res[n][4];

    for(int i = 0 ; i < n; i++)
    {
        int size;
        int count = 0;
        scanf("%d",&size);
        if(size != 5)
        {
            strcpy(res[i], "NO");
            char temp[100];
            scanf("%s", temp);
            continue;
        }
        char *word = (char*)malloc(sizeof(char) * (size+1));
        scanf("%s",word);
        int used[5] = {0};
        for(int j = 0; j < size; j++)
        {
            for(int k = 0; k < 5; k++)
            {
                if(word[j] == name[k] && !used[k])
                {
                    count++;
                    used[k] = 1;
                    break;
                }
            }
        }
        if(count == 5)
        {
            strcpy(res[i], "YES");
        } else 
        {
            strcpy(res[i], "NO");
        }

        free(word);
    }

    for (int i = 0; i < n; i++) 
    {
        printf("%s\n", res[i]);
    }
    return 0;
}