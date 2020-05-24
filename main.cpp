#include<iostream>
#include<cmath>

using namespace std;

int main(){
	//--  Defining variables and initialising them
	double num1,num2;
	char operation;
	
	//--  Printing my name on screen
	cout<<"Welcome to the calculator program v.1.0 written by Shakill Hingah"<<endl;
	cout<<"*****************************************************************"<<endl;
	cout<<endl<<endl<<endl;
	
	//--  Receiving the variables from input
	cout<<"Please enter an operation which you like to calculate (+,-,*,/,s)";
	cout<<"[s stands for swap]:";
	cin>>operation;
	cout<<endl<<endl;
	cout<<"Please enter two numbers to apply your requested operation(";
	cout<<operation<<"):"<<endl<<"1st num:";
	cin>>num1;
	cout<<"2nd num:";
	cin>>num2;
	cout<<endl;
	
	//--  Used switch function so that the operator can be decided
	switch(operation){
		//--  Calculating the requested equation for inputs
		//--  At the same time printing the results on screen
		
		case '+':
			cout<<"The addition of two numbers ("<<num1<<","<<num2<<"):";
			cout<<num1+num2<<endl;
			break;
			
		case '-':
			cout<<"The substraction of two numbers ("<<num1<<","<<num2<<"):";
			cout<<num1-num2<<endl;
			break;
		
		case '*':
			cout<<"The multiplication of two numbers ("<<num1<<","<<num2<<"):";
			cout<<num1*num2<<endl;
			break;
			
		case '/':
			cout<<"The division of two numbers ("<<num1<<","<<num2<<"):";
			
			if(num2 == 0){
				cout<<"Not valid"<<endl;
			}
			
			cout<<(num1/num2)<<endl;
			break;
			
		case 's':
			cout<<"The swap of two numbers ("<<num1<<","<<num2<<"):";
			swap(num1,num2);
			cout<<"1st number = "<<num1<<" and 2nd number = "<<num2<<endl<<endl;
			break;
			
		default:
			cout<<"Unknown command"<<endl;
	}
	
	//--  Now once again the program will ask the user if he/she wants to continue or not
	system("pause");
	return 0;
}

