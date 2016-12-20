#include "draw.hpp"
#include "stdafx.h"
#include <iostream>
#include <Windows.h>
#include <random>
#include <conio.h>
using namespace std;


	void draw::draw_map(HANDLE hconsole) {
		enum symbol { trawa1, trawa2, gleba };

		for (int h = 0; h < Height; ++h) {
			for (int w = 0; w < Width; ++w) {
				switch (map[w + h*Height]) {
				case 0:
					draw_grass1(hconsole);
					break;
				case 1:
					draw_grass2(hconsole);
					break;
				case 2:
					draw_ground(hconsole);
					break;
				}
			}
			cout << endl;
		}
		cin.clear();
		_getch();
		_getch();		//delay
	}
	void draw::set_parameters(int w, int h) {
		draw::Width = w;
		draw::Height = h;
		
	}

	void draw::set_h(int h) {
		draw::Height = h;
	}

	void draw::set_w(int w) {
		draw::Width = w;
	}

	int draw::get_h() {
		return draw::Height;
	}

	int draw::get_w() {
		return draw::Width;
	}

	void draw::generate() {
		if (generated ==false) map = new int[Width*Height];
		else 
		{
			delete map;
			map = new int[Width*Height];
		}
		for (int h = 0; h < Height; ++h) {
			for (int w = 0; w < Width; ++w) {
				map[w+Height*h] = randint(0, 2);
			}
		}
	}

	int draw::randint(int min, int max) {
		return min + (rand() % (int)(max - min + 1));
	}


	inline void draw::draw_grass1(HANDLE hconsole) {
		SetConsoleTextAttribute(hconsole, 2);
		cout << ".";
	}

	inline void draw::draw_grass2(HANDLE hconsole) {
		SetConsoleTextAttribute(hconsole, 2);
		cout << ",";
	}

	inline void draw::draw_ground(HANDLE hconsole) {
		SetConsoleTextAttribute(hconsole, 6);
		cout << ".";
	}