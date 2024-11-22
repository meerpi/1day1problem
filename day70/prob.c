#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    for(int i = 0; i < n; i++)
    {
        int a,b,c,d;
        scanf("%d %d %d %d",&a,&b,&c,&d);
        int arr[4] = {a,b,c,d};
        int count = 0;
        for(int j = 1; j < 4; j++)
        {
            if(a<arr[j])
                count++;
        }
        printf("%d\n",count);

    }
}