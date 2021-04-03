#include<iostream>
#include<string>
#include<fstream>
using namespace std;
/////////////////////////////// Function ProtoType
void play1();
void play2();
int check();
void result1();
void result2();
void record();          ////////////////// Save the Record
//////////////////////
char mat[3][3]={ {'1','2','3' }, {'4','5','6'}, {'7','8','9'} };	   //////  Matrix Globally Define
string player1,player2;
void display(){
	cout << "     |     |     " << endl;
	cout << "  " << mat[0][0] << "  |  " << mat[0][1] << "  |  " << mat[0][2] << endl;
	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;
	cout << "  " << mat[1][0] << "  |  " << mat[1][1] << "  |  " << mat[1][2]<< endl;
	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;
	cout << "  " << mat[2][0] << "  |  " << mat[2][1] << "  |  " << mat[2][2] << endl;
	cout << "     |     |     " << endl << endl;
}
	
///	cout<<"Matrix 2 X 2 element="<<mat[1][1];
///	mat[1][1]='X';
//	cout<<"Player 1 is ="<<mat[1][1]<<endl;
	////////////////////////////
///////////////////////////////////////////////////////////////////////////////Player 1 Function
void play1(){
	int	player1=1;
	int number;
	int match=1;  /////////// Variable for check Win Condition
	int draw=0;
	cout<<"Player 1 turn"<<endl;
	cin>>number;
	if(number==1 && mat[0][0]=='1')
		{
		mat[0][0]='X';
		check();
			if (match==check())					/////// Nested if
			{	
			display();
			cout<<"Player 1 Wins Congratulation :) :P"<<endl;
			result1();
			record();
			}
		//////////////////////////////////////////////////////////  Check Draw Condition
			else if(draw==check())
			{
				display();
				cout<<"Draw Game"<<endl;
			}
		////////
		else	
			play2();
		}
	else if(number==2 && mat[0][1]=='2')
		{
		mat[0][1]='X';
		//cout<<"gasgsdg="<<check();
		check();
			if (match==check())
			{	
				display();
				cout<<"Player 1 Win Congratulation :) :P"<<endl;
				result1();
				record();		
			}
		//////////////////////////////////////////////////////////Check Draw Condition
			else if(draw==check())
			{
			display();
			cout<<"Draw Game"<<endl;
			}
		/////////
		else
			play2();
		}
	else if(number==3 && mat[0][2]=='3')
	{
		mat[0][2]='X';
		check();
			if (match==check())
			{	
				display();
				cout<<"Player 1 Win Congratulation :) :P"<<endl;
				result1();
				record();
			}
		///////////////////////////////////////////////////////////////////// Check Draw Condition
			else if(draw==check())
			{
				display();
				cout<<"Draw Game"<<endl;
			}
		///////
		else	
			play2();
	}
			
	else if(number==4 && mat[1][0]=='4')
	{
		mat[1][0]='X';
		check();
			if (match==check())
			{	
				display();
				cout<<"Player 1 Wins Congratulation :) :P"<<endl;
				result1();
				record();
			}
		///////////////////////////////////////////////////////////////////// Check Draw Condition
			else if(draw==check())
			{
				display();
				cout<<"Draw Game"<<endl;
			}
		//////
		else	
			play2();
	}
		
	else if(number==5 && mat[1][1]=='5')
	{
		mat[1][1]='X';
		check();
			if (match==check())
			{	
				display();
				cout<<"Player 1 Win Congratulation :) :P"<<endl;
				result1();
				record();
			}
		///////////////////////////////////////////////////////////// Check Draw Condition
		else if(draw==check())
		{
			display();
			cout<<"Draw Game"<<endl;
		}
		//////
		else
			play2();
	}
			
	else if(number==6 && mat[1][2]=='6')
	{
		mat[1][2]='X';
		check();
			if(match==check())
			{	
				display();
				cout<<"Player 1 Win Congratulation :) :P"<<endl;
				result1();
				record();
			}
		///////////////////////////////////////////////////////////// Check Draw Condition
			else if(draw==check())
			{
				display();
				cout<<"Draw Game"<<endl;
			}
		///////
		else	
			play2();
	}
		
	else if(number==7 && mat[2][0]=='7')
	{
		mat[2][0]='X';
		check();
			if (match==check())
			{	
				display();
				cout<<"Player 1 Wins Congratulation :) :P"<<endl;
				result1();
				record();	
			}
		///////////////////////////////////////////////////////////// Check Draw Condition
			else if(draw==check())
			{
				display();
				cout<<"Draw Game"<<endl;
			}
		//////
		else	
			play2();
	}
	else if(number==8 && mat[2][1]=='8')
	{
		mat[2][1]='X';
		check();
			if (match==check())
			{	
				display();
				cout<<"Player 1 win Congratulation :) :P"<<endl;
				result1();
				record();
			}
			///////////////////////////////////////////////////////////// Check Draw Condition
			else if(draw==check())
			{
				display();
				cout<<"Draw Game"<<endl;
			}
		//////
		else
			play2();
	}
	else if(number==9 && mat[2][2]=='9')
	{
		mat[2][2]='X';
		check();
			if (match==check())
			{	
				display();
				cout<<"Player 1 win Congratulation :) :P"<<endl;
				result1();
				record();
			}
		///////////////////////////////////////////////////////////// Check Draw Condition
			else if(draw==check())
			{
				display();
				cout<<"Draw Game"<<endl;
			}
		///////
		else	
			play2();	
	}
		else	
		{
			cout<<"Invalid move !!!!!! Already Choosen"<<endl;	////////////////////// Check for Already Choosen Number 
			play1();
		}
	////////
//	int match=check();
/////////////////////////////////////////
//	match=check();
//	while(match==-1);
//	display();
//	if(match==1)
	//	cout<<"==>\aPlayer "<<player1<<" win ";
//	else
//		cout<<"==>\aGame draw";/////////////	
//	display();
}

