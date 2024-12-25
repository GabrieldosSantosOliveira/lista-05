#include <stdio.h>
#define N 2
int main()
{
    float matriz[N][N];
    int i = 0, j = 0;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            scanf("%f", &matriz[i][j]);
        }
    }
 
    printf("%.3f %.3f\n", (matriz[0][0] * matriz[0][0]) + (matriz[0][1] * matriz[1][0]), (matriz[0][0] * matriz[0][1]) + (matriz[0][1] * matriz[1][1]));
    printf("%.3f %.3f\n", (matriz[1][0] * matriz[0][0]) + (matriz[1][1] * matriz[1][0]), (matriz[1][0] * matriz[0][1]) + (matriz[1][1] * matriz[1][1]));
 
    return 0;
}