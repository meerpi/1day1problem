#include <stdio.h>

int digit(int n)
{
    int digi = 0;
    while(n > 0)
    {
        digi++ ;
        n /= 10;
    }
    return digi;
}

int main()
{
    int n;
    int arr[36] = {1, 11, 111, 1111, 2, 22, 222, 2222, 3, 33, 333, 3333, 4, 44, 444, 4444, 5, 55, 555, 5555, 6, 66, 666, 6666, 7, 77, 777, 7777, 8, 88, 888, 8888, 9, 99, 999, 9999};

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int x, res = 0;
        scanf("%d", &x);
        for(int j = 0; j < 36; j++)
        {
            res += digit(arr[j]); 
            if(arr[j] == x) 
            {
                break;
            }
        }
        printf("%d\n", res);
    }

    return 0;
}
