#include <stdio.h>
#include <string.h>
//Biblioteca para escrever arquivos
#include <fstream>
 
using namespace std;
 
int main () {
 
    //Cria o objeto de arquivo
    ofstream arquivoDeSaida;
 
    //Abre o arquivo ou cria caso não exista
    arquivoDeSaida.open("CartasParaJulieta.txt", std::ios_base::app);
 
    //Escreve algo
    arquivoDeSaida << "\nOlá, estou criando um arquivo e escrevendo dentro dele por meio de código de programação";
 
    //Fecha o arquivo
    arquivoDeSaida.close();
 
    return 0;
}
 