#include<iostream>
#include<string>

using namespace std;

string arr[3][3] = {{"11", "12", "13"},{"21", "22", "23"},{"31", "32", "33"}};

void board();
int checkWin();
void Input(string,string);

string turn = "X";
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
        system("exit");
    }
    
    //Enter Player Name
    cout<<"\nEnter Player 1 Name: ";cin>>player1Name;
	cout<<"Enter Player 2 Name: ";cin>>player2Name;
	
	while(checkWin() == -1){
		board();
		Input(player1Name,player2Name);
		checkWin();
		board();
	}
	
	
	
    return 0;
}

void Input(string player1Name, string player2Name){
	if (turn == "X"){
		cout<<"\nYour Turn "<<player1Name<<" - X: ";
	}
	else cout<<"\nYour Turn "<<player2Name<<" - 0: ";
	cin>>choose;
	row = choose/10;
	col = choose%10;
		
	if(turn == "X" && arr[row][col] != "X" && arr[row][col] != "0"){
		arr[row][col] == "X";
		turn = "0";
	}else if (turn == "0" && arr[row][col] != "0" && arr[row][col] != "0"){
		arr[row][col] == "0";
		turn = "0";
	}else cout<<"Can't tick here \nPlease tick again";
	Input(player1Name,player2Name);
	}
//Draw Board
void board(){
	cout << "\n\n TIC TAC TOE \n\n";
	cout << "      |      |     " << endl;
	cout << "  " << arr[0][0]<< "  |  " << arr[0][1] << "  |  " << arr[0][2] << endl;
	cout << "______|______|______" << endl;
    cout << "      |      |     " << endl;
    cout << "  " << arr[1][0] << "  |  " << arr[1][1] << "  |  " << arr[1][2] << endl;
    cout << "______|______|______" << endl;
    cout << "      |      |     " << endl;
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
