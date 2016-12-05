// arena.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <Windows.h>
#include <iostream>
#include "draw.hpp"
#include <random>
#include "menu.hpp"
#include <string>


int main()
{
	const uint8_t Width = 40;
	const uint8_t Height = 20;
	using namespace std;
	menu *window = new menu;
	HANDLE hConsole = window->initialize();

	
//********* koniec deklaracji sta³ych *************
	draw *console1 = new draw;
	window->show();
	//console1->set_parameters(Width, Height);
	//console1->generate();
	//console1->draw_map(hConsole);
	delete console1;
	cin.get();
    return 0;
}



