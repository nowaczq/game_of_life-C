#include <stdlib.h>
#include <stdio.h>
#include <getopt.h>

#include "magazyn.h"
#include "odczyt.h"
#include "algorytm.h"


int main(int argc, char ** argv)
{
	int opt;
	char *out = NULL; 
	char *in = NULL;
	char *inp = NULL;
	int amount = 0;
	int freq = 0;
	char *format;
	char *progname = argv[0];
	
	while ((opt = getopt(argc,argv,"r:k:m:n:f:o:")) != -1)
	{
		switch(opt)
		{
			case 'r': in = optarg; break;
			case 'k': out = optarg; break;
			case 'm': inp = optarg; break;
			case 'n': amount = atoi(optarg); break;
			case 'f': freq = atoi(optarg); break;
			case 'o': format = optarg; break;
			default : printf("Bad parameters\n"); exit( EXIT_FAILURE );
		}
	}
	if (optind < argc)
	{
		printf("Bad parameters\n");
		printf("Usage of app: ./game_life -r input_file_name -k output_file_name -m output_image_name -n amout_of_iterations -f frequency_of_drawing_images -o .image_format\n");
		exit( EXIT_FAILURE );
	}

	if(in == NULL)
	{
		printf("No input file name\n");
		printf("Usage of app: ./game_life -r input_file_name -k output_file_name -m output_image_name -n amout_of_iterations -f frequency_of_drawing_images -o .image_format\n");
		exit( EXIT_FAILURE );
	}

	if(inp == NULL)
	{
		printf("No image file name\n");
		printf("Usage of app: ./game_life -r input_file_name -k output_file_name -m output_image_name -n amout_of_iterations -f frequency_of_drawing_images -o .image_format\n");
		exit( EXIT_FAILURE );
	}
	
	if (format == NULL)
	{
		printf("No format name\n");
		printf("Usage of app: ./game_life -r input_file_name -k output_file_name -m output_image_name -n amout_of_iterations -f frequency_of_drawing_images -o .image_format\n");
		exit( EXIT_FAILURE);
	}
	
	FILE *a = fopen(in,"r");
	life_t main = malloc(sizeof*main);
	life_t pom = malloc(sizeof*pom);
	read_var(a,main);
	pom->rows = main->rows;
	pom->cols = main->cols;
	alloc_matrix(main);
	alloc_matrix(pom);
	read_matrix(a,main);
	int i,j,k;
	char name[100];
	int n =freq;
	//FILE *b = fopen(out,"w");
	char text[100];	
	for (i =0; i <= amount ; i++)
	{
		strcpy(name,inp);
		strcpy(text,out);
		if ( i == freq)
		{
			char number[10];
			sprintf(number,"%d",i);
			strcat(name,number);
			strcat(name,format);
			strcat(text,number);
			freq += n;
		}
		game_life (main,pom,name);
		for (j = 0; j < main->rows; j++)
		{
			for ( k = 0 ; k< main->cols; k++)
				main->tab[j][k] = pom->tab[j][k];
		}
		save_matrix(text,main);
	}	
	return 0;
	
}
