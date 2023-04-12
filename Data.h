#pragma once
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Representacao do TAD: TData
//-----------
// Interface
//-----------

typedef struct data tData;

/* Funcoes exportadas */
/* Funcao cria - Aloca e retorna uma data dia/mes/ano */
tData* dta_cria(int dia, int mes, int ano);

/* Funcao libera Libera  memoria de uma Data criada */
void dta_libera(tData* p);

/* Funcao acessa - Retorna os valores de uma Data */
void dta_acessa(tData* p, int* dia, int* mes, int* ano);

/* Funcao atribui - Atribui novos valores Data */
void dta_atribui(tData* p, int dia, int mes, int ano);

/* Funcao Intervalo - Retorna a data apos X dias */
tData* dta_intervalo(tData* p1, int X);

/* Funcao Exibe Escreve na tela a data  no formato dd/mm/aaaa */
void dta_exibe(tData* p1);

/* Funcao getData - Retorna uma string com os valores da data no formato dd/mm/aaaa*/
char* dta_getData(tData* p);
