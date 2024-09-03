#include<iostream>
#include<windows.h>
#include<string>
#include<conio.h>
using namespace std;

struct data
{
	string id,adress,name,
     contact,salary;
};
data e[1000];
int total=0,i,j;
void empdata()
{
	int choice;
	cout<<"Please Enter your data for registration :"<<endl;
	for(i=total;i<total+choice;i++)
	{
		cout<<"Enter data here :  "<<i+1<<endl<<endl;
		cout<<" Name: ";
		cin.ignore();
		getline(cin,e[i].name);
		cout<<"Card ID: ";
		cin>>e[i].id;
		cout<<"Email Address: ";
		cin>>e[i].adress;
		cout<<"contact No : ";
		cin>>e[i].contact;
	}
	total=total+choice;
	
}
