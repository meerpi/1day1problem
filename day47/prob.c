#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
 
typedef struct
{
    int tc;
    char*** arr;
} Data;
 
int main()
{
    Data myData;
    scanf("%d", &myData.tc);
 
    myData.arr = (char***)malloc(myData.tc * sizeof(char**));
    for (int t = 0; t < myData.tc; t++)
    {
        myData.arr[t] = (char**)malloc(8 * sizeof(char*));
        for (int i = 0; i < 8; i++)
        {
            myData.arr[t][i] = (char*)malloc(9 * sizeof(char));
            scanf("%8s", myData.arr[t][i]);
        }
    }
 
 
    for (int t = 0; t < myData.tc; t++)
    {
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                if (myData.arr[t][i][j] != '.')
                {
                    printf("%c", myData.arr[t][i][j]);
                }
            }
        }
        printf("\n");
    }
 
    for (int t = 0; t < myData.tc; t++)
    {
        for (int i = 0; i < 8; i++)
        {
            free(myData.arr[t][i]);
        }
        free(myData.arr[t]);
    }
    free(myData.arr);
 
    return 0;
}