#include <stdio.h>
 
int main()
{
    unsigned  long long int altura, largura, largura_borda, borda;
    scanf("%llu%llu%llu%llu", &largura, &altura, &largura_borda, &borda);
    printf("P2\n");
    printf("%llu %llu\n", largura, altura);
    printf("255\n");
    int i, j;
    for (i = 0; i < altura; i++)
    {
        for (j = 0; j < largura; j++)
        {
            if ((i + 1) <= largura_borda)
            {
                printf("%llu", borda);
            }
            else if ((j + 1) <= largura_borda)
            {
                printf("%llu", borda);
            }
            else if (i >= (altura - largura_borda))
            {
                printf("%llu", borda);
            }
            else if (j >= (largura - largura_borda))
            {
                printf("%llu", borda);
            }
            else
            {
                printf("0 ");
            }
            if((j+1)<largura ){
               printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}