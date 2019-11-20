#include<iostream>

using namespace std;

char arr[3][3] = {{'1', '2', '3'},{'4', '5', '6'},{'7', '8', '9'}};
void board();

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
    string player1Name,player2Name;
    cout<<"Enter Player 1 Name: ";cin>>player1Name;
	cout<<"Enter Player 2 Name: ";cin>>player2Name;
	board();
    return 0;
}
void board(){
	cout << "\n\n TIC TAC TOE \n\n";
	cout << "     |     |     " << endl;
	cout << "  " << arr[0][0] << "  |  " << arr[0][1] << "  |  " << arr[0][2] << endl;
	cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << arr[1][0] << "  |  " << arr[1][1] << "  |  " << arr[1][2] << endl;
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << arr[2][0] << "  |  " << arr[2][1] << "  |  " << arr[2][2] << endl;
}
