#include "obraz.h"
void draw_picture(life_t t, char *picture_name)
{
	allegro_init();
	install_keyboard();
	set_color_depth(16);
//	set_gfx_mode(GFX_AUTODETECT_WINDOWED,800,600,0,0);
//	clear_to_color(screen, makecol(255,255,255));
	BITMAP *obrazek1 = NULL;
	PALETTE pal;
	if (t->rows >= t->cols)
		obrazek1 = create_bitmap(10*t->rows,10*t->rows);
	else
		obrazek1 = create_bitmap(10*t->cols,10*t->cols);
	if( !obrazek1)
	{	
		set_gfx_mode(GFX_TEXT,0,0,0,0);
		allegro_message("bla\n");
		allegro_exit();
	}
	clear_to_color(obrazek1, makecol(255,255,255));
	//funkcja do rysowania kwadracika: skąd,gdzie, początek układu, początek figury,szerokość, długość	
	int i,j;
	for( i = 0; i < t->rows; i++)
	{
		for (j = 0; j < t->cols; j++)
			if(t->tab[i][j] == 1)
			{
				rectfill( obrazek1, 10*j,10*i,10*j+10,10*i+10,0);
			}	
	}
	save_bitmap(picture_name , obrazek1 , pal);
	destroy_bitmap(obrazek1);
	allegro_exit();
}
