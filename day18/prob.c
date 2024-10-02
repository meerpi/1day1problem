#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    char want[] = {'c','o','d','e','f','o','r','c','e','s'};
    scanf("%d",&n);
    int *res = (int*)malloc(sizeof(int) * n);
    char word[11];
    for(int i = 0; i<n; i++)
    {   int count = 0;
        scanf("%s",word);
        for(int j = 0; j < 10 ; j++)
        {
            if(word[j] != want[j])
            {
                count ++;
            }
        }
        res[i] = count;
    }
    for(int i = 0; i<n; i++)
    {
        printf("%d\n",res[i]);
    }
    free(res);
    return 0;
}
