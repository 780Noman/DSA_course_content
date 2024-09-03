#include<iostream>
using namespace std;

class stack
{
	int a[5];
	int top=-1;
	public:
	stack( )
	{
		top=-1;
	}
	void push( )
	{
		int value;
		
		if(top<4)
		{
			cout<<"Enter the value: ";
		cin>>value;
			a[++top]=value;
		}
		else 
		cout<<"Stack is full.\n";
	}
	int pop()
	{
		if(top>-1)
		{
			return a[top--];

		}
		else 
		cout<<"Stack is empty.";
		return 0;
		
	}
};
int main()
{
	stack s;
	for(int i=0;i<6;i++)
	{
	s.push();
   }
   for(int i=0;i<6;i++)
   {
   	cout<<s.pop()<<endl;
   }
}
