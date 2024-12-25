#include <stdbool.h>
#include <stdio.h>
#define N 10
#define limite_matriz(x) x > 10 || x <= 0
 
bool e_unico(int matriz[N][N], int nl, int nc, int searchValue) {
    int i = 0, j = 0;
    int quantidade = 0;
    for (i = 0; i < nl; i++) {
        for (j = 0; j < nc; j++) {
            if (matriz[i][j] == searchValue) {
                quantidade++;
            }
            if (quantidade >= 2) {
                break;
            }
        }
    }
    if (quantidade == 1) {
        return true;
    }
    return false;
}
 
void verifica_unico(int unico[N], int* unico_tamanho, int matriz[N][N], int nl, int nc) {
    int i = 0, j = 0;
    *unico_tamanho = 0;
    for (i = 0; i < nl; i++) {
        for (j = 0; j < nc; j++) {
            if (e_unico(matriz, nl, nc, matriz[i][j])) {
                unico[*unico_tamanho] = matriz[i][j];
                *unico_tamanho += 1;
            }
        }
    }
}
int main() {
    int matriz[N][N];
    int nl, nc;
    scanf("%d%d", &nl, &nc);
    if (limite_matriz(nl) || limite_matriz(nc)) {
        printf("dimensao invalida\n");
        return 0;
    }
    int i = 0, j = 0;
    for (i = 0; i < nl; i++) {
        for (j = 0; j < nc; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    int unico[N], tamanho = 0;
    verifica_unico(unico, &tamanho, matriz, nl, nc);
    for (i = 0; i < tamanho; i++) {
        if (!((i + 1) < tamanho)) {
            printf("%d\n", unico[i]);
        } else {
            printf("%d,", unico[i]);
        }
    }
    if (tamanho == 0) {
        printf("sem elementos unicos\n");
    }
    return 0;
}