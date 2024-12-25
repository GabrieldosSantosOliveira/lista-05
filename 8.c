#include <stdbool.h>
#include <stdio.h>
#define N 500
/**
 * Função que verifica se a matriz é de permutação
 * @param matriz Indica a matriz a ser verificada
 * @param n indica a dimensão da matriz
 * @param *soma parâmetro de saída, que armazenará a soma de todos os ’n’ elementos
da matriz.
 * @return int
 */
int ehPermutacao(int matriz[500][500], int n, int* soma) {
    int i, j;
    *soma = 0;
    bool permutacao = true;
    for (i = 0; i < n; i++) {
        int quantidade_de_nulos = 0;
        int quantidade_de_um = 0;
        for (j = 0; j < n; j++) {
            *soma += matriz[i][j];
            if (matriz[i][j] == 0) {
                quantidade_de_nulos++;
            } else if (matriz[i][j] == 1) {
                quantidade_de_um++;
            }
        }
        bool linha_permutacao = ((n - 1) == quantidade_de_nulos) && quantidade_de_um == 1;
        if (!linha_permutacao) {
            permutacao = false;
        }
    }
    for (i = 0; i < n; i++) {
        int quantidade_de_nulos = 0;
        int quantidade_de_um = 0;
        for (j = 0; j < n; j++) {
            if (matriz[j][i] == 0) {
                quantidade_de_nulos++;
            } else if (matriz[j][i] == 1) {
                quantidade_de_um++;
            }
        }
        bool linha_permutacao = ((n - 1) == quantidade_de_nulos) && quantidade_de_um == 1;
        if (!linha_permutacao) {
            permutacao = false;
        }
    }
    return permutacao;
};
 
int main() {
    int matriz[N][N];
    int n, soma;
    scanf("%d", &n);
    int i = 0, j = 0;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    bool permutacao = ehPermutacao(matriz, n, &soma);
    printf("%d\n", n);
    if (permutacao) {
        printf("PERMUTACAO\n");
    } else {
        printf("NAO EH PERMUTACAO\n");
    }
    printf("%d\n", soma);
    return 0;
}