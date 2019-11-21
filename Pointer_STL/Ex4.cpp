#include<iostream>

using namespace std;

int main(){
	int iVar = 10;
	int *p1 = &iVar;
	int **p2 = &p1;
	return 0;
}

//*p1 = gia tri cua iVar = 10
//*p2 = 0x100. Vi p2 tro toi p1 nen *p2 = gia tri cua p1. Ma gia tri cua p1 = dia chi cua iVar.
//**p2 = 10. **p2 tro toi gia tri cua vung nho ma p1 dang tro toi. =))
//Code nay e chua run.
