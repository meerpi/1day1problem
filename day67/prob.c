#include <stdio.h>
#include <ctype.h>
#include <string.h>

int unique_chars(const char *s, char *unique) 
{
    int c = 0;
    for (int i = 0; s[i] != '\0'; i++) 
    {
        if (isalpha(s[i])) {
            int is_unique = 1;
            for (int j = 0; j < c; j++) 
            {
                if (unique[j] == s[i])
                {
                    is_unique = 0;
                    break;
                }
            }
            if (is_unique) 
            {
                unique[c++] = s[i];
            }
        }
    }
    return c;
}

int main() {
    char sen[1000], unique[1000];
    fgets(sen, sizeof(sen), stdin);
    sen[strcspn(sen, "\n")] = '\0';

    int unique_c = unique_chars(sen, unique);
    printf("%d\n", unique_c);

    return 0;
}
