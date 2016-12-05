#pragma once
#ifndef draw_hpp__
#define draw_hpp__
#include "stdafx.h"
#include <Windows.h>
#include <stdint.h>

class draw {
public:
	void set_parameters(uint8_t w, uint8_t h);
	void draw_map(HANDLE hconsole, int info[]);
private:
	uint8_t Width;
	uint8_t Height;
	void draw_grass1(HANDLE hconsole);

	void draw_grass2(HANDLE hconsole);

	void draw_ground(HANDLE hconsole);

};
#endif