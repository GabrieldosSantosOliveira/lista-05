#include <stdbool.h>
#include <stdio.h>
#define N 10
 
void transposta(int matriz[N][N], int transposta[N][N], int n) {
    int linha, coluna;
    for (linha = 0; linha < n; linha++) {
        for (coluna = 0; coluna < n; coluna++) {
            transposta[linha][coluna] = matriz[coluna][linha];
        }
    }
}
bool bissimetrica(int matriz[N][N], int transposta[N][N], int n) {
    int linha, coluna;
    for (linha = 0; linha < n; linha++) {
        for (coluna = 0; coluna < n; coluna++) {
            if (matriz[linha][coluna] != matriz[coluna][linha]) {
                return false;
            };
            if(matriz[linha][coluna] != matriz[n - 1 - coluna][n - 1 - linha]){
               return false;
            }
        }
    }
    
    return true;
}
int main() {
    int matriz[N][N];
    int matriz_transposta[N][N];
    int n;
    scanf("%d", &n);
    if (n < 1 || n > 10) {
        printf("dimensao invalida\n");
        return 0;
    }
    int i = 0, j = 0;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    transposta(matriz, matriz_transposta, n);
    if (bissimetrica(matriz, matriz_transposta, n)) {
        printf("bissimetrica\n");
    } else {
        printf("nao bissimetrica\n");
    }
    return 0;
}