#pragma once
#include "stdafx.h"
#include <Windows.h>
#include <string.h>
#include <iostream>

class menu {
public:
	void scroll(char);
private:
	std::string opcje[2] = { "Generuj mape",
							"Podaj parametry" };

	uint8_t position;
};