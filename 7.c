#include <stdio.h>
 
 
int main() {
    int n;
    char borda, corpo;
    scanf("%d %c %c", &n, &borda, &corpo);
    if ((n % 2) == 0) {
        printf("Dimensao invalida!");
        return 0;
    }
    int i, j, k = 1;
    for (i = 1; i < (n + 1) / 2; i++) {
        int space = (n - k) / 2;
        int first = space + 1;
        int end = (space + k);
        for (j = 0; j < n; j++) {
            if ((j + 1) <= space) {
                printf("  ");
            } else if ((j + 1) == first) {
                printf("%c ", borda);
            } else if ((j + 1) == end) {
                printf("%c", borda);
                break;
            } else if ((j + 1) <= (space + k)) {
                printf("%c ", corpo);
            }
        }
        printf("\n");
        k += 2;
    }
    for (i = 0; i < n; i++) {
        if (i == 0) {
            printf("%c ", borda);
 
        } else if (!((i + 1) < n)) {
            printf("%c", borda);
 
        } else {
            printf("%c ", corpo);
        }
    }
    printf("\n");
    k = n - 2;
     for (i = 1; i < (n + 1) / 2; i++) {
        int space = (n - k) / 2;
        int first = space + 1;
        int end = (space + k);
        for (j = 0; j < n; j++) {
            if ((j + 1) <= space) {
                printf("  ");
            } else if ((j + 1) == first) {
                printf("%c ", borda);
            } else if ((j + 1) == end) {
                printf("%c", borda);
                break;
            } else if ((j + 1) <= (space + k)) {
                printf("%c ", corpo);
            }
        }
        printf("\n");
        k -= 2;
    }
    return 0;
}