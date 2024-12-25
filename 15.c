#include <stdio.h>
#include <string.h>
 
#define MAX_WORDS 200
#define MAX_WORD_LEN 64 + 1
 
/**
 * @brief Função de separação de palavras de acordo com uma lista de separadores.
 * @param str ponteiro para o início da string original
 * @param m matriz de caracteres, sendo cada linha uma palavra da string original
 * @param sep string com a lista de caracteres separadores
 * @return int quantidade de palavras detectadas
 */
int str_split(char* str, char m[][MAX_WORD_LEN], char* sep) {
    int count = 0;
    char* token;
 
    token = strtok(str, sep);
    while (token != NULL) {
        strncpy(m[count], token, MAX_WORD_LEN - 1);
        m[count][MAX_WORD_LEN - 1] = '\0';
        count++;
         if (count >= MAX_WORDS)
            break;
        token = strtok(NULL, sep);
    }
    return count;
}
 
int main() {
    char str[1024];
    char sep[128];
    char words[MAX_WORDS][MAX_WORD_LEN];
    int word_count, i;
    int max_len, same_length_count;
    int len;
 
    max_len = 0;
    same_length_count = 0;
 
    scanf("%[^\n]%*c", str);
    scanf("%[^\n]%*c", sep);
 
    word_count = str_split(str, words, sep);
 
    for (i = 0; i < word_count; i++) {
        len = strlen(words[i]);
        if (len > max_len) {
            max_len = len;
        }
        printf("(%d)%s\n", len, words[i]);
    }
 
    for (i = 0; i < word_count; i++) {
        if ((int)strlen(words[i]) == max_len) {
            same_length_count++;
        }
    }
 
    printf("%d\n", same_length_count);
 
    return 0;
}