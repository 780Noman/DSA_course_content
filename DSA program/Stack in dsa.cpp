#include<iostream>
using namespace std;
class stack
{
	int arr[5];
	int top;
	public:
		stact()
		{
			top=-1;
		}
	void push()
	{
	  int val;
	  cout<<"Enter a value :";
	  cin>>val;	
		if(top<4)
		{
			arr[++top]=val;
		}
		else
		{
			cout<<"Stack is full..."<<endl;
		}
	}
	int pop()
	{
		if(top>-1)
		{
			return arr[top--];
		}
		else
		cout<<"Stack is Empty..."<<endl;
	}
};
int main()
{
	stack s;
	for(int i=0;i<5;i++)
	s.push();
	for(int i=0;i<5;i++)
    cout<<s.pop()<<endl;
        
}
