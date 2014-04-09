#include "odczyt.h"

void read_var (FILE *in, life_t t) //odczyt zmiennych początkowych
{
	fscanf(in,"%d",&(t->rows));
	fscanf(in,"%d",&(t->cols));
	fscanf(in,"%d",&(t->live));
	fscanf(in,"%d",&(t->dead));
	
}


void read_matrix (FILE *in, life_t t) //odczyt macierzy
{
	int i,j;
	for (i = 0; i < t->rows; i++)
	{
		for ( j = 0; j < t->cols; j++)
			fscanf(in,"%d",&(t->tab[i][j]));
	}
}

void print_matrix (life_t t) //wydruk macierzy
{
	int i,j;
	for (i = 0; i < t->rows; i++)
	{
		for (j = 0; j < t->cols; j++)
			printf("%d ", t->tab[i][j]);
		printf("\n");
	}
	printf("\n");
}

