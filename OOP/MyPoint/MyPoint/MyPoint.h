#pragma once
#include<iostream>
#include<math.h>
using namespace std;

class MyPoint
{
private:
	int mPosX;
	int mPosY;
public:
	MyPoint();
	~MyPoint();
	MyPoint(int X, int Y);
	void Display();
	void SetX(int X);
	void SetY(int Y);
	int GetX();
	int GetY();
	double Distance(MyPoint p);
};

