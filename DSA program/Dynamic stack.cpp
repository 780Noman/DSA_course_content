#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
class stack;
stack *start=NULL;
class stack
{
	int rolno;
	string name;
	float cgpa;
	stack *next;
	public:
		void push()
		{
			stack *T=new stack();
			cout<<"Enter a name of student :";
			cin>>T->name;
			cout<<"Enter a Roll Number :";
			cin>>T->rolno;
			cout<<"Enter a cgpa :";
			cin>>T->cgpa;
			T->next=start;
			start=T;
		}
		void display()
		{
			if(start==NULL)
			{
				cout<<"No Node is Exists...\n";
			}
			else
			{
				stack *t1=start;
				cout<<"\t"<<"ROll No"<<"\t"<<"Name"<<"\t"<<"CGPA"<<endl;
				while(t1!=NULL)
				{
					cout<<"\t"<<t1->name<<"\t"<<t1->rolno<<"\t"<<t1->cgpa<<endl;
					t1=t1->next;
				}
			}
		}
		void pop()
		{
			if(start==NULL)
			{
				cout<<"NO Node exists...\n";
			}
			else
			{
				cout<<"The popped node is :\n";
				cout<<"\t"<<start->name<<"\t"<<start->rolno<<"\t"<<start->cgpa<<endl;
				start=start->next;
			}
		}
};
int main()
{
	int opt;
	stack s;
	do
	{
		cout<<"Press 1 to push  : \n\n";
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
