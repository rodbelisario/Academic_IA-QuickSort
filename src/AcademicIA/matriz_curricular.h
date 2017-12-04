#ifndef MATRIZ_CURRICULAR_H_INCLUDED
#define MATRIZ_CURRICULAR_H_INCLUDED

#include <stdint.h>
#include "unidade_curricular.h"
#include "doubly_linked_list.h"

typedef struct matriz_curricular mc_t;

// MC_T FUNCTIONS
mc_t*       mc_new( uint8_t* nome_curso, uint16_t id_curso, uint8_t id_grade, uint16_t ano_criacao, uint8_t semestre_criacao);
void        mc_delete(mc_t* mc);

// list functions
void        mc_uc_new(mc_t* mc, node_t* uc_node);
void        mc_uc_delete(mc_t* mc, uint8_t* codigo);
node_t*     mc_find_uc_node(mc_t* mc, uint8_t* codigo);

// print functions
void        mc_print(mc_t* mc);

//file functions
mc_t*       mc_load_mc(uint8_t* file);
void        mc_save_mc(mc_t* mc, uint8_t* file);
// GETTERS METHODS
uint8_t     mc_get_id_grade(mc_t* mc);
uint8_t*    mc_get_nome_curso(mc_t* mc);
uint16_t    mc_get_id_curso(mc_t* mc);
uint16_t    mc_get_ano_criacao(mc_t* mc);
uint8_t     mc_get_semestre_criacao(mc_t* mc);
uint16_t    mc_get_total_horas(mc_t* mc);
dll_t*      mc_get_list(mc_t* mc);
uint16_t    mc_get_uc_node_total(mc_t* mc);

#endif // MATRIZ_CURRICULAR_H_INCLUDED