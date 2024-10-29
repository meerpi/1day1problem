#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    char time[6];
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        int hrs, mins;
        scanf("%s", time);

        sscanf(time, "%2d:%2d", &hrs, &mins);

        if (hrs == 0) 
        {
            printf("12:%02d AM\n", mins);
        } 
        else if (hrs == 12) 
        {          
            printf("12:%02d PM\n", mins);
        } 
        else if (hrs < 12) 
        {    
            printf("%02d:%02d AM\n", hrs, mins);
        } 
        else 
        {            
            printf("%02d:%02d PM\n", hrs - 12, mins);
        }
    }
    
    return 0;
}
