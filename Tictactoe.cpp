#include<iostream>
#include<string>

using namespace std;

char arr[3][3] = {{'1', '2', '3'},{'4', '5', '6'},{'7', '8', '9'}};

void board();
int checkWin();

char turn = 'X';
int row,col,choose;
string player1Name,player2Name;


int main(){
	char h;
	//Welcome Message
	cout << "Welcome To Tic-tac-toe game! Play with your way! \nIf you find any problem, please contact john.nguyen@gameloft.com \n\n";
    cout << "SELECT YOUR MODE (1 - PLAY GAME | 2 - OTHER TO EXIT GAME): ";
    
	//Choose Mode
    cin >> h;
    if (h != '1')
    {
		cout << "--EXIT GAME--";
        exit(0);
    }
    
    //Enter Player Name
    cout<<"\nEnter Player 1 Name: ";cin>>player1Name;
	cout<<"Enter Player 2 Name: ";cin>>player2Name;
	board();
	
	
	do{
	if (turn == 'X'){
		cout<<"\nYour Turn "<<player1Name<<" - X: ";
	}
	else if(turn == 'O'){
		cout<<"\nYour Turn "<<player2Name<<" - O: ";
	} 
	cin>>choose;
	
	row = choose/10 - 1;
	col = choose%10 - 1;

	if(turn == 'X' && arr[row][col] != 'X' && arr[row][col] != 'O'){
		turn = 'O';
		arr[row][col] = 'X';
	}else if (turn == 'O'&& arr[row][col] != 'X' && arr[row][col] != 'O'){
		turn = 'X';
		arr[row][col] = 'O';
	}else
	cout<<"Car't tick here!\nTick again plzz.";
	board();
	}
	while (checkWin() == -1);
	
	
    return 0;
}


//Draw Board
void board(){
	cout << "\n\n TIC TAC TOE \n\n";
	cout << "     |     |    " << endl;
	cout << "  " << arr[0][0]<< "  |  " << arr[0][1] << "  |  " << arr[0][2] << endl;
	cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << arr[1][0] << "  |  " << arr[1][1] << "  |  " << arr[1][2] << endl;
    cout << "_____|_____|______" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << arr[2][0] << "  |  " << arr[2][1] << "  |  " << arr[2][2] << endl;
}

int checkWin(){
	if(arr[0][0] == arr[0][1] && arr[0][1] == arr[0][2]){
		return 1;
	} else if (arr[1][0] == arr[1][1] && arr[1][1] == arr[1][2]){
		return 1;
	} else if (arr[2][0] == arr[2][1] && arr[2][1] == arr[2][2]){
		return 1;
	} else if (arr[0][0] == arr[1][0] && arr[1][0] == arr[2][0]){
		return 1;
	} else if (arr[0][1] == arr[1][1] && arr[1][1] == arr[2][1]){
		return 1;
	} else if (arr[0][2] == arr[1][2] && arr[1][2] == arr[2][2]){
		return 1;
	} else if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2]){
		return 1;
	} else if (arr[2][0] == arr[1][1] && arr[1][1] == arr[0][2]){
		return 1;
	}
	else return -1;
}
