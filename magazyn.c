#include "magazyn.h"


void alloc_matrix(life_t t) //alokacja tablicy dwuwymiarowej
{
	t->tab = malloc((t->rows)*sizeof(int *));
	int i;
	for (i = 0; i < t->cols; i++)
		t->tab[i] = malloc((t->cols)*sizeof(int *));
}

