
// ht.cpp : Defines the entry point for the console application.
//

//#include"stdafx.h"
#include<iostream>
#include<conio.h>
using namespace std;
struct priorityquee
{
int val;
priorityquee *next,*pre;

};
priorityquee *start=NULL;
void enquee()
{
priorityquee *a=new priorityquee;
cout<<"enter id";
cin>>a->val;
if(start==NULL)
{
start=a;
a->pre=NULL;
a->next=NULL;
}
else
{
priorityquee *b=start;
while(b!=NULL)
{
	if(a->val>=b->val)
	{
		if(b->next!=NULL)
			b=b->next;
		else
		{
			b->next=a;
			a->pre=b;
			a->next=NULL;
		break;
		}
	}
        else
	{
		if(b->pre==NULL)
		{
		a->pre=NULL;
		a->next=b;
		start=a;
		b->pre=a;
		break;
		}
		else
		{
		priorityquee *temp=new priorityquee;
		a->next=b;
		temp->next=b->pre;
		b->pre=a;
		a->pre=temp->next;
		b=temp->next;
		b->next=a;
	break;
		}
	
	}
}
}
}
void dquee()
{
priorityquee *h=new priorityquee;
h=start;
if(start==NULL)
cout<<"\nempty";
else
{
start=h->next;
cout<<"\ndqueed successfully";
system("pause");
}


}
void display()
{
priorityquee *a=start;
if(start==NULL)
cout<<"\nempty";
else
{
while(a!=NULL)
{
cout<<"\nvalue ="<<a->val<<endl;
a=a->next;
}
system("pause");
}
}
int main()
{
int n;
do
{system("cls");
cout<<"1->Enquee\n2->Dquee\n3->display\n4->exit";
cin>>n;
if(n==1)
enquee();
else
if(n==2)
dquee();
else
if(n==3)
display();
}
while(n!=4);
getch();
}
