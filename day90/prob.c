#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if( i == 0 || j == 0)
            {
                arr[i][j] = 1;
            }
            else
            {
                arr[i][j] = arr[i-1][j] + arr[i][j-1];
            }
        }
    }
    printf("%d",arr[n-1][n-1]);
}