#include <stdio.h>
#include <stdbool.h>
#include<math.h>

 long long int arrsum(int arr[], int n) 
{
    long long int sum = 0;
    for (int i = 0; i < n; i++) 
    {
        sum = sum + arr[i];
    }
    return sum;
}

bool checksq(long long int sum) 
{
    long long int c = (long long int)sqrt(sum);
    return (c*c == sum);
}

int main() 
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) 
    {
        int a;
        scanf("%d", &a);
        int arr[a];
        for (int j = 0; j < a; j++) 
        {
            scanf("%d", &arr[j]);
        }
        long long int sum = arrsum(arr, a);
        bool ans = checksq(sum);
        if (ans) 
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
