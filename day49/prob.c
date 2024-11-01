#include <stdio.h>
#include <ctype.h>

int main()
{
    char word[1001];
    scanf("%1000s",word);
    word[0] = toupper(word[0]);
    printf("%s \n",word);
    return 0;

}