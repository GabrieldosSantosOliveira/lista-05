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
    int coluna = n -1, linha= 0;
    while (coluna >= 0 && linha >=0)
    {
        printf("%d\n", matriz[linha][coluna]);
        coluna--;
        linha++;
    }
    return 0;
}