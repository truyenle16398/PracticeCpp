#include<iostream>

using namespace std;

int main(){
	 cout << "Welcome To Tic-tac-toe game! Play with your way! \nIf you find any problem, please contact john.nguyen@gameloft.com";
    cout << "SELECT YOUR MODE (1 - PLAY GAME | 2 - OTHER TO EXIT GAME)\n";
    int h;
    char >> h;
    if (h != '1')
    {
		cout << "EXIT GAME";
        system("exit");
    }
    return 0;
}
