#include "menu.hpp"
#include "stdafx.h"
#include <Windows.h>
#include <string>
#include <iostream>
#include <conio.h>
using std::string;
const static int options = 2;
uint8_t position = 0;

HANDLE menu::initialize(){
	HANDLE hconsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTitleA("Arena V 0.0.000");
	return hconsole;
}

void menu::show() {
	using namespace std;
	string strings[] = { "Generuj mape","Podaj parametry" };
	for (int i = 0; i < options; ++i) {
		cout << strings[i];
		if (i == position) cout << " <--";
		cout << endl;
	}
	char ch = _getch();
	scroll(ch);


}

void menu::scroll(char ch) {
	if (ch == 's') ++position;
	if (ch == 'w') --position;
	system("cls");
	show();

}