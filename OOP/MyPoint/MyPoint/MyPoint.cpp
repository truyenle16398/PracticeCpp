// MyPoint.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "MyPoint.h"


int main()
{
	MyPoint* p1 = new MyPoint();
	MyPoint* p2 = new MyPoint();

	p1->SetX(2);
	p1->SetY(3);
	p1->Display();

	p2->SetX(1);
	p2->SetY(3);
	p2->Display();

	cout << p1->Distance(*p2) << endl;


	system("pause");
    return 0;
}



MyPoint::MyPoint()
{
}


MyPoint::~MyPoint()
{
}

MyPoint::MyPoint(int X, int Y)
{
	SetX(X);
	SetY(Y);
}

void MyPoint::Display()
{
	cout << mPosX << endl;
	cout << mPosY << endl;
}

void MyPoint::SetX(int X)
{
	this->mPosX = X;
}

void MyPoint::SetY(int Y)
{
	this->mPosY = Y;
}

int MyPoint::GetX()
{
	return this->mPosX;
}

int MyPoint::GetY()
{
	return this->mPosY;
}

double MyPoint::Distance(MyPoint p)
{
	return sqrt(pow((p.GetX() - this->mPosX), 2) + pow((p.GetY() - this->mPosY), 2));
}
