#pragma once

int StayInLimit(int x, int max, int min)
{
	if (x <= min)
		x = min;
	if (x >= max)
		x = max;
	return x;
}
