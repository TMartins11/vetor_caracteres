/*
    Refazer Projeto AEDS - GIT
1- Criar um projeto novo com o código abaixo - FEITO;
2- Iniciar os vetores ‘nome’ e ‘sobrenome’ com as letras do seu próprio nome, e não se esqueça do ‘\0’ no final - FEITO;
3- Construir o vetor ‘nomecompleto’ copiando as letras dos vetores nome e sobrenome utilizando repetições com índices - FEITO;
4- Colocar os caracteres do nome completo em maiusculas - FEITO;
5- Agora, colocar os caracteres em minúsculas, menos as primeiras letras do nome completo - FEITO;
6- Retirar os espaços de um nome completo;
7- Procurar se um nome está dentro de um nome completo.
*/

#include <stdio.h>

int main(){
    const int TAM_NOME = 30;
    const int TAM_SOBRENOME = 30;
    const int TAM_NOMECOMPLETO = TAM_NOME + TAM_SOBRENOME;

    char nome[TAM_NOME], sobrenome[TAM_SOBRENOME], nomecompleto[TAM_NOMECOMPLETO];
    int i = 0;

    //Atribuindo o Nome e imprindo-o na tela
    nome[0] = 'T';   
    nome[1] = 'h';
    nome[2] = 'i';
    nome[3] = 'a';
    nome[4] = 'g';
    nome[5] = 'o';
    nome[6] = '\0';

    printf("\nNome: %s!\n", nome);

    //Atribuindo o Sobrenome e imprimindo na tela
    sobrenome[0] = 77;
    sobrenome[1] = 97;
    sobrenome[2] = 114;
    sobrenome[3] = 116;
    sobrenome[4] = 105;
    sobrenome[5] = 110;
    sobrenome[6] = 115;
    sobrenome[7] = '\0';

    printf("\nSobrenome: %s!\n", sobrenome);

    //Adicionando Nome no vetor nomecompleto
    for(i = 0; nome[i] != '\0'; i++){
        nomecompleto[i] = nome[i];
    }

    //Adicionando o espaço entre Nome e Sobrenome
    nomecompleto[i] = ' ';
    i++;

    //Guardar espaço onde começa o sobrenome
    int k = i;

    //Adicionando Sobrenome ao vetor nomecompleto
    int j = 0;
     for(j = 0; sobrenome[j] != '\0'; j++){
        nomecompleto[i] = sobrenome[j];
        i++;
    }

    //Imprimindo o Nome Completo
    printf("\nNome Completo: %s!\n", nomecompleto);
    /* +32 vira minúscula*/

    //Transformando o Nome Completo em MAIÚSCULO
    for(i = 0; nomecompleto[i] != '\0'; i++){
        if( nomecompleto[i] >= 'a' && nomecompleto[i] <= 'z'){
            nomecompleto[i] -= 32;
        }
    }

    //Imprimindo Nome Completo em MAIÚSCULO
    printf("\nNome Completo em MAIÚSCULO: %s!\n", nomecompleto);

    //Transformando em minúsculo (exceção das iniciais)
    for(i = 0; nomecompleto[i] != '\0'; i++){
        if(nomecompleto[i] >= 'A' && nomecompleto[i] <= 'Z' && i != 0 && i != k){
            nomecompleto[i] += 32;
        }
    }

    //Imprimindo em minúsculo (exceção das iniciais)
    printf("\nNome Completo em minúsculo (exceção das iniciais): %s!\n", nomecompleto);

    //Retirando o espaço entre nomecompleto
    int espacos = 0;
    
    for(i = 0; nomecompleto[i] != '\0'; i++){
        if(nomecompleto[i] == ' '){
            espacos++;
            
        }else{
            nomecompleto[i - espacos] = nomecompleto[i];
        }
    }

    //Finalizando o vetor nomecompleto
    nomecompleto[i - espacos] = '\0';

    printf("\nNome Completo sem espaços: %s!\n", nomecompleto);

    return 0;
}