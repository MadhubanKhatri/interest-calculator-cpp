#include<iostream>
using namespace std;

int main(){
	float num1, num2;
	char sym;
	cout<<"Enter Number 1: ";
	cin>>num1;
	cout<<"Enter Number 2: ";
	cin>>num2;
	cout<<"Enter Operator: ";
	cin>>sym;
	
	switch (sym){
		case '+':
			cout<<num1+num2;
			break;
		case '-':
			cout<<num1-num2;
			break;
		case '*':
			cout<<num1*num2;
			break;
		case '/':
			cout<<num1/num2;
			break;
		default:
			cout<<'Invalid Input';
			break;
	}
	return 0;
}