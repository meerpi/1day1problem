#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int *num;
    int line;
}My2dArray;

int med(int a, int b, int c)
{
    int min = a;
    int mid = b;
    int max = c;
    if (a < b){
        if (b < c){

            min = a;
            mid = b;
            max = c;
        }
        else{

            if (a < c){

                min = a;
                mid = c;
                max = b;
            }
            else{

                min = c;
                mid = a;
                max = b;
            }
        }
    }
    else{

        if (a < c){

            min = b;
            mid = a;
            max = c;
        }
        else{

            if (b < c){

                min = b;
                mid = c;
                max = a;
            }
            else{

                min = c;
                mid = b;
                max = a;
            }
        }
    }
    return mid;
}
int main()
{
    My2dArray data;
    int num = 0;
    scanf("%d",&data.line);
    data.num = (int *)malloc(data.line * 3 * sizeof(int));
    if (data.num == NULL){
        printf("Memory allocation failed\n");
        return 1;
    }
    for (int i = 0; i < data.line; i++ )
    {
        for(int j = 0; j < 3; j++)
        {
            scanf("%d",&data.num[i * 3 + j]);
        }
    }

 for (int i = 0; i < data.line; i++ )
    {

            int mid = med(data.num[i * 3 + 0],data.num[i * 3 + 1], data.num[i * 3 + 2]);
            printf("%d \n", mid);

    }
    free(data.num);
    return 0;

}