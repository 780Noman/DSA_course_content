#include<iostream>
using namespace std;
class priorty_queue;
priorty_queue *start=NULL;
class priorty_queue
{
	int num;
	priorty_queue *next;
	priorty_queue *pre;
	public:
		void Enqueue()
		{
			priorty_queue *t=new priorty_queue();
			cout<<"\nEnter a Number : ";
			cin>>t->num;
			if(start==NULL)
			{
				start=t;
				t->pre=NULL;
				t->next=NULL;
			}
			else
			{
				priorty_queue *s=start;
				while(s!=NULL)
				{
					if(t->num>=s->num)
					{
						if(s->next!=NULL)
						{
							s=s->next;
						}
						else
						{
							s->next=t;
							t->pre=s;
							t->next=NULL;
							break;
						}
					}
					else
					{
						if(s->pre==NULL)
						{
							s->pre=t;
							t->next=s;
							start=t;
							t->pre=NULL;
							break;
						}
						else
						{
					        priorty_queue *temp=new priorty_queue();
		                    t->next=s;
		                    temp->next=s->pre;
		                    s->pre=t;
		                    t->pre=temp->next;
		                    s=temp->next;
		                    s->next=t;
	                        break;
						/*	t->pre=s->pre;
							t->next=s->pre->next;
							s->pre=t;
							s->pre->next=t;*/
						}
					}
				}
			}
		}
		void DeQueue()
		{
			if(start==NULL)
			{
				cout<<"\nEmpty Queue!!!\n\a";
			}
			else
			{
				priorty_queue *d=start;
				start=start->next;
				delete d;
				cout<<"\nNode deleted succussfully...\n";
			}
		}
		void display()
		{
			if(start==NULL)
			{
				cout<<"\nEmpty Queue!!!\n";
			}
			else
			{
				priorty_queue *t=start;
				while(t!=NULL)
				{
					cout<<"\nNumber is : "<<t->num<<endl;
					t=t->next;
				}
			}
		}
};
int main()
{
	priorty_queue q;
	int choice;
	do
	{
		cout<<"\n\t\t\t*********Priorty Queue**********\n";
		cout<<"\nPress 1 for EnQueue : ";
		cout<<"\nPress 2 for DeQueue : ";
		cout<<"\nPress 3 for display : ";
		cout<<"\nPress 0 for exit : ";
		cout<<"\nEnter a choice : ";
		cin>>choice;
		switch(choice)
		{
			case 1:
				q.Enqueue();
				break;
			case 2:
				q.DeQueue();
				break;
			case 3:
				q.display();
				break;
			default:
				cout<<"\nInvalid input...!!!\n";
		}
	}while(choice!=0);
	return 0;
}
