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
