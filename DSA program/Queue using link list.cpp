#include<iostream>
using namespace std;
class Queue;
Queue *start=NULL;
class Queue
{
	int num;
	Queue *next;
	public:
		void En_QUEUE_FROM_FRONT()
		{
			Queue *t=new Queue();
			cout<<"\nEnter a Number Please : ";
			cin>>t->num;
			t->next=start;
			start=t;
		}
		void De_QUEUE_FROM_END()
		{
			if(start==NULL)
			{
				cout<<"\nQueue is Empty No Node exists...!!\n";
			}
			else if(start->next==NULL)
			{
				Queue *d=start;
				start=NULL;
				delete d;
				cout<<"\nNode Deleted Successfully From End...\n";	
			}
			else
			{
				Queue *d=start;
				while(d->next->next!=NULL)
				{
					d=d->next;
				}
				d->next=NULL;
				cout<<"\nNode is DELETED Successfully From End....\n";
			}
		}
		void EnQueueFromENd()
		{
			Queue *t=new Queue();
			if(start==NULL)
			{
				cout<<"\nQueue is Empty So Insert Node at Here; \n";
				cout<<"\nEnter a NUMber :";
				cin>>t->num;
				t->next=NULL;
				start=t;
				cout<<"\nNode Inserted succussfully...\n";
			}
			else
			{
				Queue *s=start;
				cout<<"\nEnter A NUMBER : ";
				cin>>t->num;
				while(s->next!=NULL)
				{
					s=s->next;
				}
				s->next=t;
				cout<<"\nNOde inserted succussfully at END ..\n";
			}
		}
		void display()
		{
			if(start==NULL)
			{
				cout<<"\nNO Node exists !!!\n";
			}
			else
			{
				Queue *s=start;
				cout<<"\nData in Queue :\n";
				while(s!=NULL)
				{
					cout<<s->num<<endl;
					s=s->next;
				}
			}
		}
	void deQUEUEfromFront()
	{
		 if(start==NULL)
		 {
		 	cout<<"No Node to Deleted Empty Queue....\n";
		 }
		 else
		 {
		 	Queue *T2=start;
		 	start=start->next;
		 	delete  T2;
		 	cout<<"\nNode is deleted succussfullay.......\n";
		 }
	}
};
int main()
{
	Queue q;
	int choice ;
	do{
	cout<<"\n1)  FOR En Queue From Front  :";
	cout<<"\n2) FOR De Queue From END :";
	cout<<"\n3) For Display : ";
	cout<<"\n4) For En Queue From END : ";
	cout<<"\n5) For De Queue from Front : ";
	cout<<"\nEnter a choice : ";
	cin>>choice;
    switch(choice)
    {
    	case 1:
    		q.En_QUEUE_FROM_FRONT();
    		break;
    	case 2:
    		q.De_QUEUE_FROM_END();
    		 break;
    	case 3:
    		q.display();
    		break;
    	case 4:
    		q.EnQueueFromENd();
    		break;
        case 5:
        	q.deQUEUEfromFront();
        	break;
    	case 0:
    		exit(1);
	}
}while(choice!=0);
}
