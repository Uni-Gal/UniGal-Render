#ifndef _NODE_H_
#define _NODE_H_

//#include "Head.hpp"

//#include "Nodelist.h"

#include <stdlib.h>
#include <string>
#include <vector>
using namespace std;

#define NODE_SHAPE_RECT 11 //矩形
#define NODE_SHAPE_ELLIPSE 12 //椭圆
#define NODE_SHAPE_PARALLELOGRAM 13 //平行四边形
#define NODE_SHAPE_DIAMOND 14 //菱形

#define NODE_TYPE_LABEL 21
#define NODE_TYPE_START 22
#define NODE_TYPE_END 23
#define NODE_TYPE_ACTION 24
#define NODE_TYPE_SWITCH 25

#define NODE_IDENTIFICATION_NAME 31
#define NODE_IDENTIFICATION_UUID 32

class Node
{
public:
	//NODE INFO
	int Shape = NODE_SHAPE_RECT;
	int type = NODE_TYPE_LABEL;
	string Comment;
	//Nodelist SourceList;
	//Nodelist NextList;
	vector<Node> SourceList;
	vector<Node> NextList;
	string Identification;
	int IdentificationType = NODE_IDENTIFICATION_NAME;
	int isInLoop = 0;
	//SVG INFO
	////NUMRIC
	int width = 0;
	int higth = 0;
	int radiusx = 0;
	int radiusy = 0;
	////POINT
	int leftupx = 0;
	int leftupy = 0;
	/*
	Point Leftup;
	*/
	int centerx = 0;
	int centery = 0;
	/*
	Point Center;
	*/
	//FUNCTION
	Node();
	Node(int argv_a, int argv_b, int argv_c, int argv_d, int Shape);//For Rect & ellipse
	~Node();
	void Draw();
};



#endif // !_NODE_H_