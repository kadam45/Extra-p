/* Create user defined exception to ckeck the following conditions and throw the 
exception if the criterion does not met 
a. user has age18 and 55
b. user stays has income between Rs.50000-rs.1,00,000 pre month 12
c. user stays in pune/mumbai/bangalore/chennai
d.user has 4-wheeler 
accept age,income,city,vehicle from the user and check for the condition
mentioned above.if any of the condition not met then throw exception.
*/
#include<iostream>
#include<string.h>
using namespace std;
class data
{
	int age;
	string city;
	double income;
	char fw;
	int c=0;
	public:
		void getage()
		{
			try{
				cout<<"\nEnter age:"<<endl;
				cin>>age;
				if(age<18||age>55)
				{
					throw(age);
				}
				else{
					c++;
				}
			}
		catch(int i)
		{
			cout<<"\n Exception caught:Age should be between 18-55 years"<<endl;
		}
		}
	void getcity()
	{
		try{
			cout<<"\n enter the city you live:";
			cin>>city;
			if(city=="pune"||city=="mumbai"||city=="Bangalore"||city=="chennai")
			{
				c++;
			}
			else
			{
				throw(city);
			}
		}
		catch(string s)
		{
			cout<<"\Exception caught:City should be pune,mumbai,bangslore or chennai ";
		}
	}
	void getincome()
	{
		try
		{
			cout<<"\n Enter the monthly income:";
			cin>>income;
			if(income<50000||income>100000)
			{
				throw(income);
			}
			else
			{
				c++;
			}
		}
	    catch(double d)
	    {
		        cout<<"Exception caught: Income sholud be between 50000 to 100000";
	    }
	}
	void fourw()
	{
	    try
		{
			cout<<"\n Do u have a four wheeler?Y orN:";
			cin>>fw;
			if(fw=='Y'||fw=='y')
			{
				c++;
			}
			else
			{
				throw(fw);
			}
		}
	    catch(char w)
	    {
		        cout<<"Exception caught: $ wheeler not present";
	    }	
	}
	void print()
	{
		if(c==4)
		{
			cout<<"\nNo incorrect data provided,thanks";
		}
	}     	
};
int main()
{
	data obj;
	obj.getage();
	obj.getincome();
	obj.getcity();
	obj.fourw();
	obj.print();
	return 0;
}
