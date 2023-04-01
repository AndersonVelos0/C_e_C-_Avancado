#include <stdio.h>
#include <stdlib.h>
  
int main(){

    //Definindo as variaveis 
    int linhas = 3, colunas = 3, i, j;
    int **matriz; 

    //Interagindo com o user 
    printf("Digite o numero de linhas: ");
    scanf("%d",&linhas);
    printf("Digite o numero de colunas: ");
    scanf("%d",&colunas);

    //Alocando Memória Para as Linhas
    matriz = (int**) malloc(linhas * sizeof(int));

    //Alocando Memória Para as Colunas de Cada Linha
    for (i = 0; i< linhas; i++){
        matriz [i] = (int*) malloc(colunas * sizeof(int));
    }

    //Preenchendo Valores e Exibindo a Matriz 
    for (i = 0; i < linhas; i++){
        for(j = 0; j < colunas; j++){
            matriz [i][j] = i;
            printf("%d ", matriz[i][j]);
        }
            printf("\n ");
    }
    free(matriz);
}