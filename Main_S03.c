#include<stdio.h>
#include<stdlib.h>
#include "BBT_S03.c"
int main (){
    int escolha;
    char x[7];
    NO* Lista;
    NO* lista_aux;
    Disciplina elem;
    Lista = lista_inicializar(Lista);
    do{
         Menu();
        printf("Digite uma opcao valida: \n");
        scanf("%d", &escolha);
        fflush(stdin);
        system("cls");
        switch(escolha){
            case 0:;
            return 0;
            case 1:
                fflush(stdin);
                printf("Digite o nome da disciplina: \n");
                gets(elem.nome);
                fflush(stdin);
                printf("Digite o codigo da disciplina: \n");
                gets(elem.codigo);
                fflush(stdin);
                printf("Digite o numero de creditos: \n");
                scanf("%d", &elem.creditos);
                fflush(stdin);
                printf("Digite a carga horaria: \n");
                scanf("%d", &elem.cargahor);
                lista_aux = inserir_fim(Lista,elem);
                if(lista_aux != NULL){
                    Lista = lista_aux;
                }
                break;
            case 2:
                fflush(stdin);
                printf(" Digite o codigo da disciplina que quer remover: \n");
                gets(x);
                lista_aux = remover_valor(Lista, x);
                    if(lista_aux != NULL){
                        Lista = lista_aux;
                    }
                break;
            case 3:
               imprimirlista(Lista);
               break;
            case 4:
                imprimirlista2(Lista);
                break;
            default: printf("Saindo\n");
    }
    }while(escolha!=5);
 return 0;
}
