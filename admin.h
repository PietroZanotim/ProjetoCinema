//--------------------------!! SOBRE O ARQUIVO !!------------------------------
//---------------------------{ FUNCOES DO ADMIN }------------------------------
//-----------------------------------------------------------------------------

#ifndef ADMIN_H  // Guardas de inclusão (evita erro de redefinição)
#define ADMIN_H

#include "structs.h" // Precisa conhecer a struct Usuarios

// CRUD SESSAO
void adicionar_sessao();
void excluir_sessao();
void modificar_sessao();

// CRUD USUARIO
void adicionar_usuario();
void excluir_usuario();
void modificar_usurario();
void visualizar_usuario_id();
void visualizar_todos_usuarios();

// CRUD RESERVA
void adicionar_reserva();
void excluir_reserva();
void modificar_reserva();
void visualizar_reserva_id();
void visualizar_todas_reservas();

// CONSULTAS e RELATÓRIOS
void CONS_nome_do_filme();
void CONS_data_da_sessao();
void CONS_CPF();


#endif