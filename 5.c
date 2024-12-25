#include <stdio.h>
#define N 6
int somatorio(int matriz[][N], int linha, int coluna)
{
    int i = 0, soma = 0;
    for (i = coluna; i < (coluna + 3); i++)
    {
        soma += matriz[linha][i];
    }
    soma += matriz[linha + 1][coluna + 1];
    for (i = coluna; i < coluna + 3; i++)
    {
        soma += matriz[linha + 2][i];
    }
    return soma;
}
 
int main()
{
    int matriz[N][N];
    int i = 0, j = 0;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }
    int soma_final;
    for (i = 0; i < (N - 2); i++)
    {
        for (j = 0; j < (N - 2); j++)
        {
            int soma = somatorio(matriz, i, j);
            if (i == 0 && j == 0)
            {
                soma_final = soma;
            }
            else if (soma > soma_final)
            {
                soma_final = soma;
            }
        }
    }
    printf("%d\n", soma_final);
    return 0;
}