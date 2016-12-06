#pragma once
#include "stdafx.h"
#include <Windows.h>
#include <string>
#include <iostream>

using std::string;
class menu {
private:
	//TODO: Use vector containter class instead of C style array
	std::string menu_strings[5] = {
		"Nowa gra",
		"Generuj mape",
		"Opcje",
		"Autorzy",
		"Wyjdz"
	};

public:
	HANDLE initialize();
	void scroll(char);
	void show();

private:

	const static int menu_width = 100, menu_height = 100;

	const static int options = 5;
	const string strings[options];

	int position = 0;
};