#pragma once
#include "stdafx.h"

struct health {
	int8_t hp;
	int8_t status;  //, st³uczona, z³amana, rozciêta itd.

};
class player {
public:
	void move(char, int[]);
	void attack(char, int[]);
	void pick_up(char, int[]);

private:
	health head;
	health upper_body;
	health lower_body;
	health rigth_hand;
	health right_arm;
	health left_hand;
	health left_arm;
	health right_upper_leg;
	health right_lower_leg;
	health right_foot;
	health left_upper_leg;
	health left_lower_leg;
	health left_foot;
};