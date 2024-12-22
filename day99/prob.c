#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    char alph[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o',
                 'p','q','r','s','t','u','v','w','x','y','z'};
    while(n--)
    {
        int a,b;
        scanf("%d",&a);
        char inp[a];
        scanf("%s",inp);
        int count = 0;
        for(int i = 0; i<a; i++)
        {
            for(int j = 0; j<26; j++)
            {
                if(inp[i] == alph[j])
                {
                    if(j > count)
                    {
                        count = j;
                        break;
                    }

                }
            }
        }
        printf("%d\n",count+1);
    }
}