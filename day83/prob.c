#include<stdio.h>

int main()
{
    int point[2] = {0, 0};
    int n;
    scanf("%d", &n);
    while (n--)
    {
        int a;
        int count = 0;
        scanf("%d", &a);
        char st[a + 1];
        scanf("%s", st);

        point[0] = 0;
        point[1] = 0;

        for (int i = 0; i < a; i++)
        {
            if (st[i] == 'U')
            {
                point[1]++;
            }
            else if (st[i] == 'D')
            {
                point[1]--;
            }
            else if (st[i] == 'R')
            {
                point[0]++;
            }
            else if (st[i] == 'L')
            {
                point[0]--;
            }

            if (point[0] == 1 && point[1] == 1)
            {
                count++;
            }
        }
        if (count > 0)
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
