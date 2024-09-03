#include<iostream>
using namespace std;
class node;
node *start=NULL;
class node
{
	int num;
	node *next;
	public:
		 static void insert_2ndLast_pos()
		{
			if(start==NULL)
			{
				cout<<"\nNo Node is exist so node insert at first...\n";
				node *t=new node();
				cout<<"\nEnter a number : ";
				cin>>t->num;
				t->next=NULL;
				start=t;
			}
			else
			{
				node *temp=start;
				while(temp!=NULL)
				{
					if(temp->next->next==NULL)
					{
					  node *t1=new node();
					  cout<<"\nEnter a NUmber : ";
					  cin>>t1->num;
					  t1->next=temp->next;
					  temp->next=t1;	
					}
					else
					temp=temp->next;
				}
			}
		}
			static void display()
		{
			node *d=start;
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
				node::insert_2ndLast_pos();
				break;
			case 2:
				node::display();
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

