#include<iostream>
#include<string>
using namespace std;
class student;
student *start=NULL;
student *last=NULL;
class student 
{
	int rolNo;
	string name;
	float cgpa;
	student *next;
	student *previ;
	public:
		void Insert_At_start()
		{
			student *i=new student();
			cout<<"\nEnter a Name : ";
			cin>>i->name;
			cout<<"\nEnter a Roll NO  : ";
			cin>>i->rolNo;
			cout<<"\nEnter a CGPA : ";
			cin>>i->cgpa;
			i->next=NULL;
			i->previ=NULL;
			if(start==NULL && last==NULL)
			{
				last=i;
				start=i;
			}
			else
			{
				student *s=start;
				start=i;
				s->previ=i;
				i->next=s;
			}
		}
		void delete_from_start()
		{
			if(start==NULL)
			{
				cout<<"\nList is Empty No Node exists...!!!!\n";
			}
			else if(start->next==NULL)
			{
				start=NULL;
				cout<<"\nNode deleted succussfully....\n";
			}
			else
			{
				student *t=start;
				start=start->next;
				t->next->previ=NULL;
				delete t;
				cout<<"\nNode Deleted Succussfully from start....\n";
			}
		}
		void display()
		{
			if(start==NULL)
			{
				cout<<"\nList is Empty No node exists....\n";
			}
			else
			{
				student *d=start;
				while(d!=NULL)
				{
					cout<<"\n--------------------------------\n";
					cout<<"Name : "<<d->name<<endl;
					cout<<"Roll No : "<<d->rolNo<<endl;
					cout<<"CGPA : "<<d->cgpa<<endl;
					d=d->next;
				}
			}
		}
		void insert_at_End()
		{
			student *e=new student();
			cout<<"\nEnter a Name : ";
			cin>>e->name;
			cout<<"\nEnter a Roll No : ";
			cin>>e->rolNo;
			cout<<"\nEnter a CGPA : ";
			cin>>e->cgpa;
			e->next=NULL;
			e->previ=NULL;
			if(start==NULL && last==NULL)
			{
				start=e;
				last=e;
			}
			else
			{
				student *t=last;
				t->next=e;
				e->previ=t;
				last=e;
			}
			
		}
		void delete_from_End()
		{
			if(start==NULL)
			{
				cout<<"\nList is Empty No node exists....!!!\n";
			}
			else
			{
				student *e=last;
				last=e->previ;
				e->previ->next=NULL;
				delete e;
				cout<<"\nNode deleted succussfully from End.....\n";
			}
		}
		void display_From_start()
		{
			if(start==NULL)
			{
				cout<<"\nList is Empty No Node exists....\n";
			}
			else
			{
				student *s=last;
				while(s!=NULL)
				{
				    cout<<"\n--------------------------------\n";
					cout<<"Name : "<<s->name<<endl;
					cout<<"Roll No : "<<s->rolNo<<endl;
					cout<<"CGPA : "<<s->cgpa<<endl;
					s=s->next;	
				}
			}
		}
		void display_from_End()
		{
			if(last==NULL)
			{
				cout<<"\nlist is Empty No Node is Exists...\n";
			}
			else
			{
				student *e=last;
				while(e!=NULL)
				{
					cout<<"\n***********************************\n";
					cout<<"\nName : "<<e->name<<endl;
					cout<<"\nRoll No : "<<e->rolNo<<endl;
					cout<<"\nCGPA : "<<e->cgpa<<endl;
					e=e->previ;
				}
			}
		}
		void insert_node_2pos()
		{
			student *t=new student();
			if(start==NULL && last==NULL)
			{
				cout<<"\nList is Empty...SO node inserted at here : \n";
				cout<<"\n***********************************\n";
			cout<<"\nEnter a Name : ";
			cin>>t->name;
			cout<<"\nEnter a Roll No : ";
			cin>>t->rolNo;
			cout<<"\nEnter a CGPA : ";
			cin>>t->cgpa;
			t->next=NULL;
			t->previ=NULL;
			start=t;
			last=t;	
			}
			else
			{
				student * temp=start;
				while(temp->next->next!=NULL)
				{
					temp=temp->next;
				}
			cout<<"\n***********************************\n";
			cout<<"\nEnter a Name : ";
			cin>>t->name;
			cout<<"\nEnter a Roll No : ";
			cin>>t->rolNo;
			cout<<"\nEnter a CGPA : ";
			cin>>t->cgpa;
			t->next=temp->next;
			temp->next=t;
			}
		}
};
int main()
{
	int choice;
	student s;
	do
	{
		cout<<"\nPress 1 for insert at start :";
		cout<<"\nPress 2 for delete from start : ";
		cout<<"\nPress 3 for Display : ";
		cout<<"\nPress 4 for insert at End : ";
		cout<<"\nPress 5 for delete from End : ";
		cout<<"\nPress 6 for display From Start: ";
		cout<<"\nPress 7 to display from End: ";
		cout<<"\nPress 8 to insert node at 2nd last pos: ";
		cout<<"\nEnter your choice : ";
		cin>>choice;
		switch(choice)
		{
			case 1:
				s.Insert_At_start();
				break;
			case 2:
				s.delete_from_start();
				break;
			case 3:
				s.display();
				break;
			case 4:
				s.insert_at_End();
				break;
			case 5:
				s.delete_from_End();
				break;
			case 6:
				s.display_From_start();
				break;
			case 7:
				s.display_from_End();
				break;
			case 8:
				s.insert_node_2pos();
				break;
			case 0:
				exit(1);
			default:
				cout<<"\nInvalid Input Try again....!!!\n";
		}
	}while(choice!=0);
}
