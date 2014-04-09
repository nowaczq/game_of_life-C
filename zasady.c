#include "zasady.h"

void rule_row1_col1 (life_t a, life_t b) // lewy górny róg
{
	int suma = a->tab[0][1] + a->tab[1][0] + a->tab[1][1];
	if (a->tab[0][0] == 0)
	{
		if (suma == 3) b->tab[0][0] = 1;
		else b->tab[0][0] = 0;
	}
	else
	{
		if (suma == 3 || suma == 2) b->tab[0][0] = 1;
		else b->tab[0][0] = 0;
	}
}


void rule_row_n_col1 (life_t a, life_t b) // lewy dolny róg
{
        int suma = a->tab[a->rows-2][0] + a->tab[a->rows-2][1] + a->tab[a->rows-1][1];
        if (a->tab[0][a->rows-1] == 0)
        {
                if (suma == 3) b->tab[0][a->rows-1] = 1;
                else b->tab[0][a->rows-1] = 0;
        }
        else
        {
                if (suma == 3 || suma == 2) b->tab[0][a->rows-1] = 1;
                else b->tab[0][a->rows-1] = 0;
        }
}



void rule_row1_col_n (life_t a, life_t b) // prawy górny róg
{
        int suma = a->tab[0][a->cols-2] + a->tab[1][a->cols-2] + a->tab[1][a->cols-1];
        if (a->tab[0][a->cols-1] == 0)
        {
                if (suma == 3) b->tab[0][a->cols-1] = 1;
                else b->tab[0][a->cols-1] = 0;
        }
        else
        {
                if (suma == 3 || suma == 2) b->tab[0][a->cols-1] = 1;
                else b->tab[0][a->cols-1] = 0;
        }
}



void rule_row_n_col_n (life_t a, life_t b) //prawy dolny róg
{
        int suma = a->tab[a->rows-2][a->cols-2] + a->tab[a->rows-1][a->cols-2] + a->tab[a->rows-2][a->cols-1];
        if (a->tab[a->rows-1][a->cols-1] == 0)
        {
                if (suma == 3) b->tab[a->rows-1][a->cols-1] = 1;
                else b->tab[a->rows-1][a->cols-1] = 0;
        }
        else
        {
                if (suma == 3 || suma == 2) b->tab[a->rows-1][a->cols-1] = 1;
                else b->tab[a->rows-1][a->cols-1] = 0;
        }
}


void rule_row1 (life_t a, life_t b, int x, int y) // pierwszy wiersz
{
        int suma = a->tab[x][y-1] + a->tab[x+1][y-1] + a->tab[x+1][y] + a->tab[x+1][y+1] + a->tab[x][y+1];
        if (a->tab[x][y] == 0)
        {
                if (suma == 3) b->tab[x][y] = 1;
                else b->tab[x][y] = 0;
        }
        else
        {
                if (suma == 3 || suma == 2) b->tab[x][y] = 1;
                else b->tab[x][y] = 0;
        }
}



void rule_row_n (life_t a, life_t b, int x, int y) // ostatni wiersz
{
        int suma = a->tab[x-1][y-1] + a->tab[x-1][y] + a->tab[x-1][y+1] + a->tab[x][y-1] + a->tab[x][y+1];
        if (a->tab[x][y] == 0)
        {
                if (suma == 3) b->tab[x][y] = 1;
                else b->tab[x][y] = 0;
        }
        else
        {
                if (suma == 3 || suma == 2) b->tab[x][y] = 1;
                else b->tab[x][y] = 0;
        }
}



void rule_col1 (life_t a, life_t b, int x, int y) // pierwsza kolumna
{
        int suma = a->tab[x-1][y] + a->tab[x-1][y+1] + a->tab[x][y+1] + a->tab[x+1][y+1] + a->tab[x+1][y];
        if (a->tab[x][y] == 0)
        {
                if (suma == 3) b->tab[x][y] = 1;
                else b->tab[x][y] = 0;
        }
        else
        {
                if (suma == 3 || suma == 2) b->tab[x][y] = 1;
                else b->tab[x][y] = 0;
        }
}



void rule_col_n (life_t a, life_t b, int x, int y) // ostatnia kolumna
{
        int suma = a->tab[x-1][y-1] + a->tab[x-1][y] + a->tab[x][y-1] + a->tab[x+1][y-1] + a->tab[x+1][y];
        if (a->tab[x][y] == 0)
        {
                if (suma == 3) b->tab[x][y] = 1;
                else b->tab[x][y] = 0; 
        }
        else
        {
                if (suma == 3 || suma == 2) b->tab[x][y] = 1;
                else b->tab[x][y] = 0;
        }
}


void rule_mid (life_t a, life_t b, int x, int y) // środek
{
        int suma = a->tab[x-1][y-1] + a->tab[x-1][y] + a->tab[x-1][y+1] + a->tab[x][y+1] + a->tab[x+1][y+1] + a->tab[x+1][y] + a->tab[x+1][y-1] + a->tab[x][y-1];
        if (a->tab[x][y] == 0)
        {
                if (suma == 3) b->tab[x][y] = 1;
                else b->tab[x][y] = 0; 
        }
        else
        {
                if (suma == 3 || suma == 2) b->tab[x][y] = 1;
                else b->tab[x][y] = 0;
        }
}
