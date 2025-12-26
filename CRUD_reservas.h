//--------------------------!! SOBRE O ARQUIVO !!------------------------------
//-----------------------{ CRUD PARA STRUCT RESERVAS }-------------------------
//-----------------------------------------------------------------------------

#ifndef CRUD_RESERVAS_H  // Guardas de inclusão (evita erro de redefinição)
#define CRUD_RESERVAS_H

#include "structs.h" // Precisa conhecer a struct Usuarios

// --- CRUD RESERVA (Estrutura 3 - Relacional) ---
void adicionar_reserva();
void excluir_reserva();
void modificar_reserva();
void visualizar_reserva_id();
void visualizar_todas_reservas();

#endif