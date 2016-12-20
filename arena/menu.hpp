#pragma once
#include "stdafx.h"
#include <Windows.h>
#include <string>
#include <iostream>

using std::string;
class menu {
public:
	HANDLE initialize();
	void run();


private:
	bool scroll(char ch);
	void show();
	void goto_option();
	const static int options=3;
	const string strings[options];
	draw *_console;
	uint8_t position=0;
	HANDLE hconsole;
};