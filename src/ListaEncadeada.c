/*
 ============================================================================
 Name        : ListaEncadeada.c
 Author      : Marcelo Odir
 Version     :
 Copyright   : GNU/GPL
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i = 0;

	typedef  struct {
		int inteiro;
		char caractere;
	}cadaLista;

	typedef struct {
		cadaLista lista;
		cadaLista * proxima;
	}estrutura;

	cadaLista minhalista;
	estrutura minhaestrutura;
	int entrada;

	for(i=0;i<3;i++) {
		entrada = scanf("%d");
	}




	return EXIT_SUCCESS;
}
