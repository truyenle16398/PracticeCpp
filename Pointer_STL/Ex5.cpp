#include<iostream>

using namespace std;

int main(){
	short a[] = {5, 10, 15, 20, 25, 30}
	short *p = a;
	
//	a  = dia chi cua 5. Vi a la con tro, tro toi dia chi cua phan tu dau tien. 
//	&a = dia chi cua a = 0x00affb84. Theo de bai
//	*a = 5.Vi a la con tro, tro toi dia chi cua phan tu dau tien.
//	p  = dia chi cua bien a = 0x00affb84. vi con tro p tro toi mang a
//	&p = dia chi cua &p = 0x00affb78
//	*p = 5. *p bang gia tri cua a. ma a = 5
//	p + 1 = con tro p co bo nho = 4byte. p+1=>0x00affb84 + 4byte = 0x00affb88
//	(*p) + 1 = 6. Vi *p = 5
//	*(p+1) = 10. 
//	&p + 1 = 0x00affb78 + 4byte. +1 co nghia la + sizeof(p)
//	&a + 1 = 0x00affb84 + 12byte
//	a++; a = 
//	p++; p = 0x00affb88. p = p + 1
	
	return 0;
}
