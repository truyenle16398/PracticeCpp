#include <iostream>

using namespace std;

int main(){
	int a[4] = {1, 2, 3, 4};
	int *p = a;
	int *p2 = new int;
//	delete p; p chua duoc cap phat bo nho nen ko the dung delete
//	delete a; ko the dung delete voi mang a
	delete p2;
	
	return 0;
}
