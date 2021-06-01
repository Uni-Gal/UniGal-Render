#include "Node.h"

Node::Node()
{
}

Node::Node(int argv_a, int argv_b, int argv_c, int argv_d, int Shape)
{
	//一个重载当两个用，我他妈真是天（sha）才（bi）
	if (Shape == NODE_SHAPE_RECT)//For Rect
	{
		//Trans argument
		int x = argv_a;
		int y = argv_b;
		int w = argv_c;
		int h = argv_d;

		//Node::Node(int x, int y, int w, int h)
		this->Shape = NODE_SHAPE_RECT;
		//VITAL
		this->leftupx = x;
		this->leftupy = y;
		this->width = w;
		this->higth = h;
		//OPTIONAL
		this->radiusx = width / 2;
		this->radiusy = higth / 2;
		this->centerx = this->leftupx + this->radiusx;
		this->centery = this->leftupy + this->radiusy;
		//提供一种基于点对的写法，目前Node中的关键点暂不使用Point对象表示，只在箭头用，但不排除未来可能。
		/*
		this->Shape = NODE_SHAPE_RECT;
		//VITAL
		this->Leftup.x = x;
		this->Leftup.y = y;
		this->width = w;
		this->higth = h;
		//OPTIONAL
		this->radiusx = width / 2;
		this->radiusy = higth / 2;
		this->Center.x = this->Leftup.x + this->radiusx;
		this->Center.y = this->Leftup.y + this->radiusy;
		*/
	}
	else if (Shape == NODE_SHAPE_RECT)//For ellipse
	{
		//Trans argument
		int cx = argv_a;
		int cy = argv_b;
		int rx = argv_c;
		int ry = argv_d;

		//Node::Node(int cx, int cy, int rx, int ry)
		this->Shape = NODE_SHAPE_ELLIPSE;
		//VITAL
		this->centerx = cx;
		this->centery = cy;
		this->radiusx = rx;
		this->radiusy = ry;
		//OPTIONAL
		this->width = radiusx * 2;
		this->higth = radiusy * 2;
		this->leftupx = centerx - radiusx;
		this->leftupy = centery - radiusy;
	}
	else
	{
		exit(0);
	}
}

Node::~Node()
{
}

void Node::Draw()
{
	//输出SVG
	//但是一般不应直接调用对象来绘制，建议只使用对象来获取指定的参数填充进主函数的fstream流中，由流来完成。
	//但是如果考虑到每个节点的固定格式，其实可以调用Draw，但是为了应对各种情况，最好多提供几个可选参数。
}