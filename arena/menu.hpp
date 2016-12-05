#pragma once
#include "stdafx.h"
#include <Windows.h>
#include <string>
#include <iostream>

using std::string;
class menu {
public:
	HANDLE initialize();
	void scroll(char);
	void show();

private:
	const static int options=2;
	const string strings[options];

	uint8_t position=0;
};