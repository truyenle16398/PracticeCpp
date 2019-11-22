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

void DrawMenu();
void Input();
void Display(vector<Student*>);
vector<Student*> listStudent;


int main() {
	Student* student = new Student;
	int choose;
	DrawMenu();

	do {
		cout << "Choose: "; cin >> choose;
		switch (choose) {
		case 1: {
			Input();
			break;
		}
		case 2: {
			Display(listStudent);
			break;
		}
		case 0: {
			cout << "Exit.....\n";
			exit(0);
			break;
		}
		}
	} while (choose != 0);

	return 0;
}

void Input() {
	int n;
	cout << "Enter number of student: "; cin >> n;

	if (n > 0) {
		for (int i = 0; i < n; i++) {
			Student *student = new Student;
			cout << "\n---Student " << i + 1 << "--- " << endl << endl;

			cout << "Enter ID student: "; cin >> student->id;

			cout << "Enter Fullname student: "; cin >> student->name;

			do
			{
				cout << "Enter score: "; cin >> student->score;
				if (student->score < 0 || student->score > 10) {
					cout << "Invalid score. \nEnter again.\n";
				}
			} while (student->score < 0 || student->score > 10);
			listStudent.push_back(student);
		}
	}
	else {
		cout << "Invalid number";
		Input();
	}

}

void Display(vector<Student*> list) {

	cout << "ID\tFULL NAME\tSCORE" << endl;
	cout << "___________________________________________\n";

	for (size_t i = 0; i < list.size(); i++) {
		cout << list[i]->id << "\t" << list[i]->name << "\t" << list[i]->score << endl;

	}
}

void DrawMenu() {
	cout << "------------------MENU------------------" << endl;
	cout << "1. Input" << endl;
	cout << "2. Display" << endl;
	cout << "3. Save to file" << endl;
	cout << "4. Load from file" << endl;
	cout << "0. Exit" << endl;
	cout << "----------------------------------------" << endl;
}




