#include <stdio.h>

int main() {
    int t, k;
    scanf("%d", &t);

   for(int i = 0 ; i < t; i++) 
   {
        scanf("%d", &k); 
        int count = 0, num = 0;

        while (count < k) 
        {
            num++;
            if (num % 3 != 0 && num % 10 != 3) 
            {
                count++;
            }
        }

        printf("%d\n", num); 
    }

    return 0;
}
