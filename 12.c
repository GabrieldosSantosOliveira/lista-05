#include <stdio.h>
#define N 100
 
int main()
{
    int matriz[N][N];
    int n, m, linha, coluna, maior, menor;
    scanf("%d%d", &n, &m);
    int i = 0, j = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
 
            scanf("%d", &matriz[i][j]);
            if (i == 0 && j == 0)
            {
                maior = matriz[i][j];
                menor = matriz[i][j];
            }
            else if (matriz[i][j] < menor)
            {
                menor = matriz[i][j];
            }
            else if (matriz[i][j] > maior)
            {
                maior = matriz[i][j];
            }
        }
    }
    int quantidade_menor = 0, quantidade_maior = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
 
            if (matriz[i][j] == menor)
            {
                quantidade_menor++;
            }
            if (matriz[i][j] == maior)
            {
                quantidade_maior++;
            }
        }
    }
    double total = n * m;
    printf("%d %.2lf%%\n", menor, (100.0 * quantidade_menor) / total);
    printf("%d %.2lf%%\n", maior, (100.0 * quantidade_maior) / total);
 
    return 0;
}