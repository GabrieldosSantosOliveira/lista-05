#include <stdio.h>
#define N 1000
int somaDiagonalPrincipal(int matriz[N][N], int n) {
    int i, soma = 0;
 
    for (i = 0; i < n; i++) {
        soma += matriz[i][i];
    }
    return soma;
}
void transposta(int matriz[N][N], int transposta[N][N], int n) {
    int linha, coluna;
    for (linha = 0; linha < n; linha++) {
        for (coluna = 0; coluna < n; coluna++) {
            transposta[linha][coluna] = matriz[coluna][linha];
        }
    }
}
void multiply(int matriz[N][N], int n, int k) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            matriz[i][j] = matriz[i][j] * k;
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
 
void add(int matriz[N][N], int transposta[N][N], int n) {
    int linha, coluna;
    for (linha = 0; linha < n; linha++) {
        for (coluna = 0; coluna < n; coluna++) {
            matriz[linha][coluna] = matriz[linha][coluna] + transposta[linha][coluna];
        }
    }
}
int main() {
    int matriz[N][N];
    int matriz_transposta[N][N];
    int n;
    scanf("%d", &n);
    int i = 0, j = 0;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    transposta(matriz, matriz_transposta, n);
    int diagonal = somaDiagonalPrincipal(matriz_transposta, n);
    multiply(matriz, n, diagonal);
    add(matriz, matriz_transposta, n);
    printfAll(matriz, n);
    return 0;
}