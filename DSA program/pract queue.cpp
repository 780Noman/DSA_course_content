#include<iostream>
using namespace std;
class queue
{
	int que[5];
	int size;
	int front;
	int rear;
	public:
		queue()
		{
			front=-1;
			rear=-1;
			size=5;
		}
		void En_Queue()
		{
			if(rear==size-1)
			{
				cout<<"\nQueue is Overflow..!!!\n";
			}
			else
			{
				int val;
				if(front==-1)
				front=0;
				cout<<"\nEnter a Number : ";
				cin>>val;
				que[++rear]=val;
			}
		}
		void de_queue()
		{
			if(front==-1 || front>rear)
			{
				cout<<"\nQueue is Underflow...!!!\n";
			}
			else
			{
				cout<<"\nThe Element "<<que[front++]<<" has de_queue.."<<endl;
			}
		}
		void display()
		{
			cout<<"\nThe Queue element is :\n";
			for(int i=front;i<=rear;i++)
			{
				cout<<"| "<<que[i]<<" |"<<"  ";
			}
			}	
};
int main()
{
		queue q;
	int choice;
	do
	{
		cout<<"\n\t\t\t\t**********Queue Using Array************\n";
		cout<<"\n1) For insert Element in Queue :";
		cout<<"\n2) For Delete element from Queue :";
		cout<<"\n3) For Display Queue Element : ";
		cout<<"\n Please Enter Your choice : ";
		cin>>choice;
		switch(choice)
		{
			case 1:
				q.En_Queue();
				break;
			case 2:
				q.de_queue();
				break;
			case 3:
				q.display();
				break;
			default:
				cout<<"\nInvalid choice..!!!\n";
				break;
		}
		cout<<"\nPress 1 to repeat : ";
		cin>>choice;
	}while(choice==1);
	return 0;
}
