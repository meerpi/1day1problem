#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);

    while(t--)
    {
        int n;
        scanf("%d", &n);

        char arr[n];
        scanf("%s", arr);

        int left = 0, right = n - 1, ans = n;
        while (arr[left] != arr[right] && ans > 0) 
        {
            left++;
            right--;
            ans -= 2;
        }

        printf("%d\n", ans);
    }

    return 0;
}
