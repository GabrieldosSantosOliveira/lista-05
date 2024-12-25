#include <stdio.h>
#define N 4
int main()
{
    double matriz[N];
    int i = 0;
    for (i = 0; i < N; i++)
    {
        scanf("%lf", &matriz[i]);
    }
    double determinante = (matriz[0] * matriz[3]) - (matriz[1] * matriz[2]);
    printf("%.2lf", determinante);
    return 0;
}