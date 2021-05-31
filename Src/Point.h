
#ifndef _POINT_H_
#define _POINT_H_

#include <iostream>

using namespace std;

class Point
{
public:
	int x = 0;
	int y = 0;
	Point() {};
	Point(int X, int Y)
	{
		this->x = X;
		this->y = Y;
	}
	~Point() {}
	;
};

#endif // !_POINT_H_


