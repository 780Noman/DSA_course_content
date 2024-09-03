//create dynamic stack
#include<iostream>
using namespace std;
class stack;
stack *start=NULL;
class stack
{
	int num;
	stack *next;
	void push()
	{
		stack *t=new stact();
		if(start==NULL)
		{
			cout<<"\nEnter a NUMber : ";
			cin>>t->num;
			t->next=start;
			start=t;
		}
		else
		{
			cout<<"\nEnter a Number : ";
			cin>>t->num;
			t->next=start;
			start=t;
		}
	}
	void pop()
	{
		if(start==NULL)
		{
			cout<<"\nNo Node is exists...\n";
		}
		else
		{
			stack *d=start;
			start=start->next;
			delete d;
		}
	}
	void display()
	{
		stact *s=start;
		while(s!=NULL)
		{
			cout<<"\nNumber is : "<<s->num<<endl;
			s=s->next;
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
\}