void result1(){
	int win=1;
	int lose=0;
	ofstream myfile;
	myfile.open("tic.txt",ios::in | ios::app);
	myfile<<player1<<"      Win="<<win<<endl;
	myfile<<player2<<"      Win="<<lose<<endl;
	myfile<<"     **************************************"<<endl;
}
////////////////////////////////////////////////////////////////////////////////////Player 2 Function
void play2(){
	display();
	int player2=1;
	int number;
	int match=1; //////////Variable for check Win Condition
	int draw=0;
	///int check;
	cout<<"Player 2 turn"<<endl;
	cin>>number;
	if(number==1 && mat[0][0]=='1')
	{
		mat[0][0]='O';	
		display();
		check();
			if (match==check())			/////////////////// Nested if 
			{	
				//display();
				cout<<"Player 2 Wins Congratulation :) :P"<<endl;
				result2();
				record();
			}
			///////////////////////////////////////////////////////////////////// Check Draw Condition
			else if(draw==check())
			{
				display();
				cout<<"Draw Game"<<endl;
			}
		///////
		else	
			play1();
	}
	else if(number==2 && mat[0][1]=='2')
	{
		mat[0][1]='O';
		display();
		check();
			if (match==check())
			{	
				//display();
				cout<<"Player 2 Win Congratulation :) :P"<<endl;
				result2();
				record();
			}
			/////////////////////////////////////////////////////////////// Check Draw Condition
			else if(draw==check())
			{
				display();
				cout<<"Draw Game"<<endl;
			}
		///////
		else	
			play1();
		
	}
	else if(number==3 && mat[0][2]=='3')
	{
		mat[0][2]='O';
		display();
		check();
			if (match==check())
			{	
				//display();
				cout<<"Player 2 Wins Congratulation :) :P"<<endl;
				result2();
				record();
			}
			///////////////////////////////////////////////////////////////// Check Draw Condition
			else if(draw==check())
			{
				display();
				cout<<"Draw Game"<<endl;
			}
		///////
		else	
			play1();
	
	}
	else if(number==4 && mat[1][0]=='4')
	{
		mat[1][0]='O';
		display();
		check();
			if (match==check())
			{	
				////	display();
				cout<<"Player 2 Wins Congratulation :) :P"<<endl;
				result2();
				record();
			}
		///////////////////////////////////////////////////////////////////// Check Draw Condition
			else if(draw==check())
			{
				display();
				cout<<"Draw Game"<<endl;
			}
		////////
		else	
			play1();
	
	}
	else if(number==5 && mat[1][1]=='5')
	{
		mat[1][1]='O';
		display();
		check();
			if (match==check())
			{	
				//	display();
				cout<<"Player 2 Wins Congratulation :) :P"<<endl;
				result2();
				record();
			}
		///////////////////////////////////////////////////////////////////// Check Draw Condition
			else if(draw==check())
			{
				display();
				cout<<"Draw Game"<<endl;
			}
		///////
		else	
			play1();	
	}
	else if(number==6 && mat[1][2]=='6')
	{
		mat[1][2]='O';
		display();
		check();
			if (match==check())
			{	
				//	display();
				cout<<"Player 2 Wins Congratulation :) :P"<<endl;
				result2();
				record();
			}
		////////////////////////////////////////////////////////////// Check Draw Condition
			else if(draw==check())
			{
				display();
				cout<<"Draw Game"<<endl;
			}
		//////
		else	
			play1();
	}
	else if(number==7 && mat[2][0]=='7')
		{
		mat[2][0]='O';
		display();
			check();
			if(match==check())
			{	
				//	display();
				cout<<"Player 2 Wins Congratulation :) :P"<<endl;
				result2();
				record();
			}
		/////////////////////////////////////////////////////// Check Draw Condition
			else if(draw==check())
			{
				display();
				cout<<"Draw Game"<<endl;
			
			}
		////////
		else	
			play1();
	}
	else if(number==8 && mat[2][1]=='8')
	{
		mat[2][1]='O';
		display();
		check();
			if(match==check())
			{	
				//	display();
				cout<<"Player 2 Wins Congratulation :) :P"<<endl;
				result2();
				record();	
			}
		///////////////////////////////////////////////////////////////////// Check Draw Condition
			else if(draw==check())
			{
				display();
				cout<<"Draw Game"<<endl;
			}
		///////
		else	
			play1();
	}
	else if(number==9 && mat[2][2]=='9')
	{
		mat[2][2]='O';
		display();
		check();
			if(match==check())
			{	
				//	display();
				cout<<"Player 2 Wins Congratulation :) :P"<<endl;
				result2();
				record();	
			}
		///////////////////////////////////////////////////////////////////// Check Draw Condition
			else if(draw==check())
			{
				display();
				cout<<"Draw Game"<<endl;
			}
		//////
		else	
			play1();
	}
		else
		{
			cout<<"Invalid move !!!!!! Already Choosen"<<endl;	
			play2();
		}
		
	//	match=check();
	//	cout<<"DGADGDS="<<match;	
//	while(match==-1);
//	display();
//	if(match==1)
//		cout<<"Player 2 "<<player2<<" win ";
//	else
//	cout<<"Game draw";
//	display();
	}
	
