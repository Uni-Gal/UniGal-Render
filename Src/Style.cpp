#include "Style.h"

Style::Style()
{
}

void Style::setBackgroundStyle(bool exist, Color fillcolor, float opacity)
{
	this->background_exist = exist;
	this->background_fillcolor = fillcolor;
	this->background_opacity = opacity;
}

Style::~Style()
{
}