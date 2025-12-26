//--------------------------!! SOBRE O ARQUIVO !!------------------------------
//---------------------------{ FUNCOES DO ADMIN }------------------------------
//-----------------------------------------------------------------------------

#ifndef ADMIN_H  // Guardas de inclusão (evita erro de redefinição)
#define ADMIN_H

#include "structs.h" // Precisa conhecer a struct Usuarios

// --- PERSISTÊNCIA (Requisito 3) ---
// Funções para carregar/salvar os vetores em arquivos binários
void inicializar_sistema(); // Pode englobar os carregamentos
void finalizar_sistema();   // Pode englobar os salvamentos

// --- CRUD SESSÃO (Estrutura 1) ---
void adicionar_sessao();
void excluir_sessao();
void modificar_sessao();
// Nota: Visualizar Sessão está em outro arquivo.

// --- CRUD USUÁRIO (Estrutura 2) ---
void adicionar_usuario();
void excluir_usuario();
void modificar_usuario(); 
void visualizar_usuario_cpf();
void visualizar_todos_usuarios();

// --- CRUD RESERVA (Estrutura 3 - Relacional) ---
void adicionar_reserva();
void excluir_reserva();
void modificar_reserva();
void visualizar_reserva_id();
void visualizar_todas_reservas();

// --- CONSULTAS NA TELA (Requisito 5f - Output Terminal) ---
// Deve mostrar dados da Reserva + Nome do Filme + Nome do Usuário 
void CONS_reservas_por_filme();
void CONS_reservas_por_data();
void CONS_reservas_por_cpf();

// --- RELATÓRIOS EM TXT (Requisito 5g - Output Arquivo) ---
// Gera arquivo .txt formatado com as mesmas lógicas acima 
void REL_reservas_por_filme();
void REL_reservas_por_data();
void REL_reservas_por_cpf();




#endif