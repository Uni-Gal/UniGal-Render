#pragma once


#ifndef _HEAD_
#define _HEAD_
#include "Head.hpp"
#endif

using namespace std;



class Arrow
{
public:
	Arrow();
	~Arrow();
	Line Body;
	Line Head;
};

Arrow::Arrow()
{
}

Arrow::~Arrow()
{
}