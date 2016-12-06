// arena.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <Windows.h>
#include <iostream>
#include "draw.hpp"
#include <random>
#include "menu.hpp"
#include <string>
#include "player.hpp"


int main()
{
	using namespace std;
	menu *window = new menu;
	HANDLE hConsole = window->initialize();
	
//********* koniec deklaracji sta³ych *************
	window->run();
    return 0;
}
