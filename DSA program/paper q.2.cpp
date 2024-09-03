#include<iostream>
using namespace std;
class data;
data *start=NULL;
class data
{
	int num;
	data *next;
	public:
		void insert_data()
		{
			int count=0;
			if(start==NULL)
			{
				data *t=new data();
				cout<<"\nEnter a NUM :\n";
				cin>>t->num;
				t->next=NULL;
				start=t;
			}
			else
			{
				data *i=start;
				while(i!=NULL)
				{
				   count++;
				   if(count==2);
			        {  
				       data *t1=new data();
				       cout<<"\nEnter a Num :\n";
				       cin>>t1->num;
				       t1->next=i->next;
				        i->next=t1;
				        break;
		    	    }
		    	    i=i->next;
[[]]		    	}
		}
	}
		void display()
		{
			data *d=start;
			while(d!=NULL)
			{
				cout<<"Num is : "<<d->num<<endl;
				d=d->next;
			}
		}
};
int main()
{
	data obj;
	int choice;
	do{
		cout<<"\nPress 1 to insert data ;: ";
		cout<<"\nPress 2 to display data : ";
		cout<<"\nEnter a choice : ";
		cin>>choice;
		switch(choice)
		{
			case 1:
				obj.insert_data();
				break;
			case 2:
				obj.display();
				break;
			case 0:
				exit(1);
			default:
				cout<<"\nInvalid input!!!\n";
		}
	}while(choice!=0);
	return 0;
}
