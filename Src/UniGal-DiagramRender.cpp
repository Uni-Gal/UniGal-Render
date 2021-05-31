#pragma once

#ifndef _FRONTEND_
#define _FRONTEND_
#include "Frontend.cpp"
#endif

#ifndef _BACKEND_
#define _BACKEND_
#include "Backend.cpp"
#endif

#ifndef _HEAD_
#define _HEAD_
#include "Head.hpp"
#endif

using namespace std;

int main(int argc, char *argv[])
{
	//main_Backend();//节省前期调式阶段编译时间
	main_Frontend();
	return 0;
}
