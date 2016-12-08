#include "option_menu.hpp"
#include "stdafx.h"
#include <Windows.h>
#include <string>
#include <iostream>
#include <conio.h>


void option_menu::run() {
	char ch;
	bool run = true;
	while (run) {
		option_menu::show();
		ch = _getch();
		run = option_menu::scroll(ch);
	}

}

void option_menu::show() {
	using namespace std;
	SetConsoleTextAttribute(hconsole, 15);
	string strings[] = { "Wysokosc mapy","Szerokosc mapy","wstecz" };
	for (int i = 0; i < options; ++i) {
		cout << strings[i];
		if (i == position) cout << " <--";
		cout << endl;
	}

}

bool option_menu::scroll(char ch) {
	if (ch == 's')
		if (position<options - 1)++position;
	if (ch == 'w')
		if (position>0)--position;
	if (ch == 'e')
		switch (position) {
		case 0:
			
			break;
		case 1:
			
			break;
		case 2:
			return false;
			break;
		}
	system("cls");
	return true;
}