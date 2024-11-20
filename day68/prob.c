#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        char m[4];
        scanf("%s", m);

        // Check if input is valid
        if (strlen(m) != 3 || (m[1] != '=' && m[1] != '>' && m[1] != '<'))
        {
            printf("Invalid input: %s\n", m);
            continue;
        }

        int a = m[0] - '0';
        int b = m[2] - '0';

        if (m[1] == '=')
        {
            if (a == b)
            {
                printf("%s\n", m);
            }
            else if (a > b)
            {
                printf("%d>%d\n", a, b);
            }
            else
            {
                printf("%d<%d\n", a, b);
            }
        }
        else if (m[1] == '>')
        {
            if (a > b)
            {
                printf("%s\n", m);
            }
            else if(a == b)
            {
                printf("%d=%d\n", a, b);
            }   
            else
            {
                printf("%d<%d\n", a, b);
            }
        }
        else if (m[1] == '<')
        {
            if (a < b)
            {
                printf("%s\n", m);
            }
            else if(a == b)
            {
                printf("%d=%d\n", a, b);
            }
            else
            {
                printf("%d>%d\n", a, b);
            }
        }
    }
    return 0;
}
