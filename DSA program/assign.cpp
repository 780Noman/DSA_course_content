#include<iostream>
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
	student *previous;
	public:
		void insertatstart()
		{
			system("CLS");
			student *T=new student();
			cout<<"Enter a roll No : ";
			cin>>T->rolNo;
			cout<<"Enter a name :";
			cin>>T->name;
			cout<<"Enter a cgpa :";
			cin>>T->cgpa;
			T->previous=NULL;
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
				cout<<"\n\n\t\t\t\t\t\t  ~~~~~~~STUDENT RECORD~~~~~~~";
				cout<<"\n\n\t\t\t\t\t***************************************************\n";
				cout<<"\t\t\t\t\t"<<"Rol No "<<"\t |   \t "<<"   Name     \t"<<" |  "<<"\tCGPA      |"<<endl;
				while(T1!=NULL)
				{
					cout<<"\t\t\t\t\t___________________________________________________\n";
					cout<<" \t\t\t\t\t"<<T1->rolNo<<"   \t |\t    "<<T1->name<<" \t |\t"<<T1->cgpa<<" \t  |"<<endl;
					T1=T1->next;
				}
				cout<<"\n\t\t\t\t\t***************************************************\n";
			}
		} 
	void deleteatstart()
	{
		system("CLS");
		 if(start==NULL )
		 {
		 	cout<<"No Node to delete....\n";
		 }
		 else
		 {
		 	student *T2=start;
		 	start=start->next;
		 	delete  T2;
		 	cout<<"\nNode is deleted succussfullay.......\n";
		 }
	}
}
