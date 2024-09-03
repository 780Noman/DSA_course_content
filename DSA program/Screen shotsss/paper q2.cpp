#include<iostream>
using namespace std;
class Node;
Node *start=NULL;
class Node
{
	int num;
	Node *next;
	public:
		static void insert_AT_2position()
		{
			Node *t=new Node();
			if(start==NULL)
			{
				cout<<"\nNo Node exist Before So node inserted at 1st position:\n";
				cout<<"\nEnter a Number : ";
				cin>>t->num;
				t->next=start;
				start=t;
			}
			else
			{
				Node *n=start;
				cout<<"\nEnter a Number : ";
				cin>>t->num;
				t->next=n->next;
				n->next=t;
				cout<<"\nNode inserted successfully at 2 position...\n";
			}
		}
		static void display()
		{
			Node *d=start;
			while(d!=NULL)
			{
				cout<<"Number is : "<<d->num<<endl;
				d=d->next;
			}
		}
};
int main()
{
	int choice;
	do
	{
		cout<<"\nPress 1 to insert data : ";
		cout<<"\nPress 2 to display : ";
		cout<<"\nPress 0 to exit :\n";
		cout<<"\nEnter a choice : ";
		cin>>choice;
		switch(choice)
		{
			case 1:
				Node::insert_AT_2position();
				break;
			case 2:
				Node::display();
				break;
			case 3:
				exit(1);
			default:
				cout<<"\nInvalid input....\n";
		}
		cout<<"\nPress 1 to repeat : ";
		cin>>choice;
	}while(choice!=0);
}
