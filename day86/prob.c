#include<stdio.h>

int max(int arr[],int n)
{
    
    for(int i = 0; i < n; i++)
    {
        int count = 0;
        for(int j = 0 ; j < n ; j++)
        {
            if(arr[i] >= arr[j])
            {
                count++;
            }
        }
        if(count == n)
        {
            return arr[i];
        }
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i<n ; i++)
    {
        scanf("%d",&arr[i]);
    }
    int max1 = max(arr,n);
    int pay=0;
    for(int k = 0; k < n; k++)
    {
        pay = pay + (max1 - arr[k]);
    }
    printf("%d",pay);
}