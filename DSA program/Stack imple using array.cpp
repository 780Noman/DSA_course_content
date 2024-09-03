#include<iostream>
using namespace std;
class Stack
{
	public:
		int stack[100], val;
		int num, top;
		
		Stack()
		{
			num=100;
			top=-1;
		}
		void Insert()
		{
			if(top >= num-1)
			{
				cout<<"\nStack overflow\n";
			}
			else
			{
				top++;
				cout<<"Insert Value : ";
				cin>>val;
				stack[top]=val;
			}
		}
		void Delete()
		{
			if(top==-1)
			{
				cout<<"\nStack Underflow\n";
			}
			else
			{
				cout<<"Poped element : "<<stack[top]<<endl;
				top--;
			}
		}
		void Display()
		{
			cout<<"\n****Elements in stacks****\n";
			for(int i=top; i>=0; i--)
			{
				cout<<stack[i]<<" ";
				cout<<endl;
			}
		}
};
int main()
{
	Stack obj;
	int opt;
	
	do
	{
		int option;
		cout<<"\n----Stack using array----\n";
		cout<<"Enter 1 to insert \n";
		cout<<"Enter 2 to delete \n";
		cout<<"Enter 3 to display \n";
		cout<<"choice : ";
		cin>>option;
		
		switch(option)
		{
			case 1:
				obj.Insert();
				break;
			case 2:
				obj.Delete();
				break;
			case 3:
				obj.Display();
				break;
			default:
				cout<<"Invalid option";
				break;
		}
		cout<<"Press 1 to continue : ";
		cin>>opt;
		
	}while(opt==1);
}







