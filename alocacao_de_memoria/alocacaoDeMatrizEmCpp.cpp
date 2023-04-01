#include <stdio.h>
#include <stdlib.h>
#include <new>
#include <iostream>
#include <string>

using namespace std;
  
int main(){

    //Definindo as variaveis 
    int linhas = 3, colunas = 3, i, j;
    int **matriz; 

    //Interagindo com o user 
    printf("Digite o numero de linhas: ");
    scanf("%d",&linhas);
    printf("Digite o numero de colunas: ");
    scanf("%d",&colunas);

    //Alocando Memória Para as Linhas UTILIZANDO O NEW 
    matriz = (int**) new int(linhas);

    //Alocando Memória Para as Colunas de Cada Linha UTILIZANDO O NEW
    for (i = 0; i< linhas; i++){
        matriz [i] = (int*) new int(colunas) ;
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