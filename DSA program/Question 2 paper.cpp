#include<iostream>
using namespace std;
const int size=5;
struct student{
	int aridNo;
	float attend;
};
class admin
{
	student s[size];
	int top;
	public:
		admin()
		{
			top=-1;
		}
		void push(int num,float per)
		{
		
				top++;
				s[top].aridNo=num;
				s[top].attend=per;
		}
		student pop()
		{
				student t;
				t.aridNo=s[top].aridNo;
				t.attend=s[top].attend;
				top--;
				return t;
			
		}
		void shortAttendence()
		{
		   admin obj;
		   while(!isEmpty())
		   {
		   	student temp=pop();
		   	if(temp.attend<75)
		   	{
		   		
			   }
			else
			obj.push(temp.aridNo,temp.attend);
		   }
		   while(!obj.isEmpty())
		   {
		   	student t=obj.pop();
		   	push(t.aridNo,t.attend);
		   }
		}
		bool isEmpty()
		{
			if(top==-1)
			return true;
			else
			return false;
		}
		bool isFull()
		{
			if(top>=size-1)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		void display()
		{
			for(int i=0;i<=top;i++)
			{
				cout<<"\nStudent Arid Num : "<<s[i].aridNo<<endl;
				cout<<"\nStudent attendence %: "<<s[i].attend<<endl;
			}
		}
};
int main()
{
	int choice;
	int num;
	float per;
	admin obj;
	do
	{
		cout<<"\nPress 1 to push() : ";
		cout<<"\nPress 2 to shortattence() : ";
		cout<<"\nPress 3 to display() : ";
		cout<<"\nEnter a choice : ";
		cin>>choice;
		switch(choice)
		{
			case 1:
				if(obj.isFull())
				{
					cout<<"\nStack is already Full\n";
				}
				else
				{
					cout<<"\nEnter a Arid Num :";
					cin>>num;
					cout<<"\nEnter a Attendence per% : ";
					cin>>per;
					obj.push(num,per);
				}
				break;
			case 2:
				if(obj.isEmpty())
				{
					cout<<"\nStack is Empty..!!!\n";
				}
				else
				{
					obj.shortAttendence();
					cout<<"\nStudent with shortage attendance has been removed ..\n";
					
				}
				break;
			case 3:
				if(obj.isEmpty())
				{
					cout<<"\nStack is Empty..!!\n";
				}
				else
				{
				obj.display();
			  }
				break;
			default:
				cout<<"\nInvalid input....!!!\n";
		}
	}while(choice!=0);
}
