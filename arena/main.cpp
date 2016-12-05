// arena.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <Windows.h>
#include <iostream>
#include "draw.hpp"
#include <random>


int randint(int min, int max);


int main()
{
	const uint8_t Width = 40;
	const uint8_t Height = 20;
	using namespace std;
	int map[Width][Height];
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

//********* koniec deklaracji sta³ych *************
	draw *console1 = new draw;
	console1->set_parameters(Width, Height);

	for (int w = 0; w < Width; ++w) {
		for (int h = 0; h < Height; ++h) {
			map[w][h] = randint(0, 2);
		}
	}
	console1->draw_map(hConsole, *map);
	system("cls");
	delete console1;
	cin.get();
    return 0;
}



int randint(int min, int max) {
	return min + (rand() % (int)(max - min + 1));
}