#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "utils.h"
#include "sessoes.h"
#include "structs.h" // Precisa conhecer a struct Sessoes

int buscaSessao(Sessoes *sessao,int id, int qtdSessoes){
    for(int i=0; i<qtdSessoes; i++){
        if(sessao[i].id==id){
            return i;
        }
    }
    return -1;
}

void listarSessoes(Sessoes *sessao, int quantidadeSessoes, Usuarios *usuario, int indiceUsuario){

    limparTela();

    for(int i=0; i<quantidadeSessoes; i++){

        printf("Filme: %d - Id: %d | Idade Minima: %d\n", sessao[i].nome_filme, sessao[i].id, sessao[i].limIdade);
        printf("Data: %s | Horario: %s - %s\n", sessao[i].data, sessao[i].horario_inicio, sessao[i].horario_final);
        printf("Sala: %d\n", sessao[i].sala);
        printf("Valor: %d\n", sessao[i].valorIngresso);
        printf("Assentos:\n");
        for(int i=0; i<15; i++){
            for(int a=0; a<15; a++){
            if(a==14){
                printf("[%d]\n",sessao[i].assento[i][a]); // Para pular para outra "linha" de assentos;
            } else {
                printf("[%d] ",sessao[i].assento[i][a]);
            }
            }
        }
        puts("");

    }
        char resposta;

        do{
        printf("\nDeseja comprar um ingresso? (S/N): ");
        if (scanf(" %c", &resposta) != 1) {
            resposta = ' '; // Define como inválido se o scanf falhar
        }

        // Limpa o buffer de entrada para a próxima iteração
        while (getchar() != '\n'); 

        resposta = toupper(resposta); // Converte para maiúsculo

        if (resposta != 'S' && resposta != 'N') {
            printf("\nOpcao invalida! Digite S ou N.\n Pressione Enter para tentar novamente.");
            while (getchar() != '\n'); // Limpa o buffer (caso tenha sobrado algo)
            getchar(); // Aguarda o usuário pressionar Enter
        }

    } while (resposta != 'S' && resposta != 'N');

    if(resposta=='S'){
        int id;
        int indiceSessao;
        printf("\nDigite o id do filme: ");
        
        do{
            scanf("%d", &id);

            indiceSessao = buscaSessao(sessao, id, quantidadeSessoes);
        
            if(indiceSessao==-1){
                printf("\nId não localizado, digite novamente: ");
            }
        }while(indiceSessao==-1);

        printf("\nDigite o assento desejado: ");

    } else {
        limparTela();
        printf("\n[Enter] para retornar ao menu login...");
        getchar(); // Aguarda o usuário enviar o enter
    }

}