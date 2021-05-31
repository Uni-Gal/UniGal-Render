#ifndef _FRONTEND_H_
#define _FRONTEND_H_

#include "Head.hpp"

using namespace std;

extern fstream IO_FILE;

string spaceLevel(int num);

class viewBox
{
public:
	//VITAL
	int L = 0;
	int U = 0;
	int R = 320;
	int D = 650;
	//FUNCTION
	void setViewBox(int L, int U, int R, int D)
	{
		this->L = L;
		this->U = U;
		this->R = R;
		this->D = D;
	}
};

string argv_background_style_fill_rgb();

int main_Frontend(void);

#endif // !_FRONTEND_H_
