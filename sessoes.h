#ifndef SESSOES_H  // Guardas de inclusão (evita erro de redefinição)
#define SESSOES_H

void listarSessoes(Sessoes *sessao, int quantidadeSessoes, Usuarios *usuario, int indiceUsuario, Reservas *reserva, int *qtdReservas);
int buscaSessao(Sessoes *sessao,int id, int qtdSessoes);

#endif