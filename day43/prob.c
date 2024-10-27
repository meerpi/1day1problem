#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) 
    {
        int a;
        scanf("%d", &a);
        int len = 2 * a;
        int *nums = (int*)malloc(len * sizeof(int));
        for (int j = 0; j < len; j++) 
        {
            scanf("%d", &nums[j]);
        }
        int paired[len];
        for (int j = 0; j < len; j++) 
            paired[j] = 0; 

        int pairsall = 1;
        for (int j = 0; j < len; j++) 
        {
            if (paired[j]) 
                continue;
            int foundPair = 0;
            for (int k = j + 1; k < len; k++) 
            {
                if (!paired[k] && (nums[j] + nums[k]) % 2 == 1) 
                { 
                    paired[j] = paired[k] = 1; 
                    foundPair = 1;
                    break;
                }
            }
            if (!foundPair) 
            {
                pairsall = 0;
                break;
            }
        }

        if (pairsall) 
        {
            printf("YES\n");
        } else 
        {
            printf("NO\n");
        }

        free(nums);
    }
    return 0;
}