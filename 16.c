#include <stdio.h>
#include <stdbool.h>
#define NO_ACCESS -1
#define N 100
int main()
{
    int matriz[6][6] = {{0, 63, 210, 190, NO_ACCESS, 190},
                        {63, 0, 160, 150, 95, 10},
                        {210, 160, 0, 10, 1, 10},
                        {190, 150, 10, 0, 10, 20},
                        {10, 95, 7, 21, 0, 80},
                        {190, 2, NO_ACCESS, 41, 80, 0}};
    int n, i;
    scanf("%d", &n);
    int camiho[N];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &camiho[i]);
    }
    bool invalido = false;
    int distancia = 0;
    for (i = 0; i < (n - 1); i++)
    {
        if (matriz[camiho[i]][camiho[i + 1]] != NO_ACCESS)
        {
            distancia += matriz[camiho[i]][camiho[i + 1]];
        }
        else
        {
            invalido = true;
            break;
        }
    }
    if (invalido)
    {
        printf("rota invalida!\n");
    }
    else
    {
        printf("%d\n", distancia);
    }
    return 0;
}