#include<iostream>
#include<string>
#include<vector>

using namespace std;

struct Student
{
	int id;
	string name;
	float score;
};
vector<Student> listStudent;

void DrawMenu();
void Input(Student);

int main(){
	DrawMenu();
	for(int i = 0; i < 5; i++){
      cout << "Gia tri cua vec [" << i << "] = " << listStudent[i] << endl;
   }
	return 0;
}


void DrawMenu(){
	Student student;
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
	switch (choose){
		case 1: Input(student);
	}
}

void Input(Student student){
	cout<<"Enter ID student: "; cin>>student.id;
	cout<<"Enter Fullname student: ";cin>>student.name;
	
	do{
		cout<<"Enter score: ";
		cin>>student.score;
		if(student.score < 0 || student.score > 10){
			cout<<"Invalid score. \nEnter again.\n";
		}
	}while (student.score < 0 || student.score > 10);
	listStudent.push_back(student); 
}
