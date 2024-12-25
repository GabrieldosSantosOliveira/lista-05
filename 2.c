#include <stdio.h>
#define N 1000
 
int main()
{
    int matriz[N][N];
    int j, i, n;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%d\n", matriz[i][i]);
    }
    return 0;
}