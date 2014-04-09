#ifndef _magazyn
#define _magazyn

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	int rows;
	int cols;
	int **tab;
	int dead;
	int live;
}*life_t;

void alloc_matrix(life_t t); //alokacja tablicy dwuwymiarowej


#endif
