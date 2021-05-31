#include "Color.h"

Color::Color()
{
}

Color::Color(int x, int y, int z)
{
	this->R = x;
	this->G = y;
	this->B = z;
}

Color::Color(int x, int y, int z, int a)
{
	this->R = x;
	this->G = y;
	this->B = z;
	this->A = a;
}

Color::~Color()
{
}