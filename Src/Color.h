#ifndef _COLOR_H_
#define _COLOR_H_

class Color
{
public:
	int R = 0;
	int G = 83;
	int B = 255;
	//The Visual Identification System Color of BUCTSNC
	int A = 239;
	//Allow rgba PNG
	Color();
	Color(int x, int y, int z);
	Color(int x, int y, int z, int a);
	~Color();
};

#endif // !_COLOR_H_
