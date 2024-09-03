#include<iostream>
using namespace std;
class stack;
stack *start=NULL;
class stack
{
	int val;
	stack *next;
	public:
	void push( )
	{
	   stack *t=new stack();
	   cout<<"Enter a value :\n";
	   cin>>t->val;
	   t->next=start;
	   start=t;	   
	}
	int pop()
	{
	if(start==NULL)
	{
		cout<<"NO node exists !!!!\n";
	}
	else
	{
		stack *t1=start;
		start=start->next;
		delete t1;
	}
	}
	void display()
	{
		if(start==NULL)
		{
			cout<<"NO node is exists...\n";
		}
		else
		{
			stack *t2=start;
			while(t2!=NULL)
			{
				cout<<"\t\nNumber is : "<<t2->val;
				t2=t2->next;
			}
		}
	}
};
int main()
{
	int opt;
	stack s;
	do
	{
		cout<<"\nPress 1 to push  : \n\n";
		cout<<"Press 2 to display  :\n \n";
		cout<<"Press 3 to pop :\n\n";
		cout<<"Press 0 to exit ...\n\n";
		cout<<"Enter your choice :";
		cin>>opt;
		switch(opt)
		{
			case 1:
				s.push();
				break;
			case 2:
				s.display();
				break;
			case 3:
				s.pop();
				break;
			case 0:
				exit(0);
			default:
				cout<<"Invalid input !!!!";
		}
	}while(opt!=0);
}
