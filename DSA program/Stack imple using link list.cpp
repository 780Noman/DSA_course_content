//	Stack implementation using link list(insertion at front and deletion from front)

#include<iostream>
using namespace std;

class stack{
	public:
	int num;
	stack *next;
	stack *start=NULL;
		void insertATfront()
		{
			stack *t=new stack();
			cout<<"\nPlease Enter a Number : ";
			cin>>t->num;
			t->next=start;
			start=t;
			cout<<"\nNode inserted at Front succussfullay...\n";
		}
		void deleteFromFront()
		{
			if(start==NULL)
			{
				cout<<"\nStack is Empty!!!!\n";
			}
			else
			{
				stack *d=start;
				stack *Nodedel=d;
				start=d->next;
				delete Nodedel;
				cout<<"\nNode deleted succussfully from Front !!!!\n";
			}
		}
	int display(stack *ptr)//Some difficulty in this
	{
		if(ptr==NULL)
		{
			return 1;
		}
		else
		{
			display(ptr->next);
			cout<<ptr->num<<endl;
			
		}
	
	}
	
//	stack implementation using link list (insertion at end, deletion from end)

    void insertAtEnd()
    {
    	stack *i=new stack();
            cout<<"\nPlease Enter a Number : ";
            cin>>i->num;
            i->next=NULL;
    	if(start==NULL)
    	{
            start=i;
            cout<<"\nNode inserted succussfully....";
		}
		else
		{
			stack *f=start;
			while(f->next!=NULL)
			{
				f=f->next;
			}
			f->next=i;
			cout<<"\nNode inserted succussfully at END .. ";
		}
	}
	void deleteFromEnd()
	{
		if(start==NULL)
		{
			cout<<"\nStack is Empty....!!!\n";
		}
		else if(start->next==NULL)
		{
			stack *nodeDel=start;
			start=NULL;
			delete nodeDel;
		}
		else
		{
			stack *d=start;
			while(d->next->next!=NULL)
			{
				d=d->next;
			}
			stack *nodeDel=d->next;
			d->next=NULL;
			delete nodeDel;
			cout<<"\nNode deleted succussfully From END ... \n";
		}
	}
};
int main()
{
	stack s;
	int choice;
	do
	{
		cout<<"\n1) For Insert Node at front : ";
		cout<<"\n2) For Delete node From Front : ";
		cout<<"\n3) For Display ALL Node : ";
		cout<<"\n4) For Insert Node At END :";
		cout<<"\n5) For Delete Node From END : ";
		cout<<"\nEnter your Choice : ";
		cin>>choice;
		switch(choice)
		{
			case 1:
				s.insertATfront();
				break;
			case 2:
				s.deleteFromFront();
				break;
			case 3:
				s.display(s.start);
				break;
			case 4:
				s.insertAtEnd();
				break;
			case 5:
				s.deleteFromEnd();
				break;
		}
		cout<<"\nPress 1 to repeat : ";
		cin>>choice;
	}while(choice==1);
}
