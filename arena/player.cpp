#include "player.hpp"
#include <vector>

void Player::SetHP(int16_t hp, part_id id)
{
	//TODO: Check if setting hp is proper
	Player::part_health[id].hp = hp;
}

void Player::SetStatus(Player::part_status status, part_id id)
{
	//TODO: Check if setting status is proper
	Player::part_health[id].status = status;
}

void Player::SetSkillLevel(int16_t level, skills_id id)
{
	//TODO: Check if setting level is propper
	Player::player_skills[id].level = level;
}

void Player::SetAttributeLevel(int16_t level, attributes_id id)
{
	//TODO: Check if setting level is proper
	Player::player_attributes[id].level = level;
}
