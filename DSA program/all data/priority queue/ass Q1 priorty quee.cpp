//Pirority Queue
#include<iostream>
using namespace std;
class Queue
{
	int arr[5];
	int rear;
	int front;
	public:
		Queue()
		{
			front=-1;
			rear=-1;
		}
		void enQueue()
		{
			if(isFull())
			{
				cout<<"\nQueue is overflow ..!!";
			}
			else
			{
				int val;
				cout<<"\nEnter a Number : ";
				cin>>val;
				if(front=-1 && rear==-1)
				{
					front=0;
					rear=0;
					arr[rear]=val;
				}
				else
				{
					int r=rear;
					while(arr[r]>val)
					{
						arr[r+1]=arr[r];
						r=(r-1)%5;
					}
					arr[r+1]=val;
					rear=(rear+1)%5;
				}
			}
		}
		void deQueue()
		{
			if(isEmpty())
			{
				cout<<"\nQueue is Underflow...!!!";
			}
			else
			{
				cout<<"\nThe Element "<<arr[front]<<" DeQueue succussfullay ....\n";
				if(front==rear)
				{
					front=-1;
					rear=-1;
				}
				else
				{
					front=(front+1)%5;
				}
			}
		}
		bool isFull()
		{
			if((rear+1)%5==front)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		bool isEmpty()
		{
			if(front==-1 && rear==-1)
			{
				return true;
			}
			else
			return false;
		}
		void display()
		{
			cout<<"\nThe Queue Element is : \n";
			for(;front!=rear;front=(front+1)%5)
			{
				cout<<arr[front]<<"  ";
			}
			cout<<arr[front];
		}
		
};
int main()
{
	Queue q;
	int choice;
	do
	{
		cout<<"\nPress 1 for Enqueue : ";
		cout<<"\nPress 2 for Dequeue : ";
		cout<<"\nPress 3 for display : ";
		cout<<"\nEnter a choice : ";
		cin>>choice;
		switch(choice)
		{
			case 1:
				q.enQueue();
				break;
			case 2:
				q.deQueue();
				break;
			case 3:
				q.display();
				break;
			default:
				cout<<"\nInvalid Input!!!";
		}
	}while(choice!=0);
	return 0;
}
// pqueue1.cpp : Defines the entry point for the console application.
//

/*//#include "stdafx.h"
#include<iostream>
#include<conio.h>
using namespace std;
class queue
{
	int a[5];
	int front;
	int rear;
public:
	queue()
	{
		front=rear=-1;
	}
	bool isempty()
	{
		if(rear==-1&&front==-1)
			return true;
		else
			return false;
	}
	bool isfull()
	{
		if((rear+1)%5==front)
			return true;
		else
			return false;
	}
	void enqueue()
	{
		if(isfull())
		{
			cout<<"error:full";
			return;
		}
		int d;
		cout<<"enter the data:";
		cin>>d;
			if(isempty())
			{
				rear=front=0;
				a[rear]=d;
			}
			else
			{
				int i=rear;
				while(a[i]>d)
				{
					a[i+1]=a[i];
					i=(i-1)%5;
				}
				a[i+1]=d;
				rear=(rear+1)%5;
			}
		cout<<d<<" has been enqueued";
	}
	void display()
	{
		if(isempty())
			cout<<"error:empty";
		else
		{
			int i=front;
			for(;i!=rear;i=(i+1)%5)
				cout<<a[i]<<" ";
			cout<<a[i];
		}
	}
	void dequeue()
	{
		if(isempty())
			cout<<"error:empty";
		else
		{
			cout<<a[front]<<" has been dequeued";
			if(front==rear)
				front=rear=-1;
			else
				front=(front+1)%5;
		}
	}
	void frontfunc()
	{	
		if(isempty())
			cout<<"error:empty";
		else
			cout<<"number "<<a[front]<<" is on the front";
	}

};

int main()
{
	queue q;
	char ch;
	do
	{
		system("cls");
	cout<<"\n1->Enqueue\n"
		<<"2->Dequeue\n"
		<<"3->front\n"
		<<"4->display\n"
		<<"5->EXIT\n";
	cout<<"Enter your choice:";
	cin>>ch;
	switch(ch)
	{
	case '1':
		q.enqueue();
		break;
	case '2':
		q.dequeue();
		break;
	case '3':
		q.frontfunc();
		break;
	case '4':
		q.display();
		break;
	case '5':
		break;
default:
	cout<<"\a\a";
	}
	getch();
	}
	while(ch!='5');
}

*/
