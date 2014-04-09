game_life: main.o odczyt.o algorytm.o zasady.o obraz.o magazyn.o
	$(CC) -o game_life main.o odczyt.o algorytm.o zasady.o obraz.o magazyn.o -lalleg





.PHONY: clean
clean:
	-rm *.o game_life

