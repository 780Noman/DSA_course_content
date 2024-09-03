#include<iostream>
#include<stdlib.h>
using namespace std;
struct student
{
	string name;
	int rolno;
	float cgpa;
}s[5];
void input()
{
	for(int i=0;i<5;i++)
	{
		cout<<"Enter Data of student "<<i+1<<":"<<endl;
	cout<<"Enter a name :";
	cin>>s[i].name;
	cout<<"Enter a roll Number :";
	cin>>s[i].rolno;
	cout<<"Enter a cgpa of student:";
	cin>>s[i].cgpa;
    }
}
void show()
{
	
	for(int i=0;i<5;i++)
	{
		cout<<"Data of student of "<<i+1<<":"<<endl;
		cout<<"Name :"<<s[i].name<<endl;
		cout<<"ROll NO: "<<s[i].rolno<<endl;
		cout<<"Cgpa :"<<s[i].cgpa<<endl;
	}
}
void search()
{
	int temp;
	cout<<"Enter a roll no of student do you want to search :";
	cin>>temp;
	for(int i=0;i<5;i++)
	{
		if(temp==s[i].rolno)
		{
			cout<<"Name :"<<s[i].name<<endl;
			cout<<"Roll No :"<<s[i].rolno<<endl;
			cout<<"Cgpa :"<<s[i].cgpa<<endl;
		}
	}
}
int main()
{
	int choice;
	cout<<"Press 1 for input :"<<endl;
	cout<<"press 2 for show :"<<endl;
	cout<<"Press 3 for search :"<<endl;
    cout<<"Enter Your choice :"<<endl;
    cin>>choice;
    switch(choice)
    {
    	case 1:
    		input();
    	    break;
    	case 2:
    		show();
    		break;
    	case 3:
    		search();
    		break;
    	default:
    		cout<<"Invalid input!!!.";		
	}
}












/*	public:
		void input()
		{
			cout<<"Enter a name of student:";
			cin>>name;
			cout<<"Enter a roll No of student:";
			cin>>rolno;
			cout<<"ENter a cgpa of student :";
			cin>>cgpa;
		}
		void show()
		{
			cout<<""
		}
	
}*/
