/* Programa para simular uma estrutura de dados do tipo LIsta Ligada*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

Node *createNode(int data);
void freeList(Node *head);
int getListSize(Node *head);

void showTelaMenu();
Node *showTelaCriaCabecaLista(Node *head);
void showTelaAdicionarNoLista(Node *head);
Node *showTelaAdicionarNoListaEmPosicaoX(Node *head);
void showTelaListaNos(Node *head, char disableTitle);
Node *showTelaRemoverNoLista(Node *head);
void showRepresentacaoConceitual(Node *head);

int main() {
    Node *head = NULL;

    int running = 1;

    while (running) {
        showTelaMenu();

        char option = getche();
        option = toupper(option);

        switch (option) {
            case '1': head = showTelaCriaCabecaLista(head); break;
            case '2': showTelaAdicionarNoLista(head); break;
            case '3': head = showTelaAdicionarNoListaEmPosicaoX(head); break;
            case '4': showTelaListaNos(head, 'N'); break;
            case '5': showRepresentacaoConceitual(head); break;
            case '6': head = showTelaRemoverNoLista(head); break;
            case 'S': {
                printf("\n\nEncerrando aplicação...\n\n");
                freeList(head);
                running = 0;
                break;
            }
            default: {
                printf("\n\nOpção inválida!\n");
            }
        }
    }
    
    if (!running) {
        printf("Aplicação encerrada com sucesso.\n\n");
    }

    return running;
}

Node *createNode(int data) {
    Node *node = (Node *) malloc(sizeof(Node));
    node->data = data;
    node->next = NULL;
    return node;
}

void freeList(Node *head) {
    Node* temp = NULL;

    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}

int getListSize(Node *head) {
    int size = 0;
    Node *node = head;

    while (node != NULL) {
        node = node->next;
        size++;
    }

    return size;
}

void showTelaMenu() {
    printf("\n\n");

    printf("+-- :: MENU :: ------------------------------+\n");
    printf("| 1 - Criar Nó Cabeça da Lista               |\n");
    printf("| 2 - Adicionar Nó na Lista                  |\n");
    printf("| 3 - Adicionar Nó na Lista em uma posição X |\n");
    printf("| 4 - Exibir Nós da Lista                    |\n");
    printf("| 5 - Exibir Representação Conceitual        |\n");
    printf("| 6 - Removendo Nó da Lista                  |\n");
    printf("| S - Sair                                   |\n");
    printf("+--------------------------------------------+\n");

    printf("\n");

    printf("Escolha uma opção: ");
}

Node *showTelaCriaCabecaLista(Node *head) {
    char resp = '\0';

    if (head != NULL) {
        printf("\n\nJá existe um Nó Cabeça da Lista! Deseja alterá-lo? S/N? ");
        resp = getche();
        resp = toupper(resp);
        
        if (resp == 'N') {
            return head;
        }
    }

    int value = 0;
    printf("\n\n");
    printf(":: Criando Nó Cabeça da Lista ::\n\n");
    printf(" - Informe o valor do Nó Cabeça da Lista: ");
    scanf("%d", &value);

    Node *node = createNode(value);
    node->next = (resp == 'S' ? head : NULL);

    printf("\nO Nó Cabeça da Lista foi criado com sucesso.\n\n");

    return node;
}

void showTelaAdicionarNoLista(Node *head) {
    printf("\n\n");
    
    if (head == NULL) {
        printf("Não existe Nó Cabeça da Lista! Favor criá-lo!\n\n");
    } else {
        int value = 0;
        
        printf(":: Adicionando Nó na Lista ::\n\n");
        printf(" - Informe o valor do novo Nó: ");
        scanf("%d", &value);

        Node *node = createNode(value);

        Node *temp = head;

        while (temp->next != NULL) {
            temp = temp->next;
        }

        temp->next = node;

        printf("\nO Nó foi adicionado com sucesso na Lista.\n\n");
    }
}

Node *showTelaAdicionarNoListaEmPosicaoX(Node *head) {
    Node *newHead = head;
    
    printf("\n\n");
    
    if (head == NULL) {
        printf("Não existe Nó Cabeça da Lista! Favor criá-lo!\n\n");
    } else {
        int pos = -1;
        int value = 0;
        
        printf(":: Adicionando Nó na Lista em posição X ::");

        showTelaListaNos(head, 'Y');
        int size =  getListSize(head);

        printf("\n\n");

        printf(" - Informe a posição do novo Nó: ");
        scanf("%d", &pos);

        if (pos >= size) {
            printf("\nA posição do novo Nó é inválida! Tente novamente.\n\n");
            return newHead;
        }

        printf(" - Informe o valor do novo Nó..: ");
        scanf("%d", &value);

        Node *node = createNode(value);

        Node *prev = NULL;
        Node *temp = head;
        int i = 0;

        while (temp->next != NULL && i != pos) {
            prev = temp;
            temp = temp->next;
            i++;
        }

        if (prev == NULL) {
            newHead = node;
        } else {
            prev->next = node;
        }

        node->next = temp;

        printf("\nO Nó foi adicionado com sucesso na Lista.\n\n");
    }

    return newHead;
}

void showTelaListaNos(Node *head, char disableTitle) {
    printf("\n\n");

    if (head == NULL) {
        printf("A lista está vazia! Favor criar o Nó Cabeça da Lista.\n\n");
    } else {
        if (disableTitle == 'N') {
            printf(":: Exibindo Nós da Lista ::\n\n");
        }

        Node *node = head;
        int pos = 0;

        printf("- ID Memory Address       Node Data\n");
        printf("--------------------------------------------------------------------------------\n");

        while (node != NULL) {
            printf("- %2d [ %p ] { data: %d | next: %p }\n", pos++, (void*) node, node->data, (void*) node->next);
            node = node->next;
        }
    }
}

void showRepresentacaoConceitual(Node *head) {
    printf("\n\n");

    if (head == NULL) {
        printf("A lista está vazia! Favor criar o Nó Cabeça da Lista.\n\n");
    } else {
        printf(":: Representação Conceitual ::\n\n");

        Node *node = head;

        printf("Head -> ");

        while (node != NULL) {
            char *nextStr = (node->next != NULL ? "*" : "null");
            printf("[%d|%s]", node->data, nextStr);
            printf((node->next != NULL ? " -> " : ""));
            node = node->next;
        }
    }
}

Node *showTelaRemoverNoLista(Node *head) {
    Node *newHead = head;

    printf("\n\n");

    if (head == NULL) {
        printf("A lista está vazia! Favor criar o Nó Cabeça da Lista.\n\n");
    } else {
        int value = 0;
        
        printf(":: Removendo Nó da Lista ::\n\n");
        printf(" - Informe o valor do Nó: ");
        scanf("%d", &value);

        Node *prev = NULL;
        Node *temp = head;

        if (head->data == value) {
            printf("\nO Nó foi removido com sucesso da Lista.\n\n");
            newHead = head->next;
            free(head);
        } else {
            while (temp != NULL && temp->data != value) {
                prev = temp;
                temp = temp->next;
            }

            if (temp != NULL) {
                printf("\nO Nó foi removido com sucesso da Lista.\n\n");
                prev->next = temp->next;
                free(temp);
            } else {
                printf("\nO Nó informado não foi encontrado.\n\n");
            }
        }
    }

    return newHead;
}
