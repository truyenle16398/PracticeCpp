#include<iostream>
#include<string>

using namespace std;

struct Student
{
	int id;
	string name;
	float score;
};


void Input(){
	Student student;
	cout<<"Enter ID student: "; cin>>student.id;
	cout<<"Enter Fullname student: ";cin>>student.name;
	
	do{
		cout<<"Enter score: ";
		cin>>student.score;
		if(student.score < 0 || student.score > 10){
			cout<<"Invalid score. \nEnter again.\n";
		}
	}while (student.score < 0 || student.score > 10);
	
}



void DrawMenu(){
	//draw menu
	cout<<"------------------MENU------------------"<<endl;
	cout<<"1. Input"<<endl;
	cout<<"2. Display"<<endl;
	cout<<"3. Save to file"<<endl;
	cout<<"4. Load from file"<<endl;
	cout<<"0. Exit"<<endl;
	cout<<"----------------------------------------"<<endl;
	
	//input choose
	int choose;
	cout<<"Choose: ";cin>>choose;
	
	switch(choose){
		case 1: Input();
//		case 2: Display();
//		case 3: SaveToFile();
//		case 4: LoadFromFile();
		case 5: exit(0);
	}
}

int main(){
	DrawMenu();
	return 0;
}
