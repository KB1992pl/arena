#pragma once
#ifndef draw_hpp__
#define draw_hpp__
#include "stdafx.h"
#include <Windows.h>
#include <stdint.h>

class draw {
public:
	void set_parameters(int w, int h);
	void set_w(int w);
	void set_h(int h);
	int get_w();
	int get_h();
	void draw_map(HANDLE hconsole);
	void generate();
private:
	bool generated = false;
	int *map;
	int Width=5;
	int Height=5;
	void draw_grass1(HANDLE hconsole);

	void draw_grass2(HANDLE hconsole);

	void draw_ground(HANDLE hconsole);

	int randint(int min, int max);

};
#endif