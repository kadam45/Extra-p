/*write a c++ program create a calculator for an arithmetic operator(+,-,*,/).
The progrsm should take two operands from user and performs the operation on
 those two operands depending upon the operator entered by user.Use a switch
statement to select the opreation .Finally,display the result.*/

#include<iostream>
using namespace std;

class calculator
{
	public:
		float num1,num2,result;
		char op;
	public:
		void calculate()
		{
			cout<<"\n Calculator";
			cout<<"\n Enter the num1,operator and num2"<<endl;
			cin>>num1>>op>>num2;
			switch(op)
			{
				case '+':
					cout<<"\n\t Answer="<<num1+num2;
					break;
				case '-':
					cout<<"\n\t Answer="<<num1-num2;
					break;
				case '*':
					cout<<"\n\t Answer="<<num1*num2;
					break;
				case '/':if(num2==0)
				    cout<<"\nError.Not valid:";
					cout<<"\n\t Answer="<<num1/num2;
					break;
				default:
					cout<<"\n Error! operator is not correct:";
					break;	
			}
		}
};
int main()
{
	calculator obj;
	char ch;
	do
	{
		obj.calculate();
		cout<<"\n\t Do u want to continue :(Y\y)";
		cin>>ch;
	}while(ch=='Y'||ch=='y');
	return 0;
}
