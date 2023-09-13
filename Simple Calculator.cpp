/*************************TASK 2*************************
                    SIMPLE CALCULATOR
Develop a calculator program that performs basic arithmetic
operations such as addition, subtraction, multiplication, and
division. Allow the user to input two numbers and choose an
operation to perform.*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	float num1,num2;
	cout<<"Enter two numbers: ";
	cin>>num1>>num2;
	char op;
	cout<<"Enter operator: ";
	cin>>op;
	float result;
	switch(op){
		case '+':
			result = num1 + num2;
			cout<<"The result is "<<result;
			break;
		case '-':
			result = num1 - num2;
			cout<<"The result is "<<result;
			break;
		case '*':
			result = num1 * num2;
			cout<<"The result is "<<result;
			break;
		case '/':
			if(num2<=0){
				cout<<"invalid number";
			}
			result = num1 / num2;
			cout<<"The result is "<<result;
			break;
		default :
			cout<<"invalid input";
	}
	return 0;
}
