#include<iostream>
using namespace std;
class queue
{
	int que[5];
	int n;
	int front;
	int rear;
	public:
	queue()
	{
		front=-1;
		rear=-1;
		n=5;
	}
	void insert()
	{
	   int v;
	   if(rear==n-1)
	   {
	   	cout<<"\nQueue is Overflow\n";
	   }
	   else
	   {
	   	if(front==-1)
	   	{
    	   	front=0;
        }
	   	cout<<"\nEnter a Value please : ";
	   	cin>>v;
	   	rear++;
	   	que[rear]=v;
	   }
	}
	void deQueue()
	{
		if(front==-1 || front>rear)
	     {
	     	cout<<"\nQueue is Underflow\n";
		 }
		 else
		 {
		 	cout<<"\nElement "<<que[front]<<" Deleted...!!"<<endl;
		 	front++;
		 }
	}
	void display()
	{
		if(front==-1)
		{
			cout<<"\nQueue IS Empty...\n";
		}
		else
		{
			for(int i=front;i<=rear;i++)
			{
				cout<<que[i]<<endl;
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
		cout<<"\n\t\t\t\t**********Queue Using Array************\n";
		cout<<"\n1) For insert Element in Queue :";
		cout<<"\n2) For Delete element from Queue :";
		cout<<"\n3) For Display Queue Element : ";
		cout<<"\n Please Enter Your choice : ";
		cin>>choice;
		switch(choice)
		{
			case 1:
				q.insert();
				break;
			case 2:
				q.deQueue();
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
