#include<iostream>
using namespace std;

typedef int *IntPtrType;//tao kieu du lieu moi

int main(){
	IntPtrType ptr_a, ptr_b, *ptr_c;//tao con tro ptr_a,ptr_b, **ptr_c
	
	ptr_a = new int;//cap phat bo nho cho ptr_a
	*ptr_a = 3;//gan 3 cho o nho ma ptr_a dang tro toi. 
	ptr_b = ptr_a;//gan gia tri cua ptr_a cho ptr_b.
	cout << *ptr_a << " " << *ptr_b << "\n";//=> *gia tri cua ptr_a = gia tri cua ptr_b = 3 vi luc nay 2 con dang quan li chung 1 o nho
	
	ptr_b = new int;//cap phat lai bo nho moi cho ptr_b
	*ptr_b = 9;//gan 9 cho o nho ma ptr_b dang tro toi. gia tri cua ptr_b bay gio la dia chi cua 9
	cout << *ptr_a << " " << *ptr_b << "\n";//gia tri cua ptr_a ko thay doi. van la dia chi cua 3. Con gia tri cua ptr_b da thay doi thanh dia chi cua 9. Nen *ptr_a = 3 va *ptr_b = 9
	
	*ptr_b = *ptr_a;//gan lai gia tri cua ptr_a cho gia tri cua ptr_b. Luc nay gia tri cua ptr_a va ptr_b bang nhau = dia chi cua 3
	cout << *ptr_a << " " << *ptr_b << "\n";//gia tri cua ptr_a nay gio ko thay doi, *ptr_a=3. Gia tri cua ptr_b moi dc thay doi o dong tren, *ptr_b = 3.
	
	delete ptr_a;//giai phong vung nho cho ptr_a. ptr_a ko tro toi dia chi cua 3 nua
	ptr_a = ptr_b;//gan gia tri cua ptr_b cho gia tri cua ptr_a. Luc nay gia tri cua ptr_a va ptr_b bang nhau = dia chi cua 3
	cout << *ptr_a << " " << *ptr_b << "\n";//gia tri cua ptr_a = ptr_b  = dia chi cua => *ptr_a=*ptr_b=3
	
	ptr_c = &ptr_a;//gan dia chi cua ptr_a cho gia tri cua ptr_c. Gia tri cua ptr_c = &ptr_a
	cout << *ptr_c << " " << **ptr_c << "\n";//=> *ptr_c = dia chi cua bien ma con tro ptr_a dang tro toi. = dia chi cua 3 vaf **ptr_c = gia tri cua bien ma ptr_a dang tro. =3
	
	delete ptr_a;//giai phong vung nho cho ptr_a. ptr_a ko tro toi dia chi cua 3 nwax
	ptr_a = NULL;//gan dia chi cua vung nho NULL cho gia tri cua a.
	system("pause");//dung chuong trinh de xem ket qua
	return 0;
}
