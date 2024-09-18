#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

#define FILMES_LENGTH 10
#define FILENAME "/root/filmes.dat"

typedef struct {
   char titulo[256];
} Filme;

typedef struct {
   Filme data[FILMES_LENGTH];
   int count;
} Filmes;

void strread(char *value, int strsize) {
   if (fgets(value, strsize, stdin) != NULL) {
       size_t len = strlen(value);
       if (len > 0 && value[len - 1] == '\n') {
           value[len - 1] = '\0';
       } else {
           // Discard the remaining characters in the buffer
           int ch;
           while ((ch = getchar()) != '\n' && ch != EOF);
           printf("Erro ao ler uma string.\n");
       }
   } else {
       printf("Erro ao ler a entrada.\n");
   }
}

void salvarFilmes(Filmes filmes) {
   FILE *file = fopen(FILENAME, "wb");
   if (file == NULL) {
       perror("Erro ao abrir o arquivo para escrita");
       return;
   }
   fwrite(&filmes, sizeof(Filmes), 1, file);
   fclose(file);
}

Filmes lerFilmes() {
   Filmes filmes;
   FILE *file = fopen(FILENAME, "rb");
   if (file == NULL) {
       perror("Erro ao abrir o arquivo para leitura");
       filmes.count = 0;  // Se o arquivo não existe, retornamos um Filmes vazio
       return filmes;
   }
   fread(&filmes, sizeof(filmes), 1, file);
   fclose(file);
   return filmes;
}

int main() {
   setlocale(LC_ALL, "");

   char c = 'N';
   Filmes filmesNovos;
   filmesNovos.count = 0;

   printf("Cadastrar Filmes\n");
   printf("----------------\n\n");

   for (int i = 0; i < FILMES_LENGTH; i++) {
       printf("Digite o titulo do filme: ");
       strread(filmesNovos.data[i].titulo, sizeof(filmesNovos.data[i].titulo));
       filmesNovos.count += 1;

       printf("Deseja continuar cadastrando? S/N: ");

       // Limpar o buffer de entrada após getchar
       c = getchar();
       int ch;
       while ((ch = getchar()) != '\n' && ch != EOF);

       c = toupper(c); // Converte caractere para uppercase

       if (c == 'N') {
           break;
       }
   }

   // Salvando os filmes novos no arquivo filmes.dat
   salvarFilmes(filmesNovos);

   // Lendo os filmes salvos no arquivo filmes.dat
   Filmes filmesSalvos = lerFilmes();

   printf("Listando Filmes\n");
   printf("---------------\n\n");
   printf("Os filmes Cadastrados são:\n");

   for (int i = 0; i < filmesSalvos.count; i++) {
       printf("- %s\n", filmesSalvos.data[i].titulo);
   }

   printf("\n\n");

   return 0;
}
