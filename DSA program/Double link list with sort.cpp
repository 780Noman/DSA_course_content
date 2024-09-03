#include<iostream>
using namespace std;
class student;
student *start=NULL;
student *last=NULL;
class student
{
	int no;
	student *next;
	student *previ;
	public:
		void insert_At_start()
		{
			student *t=new student();
			cout<<"\nEnter a Number : ";
			cin>>t->no;
			t->next=NULL;
			t->previ=NULL;
			if(start==NULL && last==NULL)
			{
				start=t;
				last=t;
			}
			else
			{
				student *temp=start;
				t->next=temp;
				temp->previ=t;
				start=t;
			}
		}
		void delete_at_start()
		{
			if(start==NULL)
			{
				cout<<"\nNo Node exists Empty list....\n";
			}
			else
			{
				student *temp=start;
				start=temp->next;
				temp->next->previ=NULL;
				delete temp;
				cout<<"\nNode deleted succusfully from start ....\n";
			}
		}
		void insert_at_Last()
		{
			student *t=new student();
			cout<<"\nEnter a Number : ";
			cin>>t->no;
			t->next=NULL;
			t->previ=NULL;
			if(start==NULL && last==NULL)
			{
				start=t;
				last=t;
			}
			else
			{
				student *temp=last;
				t->previ=temp;
				temp->next=t;
				last=t;			
			}
		}
		void delete_from_Last()
		{
			if(start==NULL)
			{
				cout<<"\nNo Node exist list Empty...\n";
			}
			else
			{
				student *temp=last;
				last=temp->previ;
				temp->previ->next=NULL;
				delete temp;
				cout<<"\nNode deleted succussfully...\n";
			}
		}
		void display()
		{
			if(start==NULL)
			{
				cout<<"\nNo Node exists Empty List...\n";
			}
			else
			{
				student *t=start;
				while(t!=NULL)
				{
					cout<<"\n-----------------------------------\n";
					cout<<"\nThe Address of previous ptr : "<<t->previ<<endl;
					cout<<"\nNumber is : "<<t->no<<endl;
					cout<<"\nThe address of Next ptr : "<<t->next<<endl<<endl;;
					t=t->next;
				}
			}
			
		}
		void sort_data()
		{
			if(start==NULL)
			{
				cout<<"\nNo Node exists List is empty ...\n";
			}
			else 
			{
				student *temp=start;
				int t;
				while(temp->next!=NULL)
				{
					while(temp->next->next!=NULL)
					{
					if(temp->no>temp->next->no)
					{
					 t=temp->next->no;
					 temp->next->no=temp->no;
					 temp->no=t;	
					}
					temp=temp->next;
				}
				temp=temp->next;
				}
			}
		}
};
int main()
{
	int choice;
	student o;
	do
	{
		cout<<"\nPress 1 to Insert Node at Start : ";
		cout<<"\nPress 2 to display All Node : ";
		cout<<"\nPress 3 to delete Node at start : ";
		cout<<"\nPress 4 to Insert Node at End : ";
		cout<<"\nPress 5 to Delete Node from End : ";
		cout<<"\nPress 6 to sort the Node : ";
		cout<<"\nEnter your choice : ";
		cin>>choice;
		switch(choice)
		{
			case 1:
				o.insert_At_start();
				break;
			case 2:
				o.display();
				break;
			case 3:
				o.delete_at_start();
				break;
			case 4:
				o.insert_at_Last();
				break;
			case 5:
				o.delete_from_Last();
				break;
			case 6:
				o.sort_data();
				break;
			case 0:
				exit(1);
			default:
				cout<<"\nInvalid Input....!!!\n";
		}
	}while(choice!=0);
}
