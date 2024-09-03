#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
class student;
student *start=NULL;
class student
{
	int rolNo;
	string name;
	float cgpa;
	student *next;
	public:
		void insertatstart()
		{
			student *T=new student();
			cout<<"Enter a roll No : ";
			cin>>T->rolNo;
			cout<<"Enter a name :";
			cin>>T->name;
			cout<<"Enter a cgpa :";
			cin>>T->cgpa;
			T->next=start;
			start=T;			
		}
	void display()
		{
			system("CLS");
			if(start==NULL)
			{
				cout<<"No Node exist!!!\n";
			}
			else
			{
				student *T1=start;
				cout<<"ROll No"<<"| "<<"Name"<<"| "<<"CGPA |"<<endl;
				while(T1!=NULL)
				{
					cout<<"______________________________\n";
					cout<<T1->rolNo<<" |\t"<<T1->name<<" |\t"<<T1->cgpa<<" |\t"<<endl;
					T1=T1->next;
				}
			}
		}    
	void deleteatstart()
	{
		 if(start==NULL)
		 {
		 	cout<<"No Node to delete....\n";
		 }
		 else
		 {
		 	student *T2=start;
		 	start=start->next;
		 	delete  T2;
		 	cout<<"Node deleted successfully...\n";
		 }
	}
	void searchbyRolNo()
	{
		int roln,found=0;
		cout<<"Enter a Roll Number Do you want to search :";
		cin>>roln;
		student *st=start;
		if(st==NULL)
		{
		cout<<"No Node exists..!!!\n";	
		}
	else
	 {
		while(st!=NULL)
		{
			if(st->rolNo==roln)
			{
			cout<<"ROll No"<<"\t"<<"Name"<<"\t"<<"CGPA"<<endl;
		  	cout<<st->rolNo<<"\t"<<st->name<<"\t"<<st->cgpa<<"\t"<<endl;
		  	found++;
		    }
			st=st->next;
		}
       }
		if(found==0)
		{
			cout<<"Your searching Roll NO not found!!!!.\n";
		}
	}
	void searchbyCGPA()
	{
		float cgpa1;
		int found=0;
		cout<<"\nEnter a CGPA do you want to search : ";
		cin>>cgpa1;
		if(start==NULL)
		{
			cout<<"\nList is Empty Invalid CGPA....\n";
		}
		else
		{
			student *c=start;
			while(c!=NULL)
			{
				if(cgpa1==c->cgpa)
				{
				cout<<"ROll No"<<"| "<<"Name"<<"| "<<"CGPA |"<<endl;
				cout<<"______________________________\n";
				cout<<c->rolNo<<" |\t"<<c->name<<" |\t"<<c->cgpa<<" |\t"<<endl;	
				found++;
				}
				c=c->next;
			}
			if(found==0)
			{
				cout<<"\nYour searching CGPA Not found...!!!\n";
			}
		}
	}
		void insertAfterpos()
	{
		int pos,count=0,found=0;
		cout<<"Enter a position please :";
		cin>>pos;
		if(start==NULL)
		{
			cout<<"\nList is empty and invalid position..!!"<<endl;
		}
		else
		{
			student *t=start;
			while(t!=NULL)
			{
				count++;
				if(count==pos)
				{
					student *t1=new student();
					t1->next=t->next;
					t->next=t1;
					cout<<"\nEnter ROLL NO : ";
					cin>>t1->rolNo;
					cout<<"\nEnter NAME: ";
					cin>>t1->name;
					cout<<"\nEnter CGPA: ";
					cin>>t1->cgpa;
					cout<<"\nNode is inserted after given position...\n";
					found++;
					break;
				}
				else
				{
					t=t->next;
				}
			}
				if(found==0)
				{
					cout<<"\nNOde cannot be inserted the position does not exist..."<<endl;
				}
		}
	}
	void deletenodebypos()
	{
		int pos,count=0,found=0;
		cout<<"\nEnter the position : ";
		cin>>pos;
		if(start==NULL)
		{
			cout<<"\nList is Empty and invalid position..!!\n";
		}
		else if(start->next==NULL && pos==1)
		{
			start=NULL;
			found++;
			cout<<"\nNode is Deleted succussfully...\n";
		}
		else
		{
			student *d=start;
			pos--;
			while(d!=NULL)
			{
				count++;
				if(count==pos)
				{
					if(d->next->next!=NULL)
					{
						d->next=d->next->next;
						cout<<"\nNode is deleted by given position..!!\n";
						found++;
						break;
					}
					else
					{
						d->next=d->next->next;
						cout<<"\nNode is deleted by given position..!!\n";
						found++;
						break;
					}
				}
				else
				{
					d=d->next;
				}
			}
			if(found==0)
			{
				cout<<"\nNode is not deleted because of invalid position..!!\n";
			}
		}
	}
	void insertAfterId()
	{
		int id,found=0,count=0;
		cout<<"\nPlease Enter ID Here : ";
		cin>>id;
		if(start==NULL)
		{
			cout<<"\nList is empty and invalid ID...!!!\n";
		}
		else
		{
			student *t=start;
			while(t!=NULL)
			{
				count++;
				if(id==t->rolNo)
				{
					student *t1=new student();
					t1->next=t->next;
					t->next=t1;
					cout<<"\nEnter a Roll No : ";
					cin>>t1->rolNo;
					cout<<"\nEnter a Name : ";
					cin>>t1->name;
					cout<<"\nEnter a CGPA : ";
					cin>>t1->cgpa;
					found++;
					cout<<"\nNode is inserted after given id successfully...\n";
					break;
				}
				else
				{
					t=t->next;
				}
			}
			if(found==0)
			{
				cout<<"\nNode Does not inserted because the given id is not exists....!!!\n";
			}
		}
	}
	void insertafterName()
	{
		string nam;
		int found=0,count=0;
		cout<<"\nPlease Enter a Name here : ";
		cin>>nam;
		if(start==NULL)
		{
			cout<<"\nList is Empty and invalid Name ....\n";
		}
		else
		{
			student *n=start;
			while(n!=NULL)
			{
				count++;
				if(nam==n->name)
				{
					student *n1=new student();
					n1->next=n->next;
					n->next=n1;
					cout<<"\nEnter a Name : ";
					cin>>n1->name;
					cout<<"\nEnter a Rol No : ";
					cin>>n1->rolNo;
					cout<<"\nEnter a CGPA : ";
					cin>>n1->cgpa;
					found++;
					cout<<"\nNode is insert after given Name successfully....\n";
					break;
				}
				else
				{
					n=n->next;
				}
			}
			if(found==0)
			{
				cout<<"\nNode cannot inserted because of given Name is not exists....\n";
			}
		}
	}
	void insertAfterCGPA()
	{
		float cgpa1;
		int count=0,found=0;
		cout<<"\nEnter a CGPA here : ";
		cin>>cgpa1;
		if(start==NULL)
		{
			cout<<"\nList is empty and invalid CGPA....!!!!\n";
		}
		else
		{
			student *c=start;
			while(c!=NULL)
			{
				count++;
				if(cgpa1==c->cgpa)
				{
					student *c1=new student();
					c1->next=c->next;
					c->next=c1;
					cout<<"\nEnter a Name : ";
					cin>>c1->name;
					cout<<"\nEnter a Roll No : ";
					cin>>c1->rolNo;
					cout<<"\nEnter a CGPA :";
					cin>>c1->cgpa;
					found++;
					cout<<"\nNode is inserted successfully after given cgpa....\n";
					break;
				}
				else
				{
					c=c->next;
				}
			}
			if(found==0)
			{
				cout<<"\nNode cannot insert because given cgpa not exists....!!!\n";
			}
		}
	}
	void searchbypos()
	{
		int pos,found=0,count=0;
		cout<<"\nEnter a position of node do you want to search : ";
		cin>>pos;
		if(start==NULL)
		{
			cout<<"\nList is Empty No node position exists.....\n";
		}
		else
		{
			student *p=start;
			cout<<"ROll No"<<"| "<<"Name"<<"| "<<"CGPA |"<<endl;
			while(p!=NULL)
			{
				count++;
				if(pos==count)
				{
					cout<<"______________________________\n";
					cout<<p->rolNo<<" |\t"<<p->name<<" |\t"<<p->cgpa<<" |\t"<<endl;
					found++;
				}
				p=p->next;
			}
			if(found==0)
			{
				cout<<"\nNo position found here in list....!!!!\n";
			}
		}
	}
	void deleteNodebyId()
	{
		int roln,found=0;
		cout<<"\nEnter a Roll num do you want to delete:  ";
		cin>>roln;
		if(start==NULL)
		{
			cout<<"\nList is Empty invalid ID....!!!\n";
		}
		else if(start->rolNo==roln)
		{
			start=NULL;
			cout<<"\nNode is deleted succussfully by position....\n";
			found++;
		}
		else
		{
			student *d=start;
			while(d!=NULL)
			{
				if(roln==d->next->rolNo)
				{
				   	if(d->next->next!=NULL)
				     {
				     	d->next=d->next->next;
				     	cout<<"\nNode is deleted successfully...\n";
				     	found++;
				     	break;
					 }
					 else
					 {
					 	d->next=d->next->next;
					 	cout<<"\nNode is deleted successfully...\n";
					 	found++;
					 	break;
					 }
				}
				else
				{
					d=d->next;
				}
			}
			if(found==0)
			{
				cout<<"\nNo Node is deleted because ID not found here...!!!\n";
			}
		}
		
	}
	void deletenodebyname()
	{
		string nam;
		int found=0;
		cout<<"\nEnter a Name do you want to delete Node :v";
		cin>>nam;
		if(start==NULL)
		{
			cout<<"\nList is Empty Invalid Name...!!!!\n";
		}
		else if( start->name==nam)
		{
			start=NULL;
			cout<<"\nNode is deleted successfully....\n";
			found++;
		}
		else
		{
			student *n=start;
			while(n!=NULL)
			{
				if(nam==n->next->name)
				{
					if(n->next->next!=NULL)
					{
						n->next=n->next->next;
						cout<<"\nNode is deleted succussfully....\n";
						found++;
						break;
					}
					else
					{
						n->next=n->next->next;
						cout<<"\nNode is deleted succussfully....\n";
						found++;
						break;
					}
				}
				else
				{
					n=n->next;
				}
			}
			if(found==0)
			{
				cout<<"\nNo node is deleted because given name is not exists...!!!\n";
			}
		}
	}
/*	void sort_rolno()
	{
		int temp;
		if(start==NULL)
		{
			cout<<"NO node exists...\n";
		}
		else
		{
			student *s=start;
			while(s!=NULL)
			{
				if(s->rolNo>s->next->rolNo)
				{
					temp=s->rolNo;
					s->rolNo=s->next->rolNo;
					s->next->rolNo=temp;
				}
				s=s->next;
			}
			display();
		}
	}*/
};
int main()
{
	int opt;
	student s;
	do
	{
		cout<<"Press 1 to Insert node : \n";
		cout<<"Press 2 to display node :\n ";
		cout<<"Press 3 to delete first node :\n";
		cout<<"Press 4 to search roll num :\n";
		cout<<"Press 5 to insert at position:\n";
		cout<<"Press 6 to delete by position :\n";
		cout<<"Press 7 to insert after Id :\n";
		cout<<"Press 8 to insert after Name :\n";
		cout<<"Press 9 to insert after CGPA :\n";
		cout<<"Press 10 to search node by position  :\n";
		cout<<"Press 11 to search node by CGPA :\n";
		cout<<"Press 12 to delete Node by ID :\n";
		cout<<"Press 13 to delete Node by Name :\n";
		cout<<"Press 0 to exit ...\n";
		cout<<"Enter your choice :";
		cin>>opt;
		switch(opt)
		{
			case 1:
				s.insertatstart();
				break;
			case 2:
				s.display();
				break;
			case 3:
				s.deleteatstart();
				break;
			case 4:
				s.searchbyRolNo();
				break;
			case 5:
				s.insertAfterpos();
				break;
			case 6:
				s.deletenodebypos();
				break;
			case 7:
				s.insertAfterId();
				break;
			case 8:
				s.insertafterName();
				break;
			case 9:
				s.insertAfterCGPA();
				break;
			case 10:
				s.searchbypos();
				break;
			case 11:
				s.searchbyCGPA();
				break;
			case 12:
				s.deleteNodebyId();
				break;
			case 13:
				s.deletenodebyname();
				break;
			case 0:
				exit(0);
			default:
				cout<<"Invalid input !!!!";
		}
	}while(opt!=0);
}
