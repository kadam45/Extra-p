//Write c++ program using STL for dequeue(Double ended queue)
#include<iostream>
#include<string.h>
#include<deque>
using namespace std;
class dequeue
{
	public:
		int a;
		deque<int>s;
		deque<int>::iterator itr;
		void push_front()
		{
			cout<<"\n Enter a number:";
			cin>>a;
			s.push_front(a);
		}
		void push_back()
		{
			cout<<"\n Enter a number:";
			cin>>a;
			s.push_back(a);
		}
		void pop_back()
		{
			itr=s.end();
			itr--;
			s.pop_back();
			cout<<"\n The element popped out of the queue is:"<<*itr;
		}
		void pop_front()
		{
			itr=s.begin();
			s.pop_front();
			cout<<"\n The element popped out of the queue is:"<<*itr;
		}
		void displayqueue()
		{
			cout<<"\n The elements in the queue are:"<<"\n";
			for(itr=s.begin();itr!=s.end();itr++)
			{
				cout<<*itr<<"\t";
			}
		}		
};
int main()
{
	dequeue d;
	int choice;
	char ans;
	do{
		cout<<"\n 1.Add element from front \n 2.Add element from behind \n3.Delete element from front\n4.delete element from behind queue elements: \n 5.display";
		cout<<"\n Enter the operation u want to preform:";
		cin>>choice;
		switch(choice)
		{
			case 1 : d.push_front();
			break;
			case 2 : d.push_back();
			break;
			case 3 : d.pop_front();
			break;
			case 4 : d.pop_back();
			break;
			case 5 : d.displayqueue();
			break;	
		}
		cout<<"\n Do u want to perform any other opreation?";
		cin>>ans;
	}while(ans=='y'||'Y');
}
