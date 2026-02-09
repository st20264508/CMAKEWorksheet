#include "colour.h"

colour::colour(float r, float g, float b)
{
	red = r;
	green = g;
	blue = b;
}

void colour::SetRed(float r)
{
	red = r;
}

void colour::SetGreen(float g)
{
	green = g;
}

void colour::SetBlue(float b)
{
	blue = b;
}

float colour::GetRed()
{
	return red;
}

float colour::GetGreen()
{
	return green;
}

float colour::GetBlue()
{
	return blue; 
}
