#include "menu.hpp"
#include "stdafx.h"
#include <Windows.h>
#include <string>
#include <iostream>
#include <conio.h>
#include "limit.hpp"

using std::string;

HANDLE menu::initialize(){
	HANDLE hconsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTitleA("Arena V 0.0.000");
	return hconsole;
}

void menu::show() {
	using namespace std;
	for (int i = 0; i < options; ++i) {
		cout << menu_strings[i];
		if (i == menu::position) cout << " <--";
		cout << endl;
	}
	char ch = _getch();
	scroll(ch);


}

void menu::scroll(char ch) {
	switch (ch) {
	case 's':
		++menu::position;
		break;
	case 'w':
		--menu::position;
		break;
	default:
		break;
	}

	position = StayInLimit(menu::position, options - 1, 0);

	system("cls");
	show();

}