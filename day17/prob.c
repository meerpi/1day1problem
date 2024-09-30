#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    char res[n][4];
    
    for (int i = 0; i < n; i++)
    {
        char str[100];
        scanf("%s", str); 
        
        int length = strlen(str);
        
        if (length % 2 != 0)
        {
            strcpy(res[i], "NO"); 
        }
        else
        {
            int half = length / 2;
            char part1[half + 1], part2[half + 1];
            
            strncpy(part1, str, half); 
            part1[half] = '\0'; 
            
            strcpy(part2, str + half);
            
            if (strcmp(part1, part2) == 0)
                strcpy(res[i], "YES");
            else
                strcpy(res[i], "NO");
        }
    }

    // Output the results
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", res[i]);
    }
    
    return 0;
}
