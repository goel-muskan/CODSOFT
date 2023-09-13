/*************************TASK 1*************************
                    NUMBER GUESSING GAME
Create a program that generates a random number and asks the
user to guess it. Provide feedback on whether the guess is too
high or too low until the user guesses the correct number.*/
#include<bits/stdc++.h>
using namespace std;
void Game(){
	int number;
	number = rand();
	cout<<"Welcome to the Number Guessing Game!!"<<endl;
	int guess;
	do{
		cout<<endl<<"Guess the number : ";
		cin>>guess;
		if(guess==number){
			cout<<endl<<"Good!!You guessed it right"<<endl;
			cout<<"Thank You for playing this game"<<endl;
			return;
		}else if(guess<number){
			cout<<endl<<"Try higher!!!"<<endl;
		}else{
			cout<<endl<<"Try Lower!!!"<<endl;
		}
	}while(guess!=number);
	cout<<endl<<"Thank You for playing this game"<<endl;
	return;
}
int main(){
	int choice;
	do{
		cout<<endl<<"Press 1 to start a new game"<<endl<<"Press 0 to end the code"<<endl;
		cin>>choice;
		if(choice==1)
		Game();
	}while(choice!=0);
	return 0;
}
