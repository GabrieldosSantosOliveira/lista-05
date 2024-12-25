#include <stdio.h>
#include <stdbool.h>
 
#define N 100
#define WALLY (1111)
bool checar_wally(int matriz[N][N], int n, int m, int linha, int coluna)
{
    bool flag = true;
    if (coluna >= 1)
    {
        if (!(matriz[linha][coluna - 1] == 0))
        {
            flag = false;
        }
    }
    else
    {
        if (!(matriz[linha][m - 1] == 0))
        {
            flag = false;
        }
    }
    if (coluna < m - 1)
    {
        if (!(matriz[linha][coluna + 1] == 0))
        {
            flag = false;
        }
    }
    else
    {
        if (!(matriz[linha][0] == 0))
        {
            flag = false;
        }
    }
    if (linha >= 1)
    {
        if (!(matriz[linha - 1][coluna] == 4))
        {
            flag = false;
        }
    }
    else
    {
        if (!(matriz[n - 1][coluna] == 4))
        {
            flag = false;
        }
    }
    if (linha < n - 1)
    {
        if (!(matriz[linha + 1][coluna] == 8))
        {
            flag = false;
        }
    }
    else
    {
        if (!(matriz[0][coluna] == 8))
        {
            flag = false;
        }
    }
    return flag;
}
bool esta_wally(int matriz[N][N], int n, int m, int *linha, int *coluna)
{
    *linha = 0;
    *coluna = 0;
 
    int i = 0, j = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (matriz[i][j] == WALLY)
            {
                if (checar_wally(matriz, n, m, i, j))
                {
                    *linha = i;
                    *coluna = j;
                    return true;
                };
            }
        }
     
    }
    return false;
}
 
int main()
{
    int matriz[N][N];
    int n, m, linha, coluna;
    scanf("%d%d", &n, &m);
    int i = 0, j = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }
 
    bool existe = esta_wally(matriz, n, m, &linha, &coluna);
    if (existe)
    {
        printf("%d %d\n", linha, coluna);
    }
    else
    {
        printf("WALLY NAO ESTA NA MATRIZ\n");
    }
    return 0;
}