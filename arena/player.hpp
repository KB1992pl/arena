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
public:
	struct attributes {
		std::string name;
		int16_t level;
	};
public:
	struct skills {
		std::string name;
		int16_t level;
	};
	
	enum attributes_id
	{
		STRENGTH,
		AGILITY,
		NIMBLENESS,
		ENDURANCE,
		VITALITY,
		CONSTITUTION
	};

	enum skills_id
	{
		THROWING,
		MELEE,
		KICKING,
		SWORDFIGHTING,
		AXEFIGHTING,
		BLUNTFIGHTING,
		SHIELDUSING,
		ARMORUSING,
		BLOCK,
		DODGE,
		ATHLETICS
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
	std::vector<attributes> player_attributes;
	std::vector<skills> player_skills;
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
	void SetSkillLevel(int16_t level, skills_id id);
	void SetAttributeLevel(int16_t level, attributes_id id);

	int16_t GetHP(part_id id) { return part_health[id].hp;  };
	int16_t GetBodypartStatus(part_id id) { return part_health[id].status; };
	std::string GetBodyPartName(part_id id) { return part_health[id].name; };

	std::string GetSkillName(skills_id id) { return player_skills[id].name; };
	std::string GetAttributeName(attributes_id id) { return player_attributes[id].name; };

	int16_t GetSkillLevel(skills_id id) { return player_skills[id].level; };
	int16_t GetAttributeLevel(attributes_id id) { return player_attributes[id].level; };

};