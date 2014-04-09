#include "algorytm.h"

void game_life (life_t t, life_t p,char *name) //algorytm gry w życie
{
	int i,j;
	for (i = 0; i < t->rows; i++)
	{
		for (j = 0 ;j < t->cols; j++)
		{
			if (i == 0 && j == 0) rule_row1_col1(t,p);
			else if (i == t->rows-1 && j == 0) rule_row_n_col1(t,p);
			else if (i == 0 && j == t->cols-1) rule_row1_col_n(t,p);
			else if (i == t->rows-1 && j == t->cols-1) rule_row_n_col_n(t,p);
			else if (i == 0) rule_row1(t,p,i,j);
			else if (i == t->rows-1) rule_row_n(t,p,i,j);
			else if (j == 0) rule_col1(t,p,i,j);
			else if (j == t->cols-1) rule_col_n(t,p,i,j);
			else rule_mid(t,p,i,j);
		}
	}
	draw_picture(p,name);	
}