void result2(){
	int win=1;
	int lose=0;
	ofstream myfile;
	myfile.open("tic.txt",ios::in | ios::app);
	myfile<<player1<<"      Win="<<lose<<endl;
	myfile<<player2<<"      Win="<<win<<endl;
	myfile<<"     **************************************"<<endl;
}
	
int check(){
		if (mat[0][0] == mat[0][1] && mat[0][1] == mat[0][2])
		return 1;
	else if (mat[1][0] == mat[1][1] && mat[1][1] == mat[1][2])
		return 1;
	else if (mat[2][0] == mat[2][1] && mat[2][1] == mat[2][2])
		return 1;
	//////////////////////////////////////////////////////////////// Horizantal Check Above;	
	else if (mat[0][0] == mat[1][0] && mat[1][0] == mat[2][0])
		return 1;
	else if (mat[0][1] == mat[1][1] && mat[1][1] == mat[2][1])
		return 1;
	else if (mat[0][2] == mat[1][2] && mat[1][2] == mat[2][2])
		return 1;
	////////////////////////////////////////////////////////////// Vertical Check Above	
	else if (mat[0][0] == mat[1][1] && mat[1][1] == mat[2][2])
		return 1;
	else if (mat[0][2] == mat[1][1] && mat[1][1] == mat[2][0])
		return 1;
	/////////////////////////////////////////////////////////////  Diagnal Check Above	
/*	else if (mat[0][0] != '1' && mat[0][1] != '2' && mat[0][2] != '3')
		return 0;
	else if( mat[1][0] != '4' && mat[1][1] != '5' && mat[1][2] != '6')
		return 0; 
	else if( mat[2][0] != '7' && mat[2][1] != '8' && mat[2][2] != '9')
		return 0;*/  													//////////////////// Not possible like that
	else if (mat[0][0] != '1' && mat[0][1] != '2' && mat[0][2] != '3' && mat[1][0] != '4' && mat[1][1] != '5' && mat[1][2] != '6'&& mat[2][0] != '7' && mat[2][1] != '8' && mat[2][2] != '9')
			return 0;
	///////////////////////////////////////////////////////////////  Draw Check Above
	else
		return -1;
}

void record(){
	int number;
	cout<<"Press 1 to See the Record"<<endl;
	cout<<"Press 2 to Exit"<<endl;
	cin>>number;
	switch(number){
	 case 1:
		 	if(number==1){
		 	string line;
			ifstream myfile( "tic.txt");
			if(myfile.is_open()){
				while(!myfile.eof()){
			getline(myfile,line);
			cout<<line<<endl;
	}
		myfile.close();
	}
		else
		{
			cout<<"File Error"<<endl;
			 }

		}
		break;
	 case 2:
	 	break;
	default:
		cout<<"Invalid Input.......!!! Enter Again"<<endl;
		cin>>number;
	}
}
int main(){
	cout<<"\t\t\t\t Tic Tac Toe Game"<<endl;
	cout<<"Instruction To Play Game"<<endl;
	cout<<endl;
	cout<<"Player 1 =        X "<<endl;
	cout<<"Player 2 =        O "<<endl;
	cout<<"Press the number displayed on the board to Play Game"<<endl;
	
	cout<<endl;
//	string player1,player2;
	cout<<"Enter the player 1 Name"<<endl;
	cin>>player1;
	cout<<"Enter the Player 2 Name"<<endl;
	cin>>player2;
	cout<<endl;
	cout<<"\tWelcome"<<"  "<<player1<<" "<<"and"<<"  "<<player2<<" "<<"to tic tac toe game :) :P"<<endl;
	cout<<"Player 1="<<player1<<endl;
	cout<<"Player 2="<<player2<<endl;
	cout<<endl;
	display();			///////// Print board
	play1();			////////  Player 1 Function Call
//	board();
}
