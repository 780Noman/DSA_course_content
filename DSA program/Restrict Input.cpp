#include<iostream>
using namespace std;
class queue
{
	int n;
	int A[5];
	int front;
	int rear;
	public:
		queue()
		{
			front=rear=-1;
			n=5;
		}
		void Enqueue()
		{
			if(rear==n-1)
			{
				cout<<"\nQueue is Full...\n";
			}
			else
			{
				int v;
				cout<<"\nEnter a value : ";
				cin>>v;
				if(rear==-1)
				{
					front=0;
					rear++;
					A[rear]=v;
				}
				else
				{
					for(int i=rear;i>=0;i--)
					{
						A[i+1]=A[i];
					}
					A[0]=v;
					rear++;
				}
			}
		}
		void display()
		{
			if(front==-1 && rear==-1)
			{
				cout<<"\nQueue is Empty....!!!\n";
			}
			cout<<"\n*****Queue Element******\n";
			for(int i=front;i<=rear;i++)
			{
				cout<<A[i]<<endl;
			}
		}
		void Dequeue()
		{
			if(front==-1 || rear==-1)
			{
				cout<<"\nQueue is Empty..!!\n";
			}
			else
			{
				cout<<"\nElement "<<A[front]<<" has been De Queue() succussfully...\n";
				for(int i=0;i<=rear;i++)
				{
					A[i]=A[i+1];
				    front=0;
				}
				
			}
		}
};
int main()
{
	queue q;
	int choice;
	do
	{
		cout<<"\n****Restricted input*****\n";
		cout<<"\nPress 1 to EnQueue: ";
		cout<<"\nPress 2 to DeQueue: ";
		cout<<"\nPress 3 to Display : ";
		cout<<"\nEnter a Choice :";
		cin>>choice;
		switch(choice)
		{
			case 1:
				q.Enqueue();
				break;
			case 2:
				q.Dequeue();
				break;
			case 3:
				q.display();
				break;
			default:
				cout<<"\nInvalid Input!!!!\n";
				
		}
	}while(choice!=0);
	return 0;
}
