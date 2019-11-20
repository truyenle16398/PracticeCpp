#include<iostream>
#include<string>

using namespace std;

string arr[][3] = {"11", "12", "13","21", "22", "23","31", "32", "33"};

void board();
int checkWin();

string turn = " X";
int row,col,choose;
string player1Name,player2Name;
bool draw= false;

int main(){
	char h;
	int i;
	//Welcome Message
	cout << "Welcome To Tic-tac-toe game! Play with your way! \nIf you find any problem, please contact john.nguyen@gameloft.com \n\n";
    cout << "SELECT YOUR MODE (1 - PLAY GAME | 2 - OTHER TO EXIT GAME): ";
    
	//Choose Mode
    cin >> h;
    if (h != '1')
    {
		cout << "--EXIT GAME--";
        return 0;
    }
    
    //Enter Player Name
    cout<<"\nEnter Player 1 Name: ";cin>>player1Name;
	cout<<"Enter Player 2 Name: ";cin>>player2Name;
	board();
	
	
	do{
	if (turn == " X"){
		cout<<"\nYour Turn "<<player1Name<<" - X: ";
	}
	else if(turn == " O"){
		cout<<"\nYour Turn "<<player2Name<<" - O: ";
	} 
	cin>>choose;
	if(choose > 10 && choose < 99 && choose%10<4){
	row = choose/10 - 1;
	col = choose%10 - 1;
	if(turn == " X" && arr[row][col] != " X" && arr[row][col] != " O"){
		turn = " O";
		arr[row][col] = " X";
	}else if (turn == " O"&& arr[row][col] != " X" && arr[row][col] != " O"){
		turn = " X";
		arr[row][col] = " O";
	}else
	{
		cout<<"Car't tick here!\nTick again plzz.\n";
		system("pause");
	}
}	else cout<<"Invalid choose.";
	system("cls");
	board();
	i = checkWin();
	}
	while (checkWin() == -1);
		
	if( draw == true){
		cout<<"\nDRAW";
	}else{
		if(turn == " O") cout<<player1Name<<" WIN.";
		
		else cout<<player2Name<<" WIN.";
	}
		
			
    return 0;
}


//Draw Board
void board(){
	cout << "\n\n TIC TAC TOE \n\n";
	cout << "      |      |     " << endl;
	cout << "  " << arr[0][0]<< "  |  " << arr[0][1] << "  |  " << arr[0][2] << endl;
	cout << "______|______|______" << endl;
    cout << "      |      |      " << endl;
    cout << "  " << arr[1][0] << "  |  " << arr[1][1] << "  |  " << arr[1][2] << endl;
    cout << "______|______|_______" << endl;
    cout << "      |      |      " << endl;
    cout << "  " << arr[2][0] << "  |  " << arr[2][1] << "  |  " << arr[2][2] << endl;
}

int checkWin(){
	for (int i = 0; i <3; i++) {
		if (arr[i][0] == arr[i][1] && arr[i][0] == arr[i][2] || arr[0][i] == arr[1][i] && arr[0][i] == arr[2][i])
			return 1;
		if (arr[0][0] == arr[1][1] && arr[0][0] == arr[2][2] || arr[0][2] == arr[1][1] && arr[0][2] == arr[2][0])
			return 1;
		for (int i = 0; i<3; i++) {
			for (int j = 0; j<3; j++) {
				if (arr[i][j] != " X" && arr[i][j] != " O") {
					return -1;
				}
			}
		}
		draw = true;
		return 1;

	}
}
				
