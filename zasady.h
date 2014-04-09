#ifndef _zasady
#define _zasady

#include "magazyn.h"
#include "odczyt.h"

void rule_row1_col1 (life_t a, life_t b); // prawy górny róg

void rule_row_n_col1 (life_t a, life_t b); // lewy dolny róg

void rule_row1_col_n (life_t a, life_t b); // lewy górny róg

void rule_row_n_col_n (life_t a, life_t b); //lewy dolny róg

void rule_row1 (life_t a, life_t b, int x, int y); // pierwszy wiersz

void rule_row_n (life_t a, life_t b, int x, int y); // ostatni wiersz

void rule_col1 (life_t a, life_t b, int x, int y); // pierwsza kolumna

void rule_col_n (life_t a, life_t b, int x, int y); // ostatnia kolumna

void rule_mid (life_t a, life_t b, int x, int y); // środek


#endif
