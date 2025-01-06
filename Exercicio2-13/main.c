#include <stdio.h>

#define Alfabeto 256

void contOco(const char *str) {
    int contador[Alfabeto] = {0};


    while (*str) {
        contador[(unsigned char)*str]++;
        str++;
    }

    printf("Ocorrências de caracteres:\n");
    for (int i = 0; i < Alfabeto; i++) {
        if (contador[i] > 0) {
            printf("'%c': %d\n", i, contador[i]);
        }
    }
}

int main() {
    char str[100];

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);
    contOco(str);

    return 0;
}
