#include<stdio.h>
#include<stdlib.h>

int main(void){
    int qntfrutas,linha;
    printf("Digite a quantidade de frutas");
    scanf("%d",&qntfrutas);

    char ** frutas = (int*) malloc(qntfrutas*sizeof(int*));
    if(frutas==NULL){
        exit(1);
    }

    for(linha = 0; linha<qntfrutas; linha++){
        frutas[linha]= (char*) malloc(50*sizeof(char*));
    }

    float * preco= (float*) malloc (qntfrutas*sizeof(float));
    if(preco==NULL){
        exit(1);
    }
    for(linha = 0; linha<qntfrutas; linha++){
        scanf("%[^\n]",frutas[linha]);
        scanf("%f", &preco[linha]);
    }

    /*for (linha = 0; linha < qntfrutas; linha++) {
        frutas[linha] = (char*) realloc(frutas[linha], sizeof(frutas[linha]) * sizeof(char));
    }*/ 
//nao tive sucesso
for(linha=0;linha<qntfrutas;linha++){
    free(frutas[linha]);
}
free(frutas);
free(preco);

    return 0;
}