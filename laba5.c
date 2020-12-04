#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 7

int main()
{
    
   int arr[N][N];
   int i,j,a=0;

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            arr[i][j] = rand() % 100 - 10;
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            if ((arr[i][j] % 2 == -1) & (arr[i][j] < 0))
            {
                a = a +abs(arr[i][j]);
            }
        }
    }

        printf("%d  ", a);
}
