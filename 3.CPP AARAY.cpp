//Implement a class cpp Array which is identical to a one dimentional c++ array(i.e the index set is a set of consecutive integers startind at 0) except for the following:

#include<iostream>
using namespace std;
class CppArray
{
	public: int a[10],i,j,n,b[10],temp;
	public: void get();
	 void print();
	 void sort();
	 void range();
	 void exchange();
	 int size();	 
};
void CppArray::get()
{
	cout<<"\n Enter the limit of array:";
	cin>>n;
	cout<<"\nEnter the array element";
	for(i=0;i<n;i++)
	{
		cout<<"\n a["<<i<<"]=";
		cin>>a[i];
	}
}
void CppArray::print()
{
	cout<<"\n The Entered  array element are:";
	for(i=0;i<n;i++)
	{
		cout<<"\n a["<<i<<"]="<<a[i];
	}
}
void CppArray::range()
{
	cout<<"\nThe range of array is from"<<a[0]<<"to"<<a[n-1];
}
void CppArray::exchange()
{
	for(i=0;i<n;i++)
	{
		b[i]=a[i];
	}
}
for(i=0;i<n;i++)
{
    cout<<"\n b["<<i<<"]="<<b[i];	
}

void CppArray::sort()
{
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	cout<<"\nThe sorted array is:";
	for(i=0;i<n;i++)
	{
		cout<<"\n a["<<i<<"]="<<a[i];
    }
}
int CppArray::size()
{
	return n;
}
int main()
{
	int a;
	CppArray obj;
	obj.get();
	obj.print();
	obj.range();
	obj.exchange();
	obj.sort();
	a=obj.size();
	cout<<"\n The size of array is "<<a;
	return 0;
}

