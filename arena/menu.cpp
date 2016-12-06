#include "menu.hpp"
#include "stdafx.h"
#include <Windows.h>
#include <string>
#include <iostream>
#include <conio.h>
#include "draw.hpp"
using std::string;
const static int options = 3;
uint8_t position = 0;
draw console1;
HANDLE hconsole;

HANDLE menu::initialize(){
	hconsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTitleA("Arena V 0.0.002");
	return hconsole;
}


void menu::run() {
	char ch;
	do {
	menu::show();
	ch = _getch();
	} while (menu::scroll(ch));

}

void menu::show() {
	using namespace std;
	SetConsoleTextAttribute(hconsole, 15);
	string strings[] = { "Generuj mape","Podaj parametry", "Wyjdü z gry" };
	for (int i = 0; i < options; ++i) {
		cout << strings[i];
		if (i == position) cout << " <--";
		cout << endl;
	}
	
}

bool menu::scroll(char ch) {
	if (ch == 's')
		if (position<options-1)++position;
	if (ch == 'w')
		if (position>0)--position;
	if (ch == 'e')
		switch (position) {
		case 0:
			system("cls");
			console1.generate();
			console1.draw_map(hconsole);
			std::cin.get();
			std::cin.clear();
			std::cin.get();
			break;
		case 1:
			menu::goto_option();
			break;
		case 2:
			return false;
			break;
		}
	system("cls");
	return true;
}

void menu::goto_option(){
	option_menu *option = new option_menu;
system("cls");
option->run();
delete option;
}