//simple calculator
# include <iostream>
using namespace std;
int main()
{
	int num1,num2;
	char op;
	//input numbers and operator
	cout<<"Enter first number:";
	cin>>num1;
	cout<<"Enter operator of your choice(+,-,*,/):";
	cin>>op;
	cout<<"Enter second number:";
	cin>>num2;
	//using switch statement
	switch(op)
	{
	case'+':
		cout<<num1<<"+"<<num2<<"="<<num1+num2;
	    break;
	case'-':
		cout<<num1<<"-"<<num2<<"="<<num1-num2;
		break;
	case'*':
		cout<<num1<<"*"<<num2<<"="<<num1*num2;
		break;
	case'/':
		//division rule
		if(num2==0)
		cout<<"zero division error.";
		else
		cout<<num1<<"/"<<num2<<"="<<num1/num2;
		break;
	}
	return 0;
	
}
