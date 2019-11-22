#include<iostream>

using namespace std;

class MyPoint{
	int mPosX;
	int mPosY;
public:
	MyPoint();
	MyPoint(int x, int y);
	void Display(){
		cout<< "mPosX: " <<mPosX<<endl;
		cout<< "mPosY: " <<mPosY<<endl;
	}
	void SetX(int x);
	int GetX();
	void SetY(int y);
	int GetY();
	double Distance(MyPoint p);
};




int main(){
	
	
	return 0;
}
