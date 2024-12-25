#include <stdio.h>
#include <stdbool.h>
#define N 1000
void orderna_coluna(int matriz[N][N], int n) {
    int linha, coluna;
    for (coluna = 0; coluna < n; coluna++) {
 
        int i = 0;
        int end = (n - 1);
        while (end >= 1) {
            bool flag = false;
            int k;
            for (k = 0; k < end; k++) {
                if (matriz[k + 1][coluna] < matriz[k][coluna]) {
                    int tmp = matriz[k][coluna];
                    matriz[k][coluna] = matriz[k + 1][coluna];
                    matriz[k + 1][coluna] = tmp;
                    flag = true;
                }
            }
            end = end - 1;
            if (flag == false) {
                break;
            }
        }
    }
}
void printfAll(int matriz[N][N], int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (!((j + 1) < n)) {
                printf("%d\n", matriz[i][j]);
            } else {
                printf("%d ", matriz[i][j]);
            }
        }
    }
}
int main() {
    int matriz[N][N];
    int n;
    scanf("%d", &n);
    int i = 0, j = 0;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    orderna_coluna(matriz, n);
    printfAll(matriz, n);
    return 0;
}