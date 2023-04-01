#include <stdio.h>
 
typedef struct Data{
    int dia;
    int mes;
    int ano;
//Função typedef ajuda na não repetição de palavras em um struct
}Data;
 
struct Aluno{
    int id;
    //aqui não foi necessário repetir Struct Data, apenas data
    Data nascimento;
};
 
 
int main () {
 
    //Criando um aluno
    struct Aluno aluno1;
    //Modificando valores
    aluno1.id = 1;
    aluno1.nascimento.ano = 2000;
    aluno1.nascimento.mes = 8;
    aluno1.nascimento.dia = 11;
 
    //Imprimindo valores
    printf("Nascido em: %d / %d / %d",  aluno1.nascimento.dia,  aluno1.nascimento.mes,  aluno1.nascimento.ano);
 
    return 0;

}