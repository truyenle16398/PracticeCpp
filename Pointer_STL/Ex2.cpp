#include <iostream>

using namespace std;

int main(){
	int a[4] = {1, 2, 3, 4};
	int *p = a;
	int *p2 = new int;
	delete p;
//	delete a; mang a ko phai la con tro nên ko tro toi vung HEAP nen ko the xoa lien ket tu a(STACK) toi HEAP dc. I think so =)) hihi
	delete p2;
	
	return 0;
}
