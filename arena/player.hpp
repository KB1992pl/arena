#pragma once
#include "stdafx.h"
#include <string>
#include <vector>

class Player {
public:
	struct body_part_health {
		std::string name;
		int16_t hp;
		int16_t status;  //, st³uczona, z³amana, rozciêta itd.

	};

	enum part_status
	{
		BRUISED,
		SCARRED,
		BROKEN
	};

	enum part_id
	{
		HEAD,
		UPPER_BODY,
		LOWER_BODY,
		RIGHT_HAND,
		RIGHT_ARM,
		LEFT_HAND,
		LEFT_ARM,
		RIGHT_UPPER_LEG,
		RIGHT_LOWER_LEG,
		RIGHT_FOOT,
		LEFT_UPPER_LEG,
		LEFT_LOWER_LEG,
		LEFT_FOOT
	};
private:
	void Move(char, int[]) {};
	void Attack(char, int[]) {};
	void PickUp(char, int[]) {};

	std::vector<body_part_health> part_health;
public:
	Player::Player() 
	{
		part_health.push_back({ "head", NULL, NULL });
		part_health.push_back({ "upper_body", NULL, NULL });
		part_health.push_back({ "lower_body", NULL, NULL });
		part_health.push_back({ "right_hand", NULL, NULL });
		part_health.push_back({ "right_arm", NULL, NULL });
		part_health.push_back({ "left_hand", NULL, NULL });
		part_health.push_back({ "left_arm", NULL, NULL });
		part_health.push_back({ "right_upper_leg", NULL, NULL });
		part_health.push_back({ "right_lower_leg", NULL, NULL });
		part_health.push_back({ "right_foot", NULL, NULL });
		part_health.push_back({ "left_upper_leg", NULL, NULL });
		part_health.push_back({ "left_lower_leg", NULL, NULL });
		part_health.push_back({ "left_foot", NULL, NULL });
	}
	~Player() {}

	void SetHP(int16_t hp, part_id id);
	void SetStatus(part_status status, part_id id);

	int16_t GetHP(part_id id) { return part_health[id].hp;  };
	int16_t GetBodypartStatus(part_id id) { return part_health[id].status; };
	std::string GetBodyPartName(part_id id) { return part_health[id].name; };

};