#include "option_menu.hpp"
#include "stdafx.h"
#include <Windows.h>
#include <string>
#include <iostream>
#include <conio.h>
#include "draw.hpp"

void option_menu::set_draw_handle(draw  *name) {
	 console = name;
}

void option_menu::run() {
	char ch;
	//bool run = true;
	do {
		option_menu::show();
		ch = _getch();
		
	} while (option_menu::scroll(ch));
}

void option_menu::show() {
	using namespace std;
	SetConsoleTextAttribute(hconsole, 15);
	string strings[] = { "Wysokosc mapy ","Szerokosc mapy ","wstecz" };
	for (int i = 0; i < options; ++i) {
		cout << strings[i];
		switch (i) {
		case 0:
			cout << console->get_h();
			break;
		case 1:
			cout << console->get_w();
		}
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
		case 0: {
			std::cout << "podaj nowa wysokosc mapy: ";
				int i;
				std::cin >> i;
				console->set_h(i);
				break;
		}
		case 1: {
			std::cout << "podaj nowa szerokosc mapy: ";
			int i;
			std::cin >> i;
			console->set_w(i);
			break; }
		case 2:
			return false;
			break;
		}
	system("cls");
	return true;
}