#include<iostream>
#include<graphics.h>
#include<conio.h>
#include<math.h>
#include"LIne.h"
using namespace std;
const int WIDTH = 1000;
const int HEIGHT = 1000;
using namespace std;

void draw(float x, float y, float angle, float size,int l)
{
	if (l == 0)
	{
		Line l1(x, y, angle - 45, sqrt(2) * size/2);
		pair<float, float> p = Line::get_point(x, y, angle, size);
		Line l2(p.first, p.second, angle - 135, sqrt(2) * size / 2);
	}
	else
	{
		draw(x, y, angle - 45, sqrt(2)*size/2, l - 1);
		pair<float, float> p= Line::get_point(x, y, angle, size);
		draw(p.first, p.second, angle - 135, sqrt(2) * size/2, l - 1);
	}
}

int main()
{
	//坐标轴方向为顺时针
	initgraph(WIDTH, HEIGHT);
	draw(300, 600, 0, 600, 13);
	system("pause");
	return 0;
}