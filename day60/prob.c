#include <stdio.h>

int main() 
{
    int n, sum = 0;
    float average;

    scanf("%d", &n);

    int l_1[n];

    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &l_1[i]);
        sum += l_1[i];
    }

    average = (float)sum / n;
    printf("%.2f\n", average);
    
    return 0;
}
