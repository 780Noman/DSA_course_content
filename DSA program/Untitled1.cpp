#include<iostream>
#include<string>
using namespace std;
class student //userdefine data type /entity
{
	//data member
	string name;
	int rolno;
	public://specifier
	    student()//by default
	    {
	    	name='\0';
	    	rolno=0;
		}
		student(string n,int id)
		{
			name=n;
			rolno=id;
			
		}
		//method
		void input(int sddr)
		{
			cout<<"enter a name:";
			//cin>>name;
			getline(cin,name);
			cout<<"enter a roll no: ";
			cin>>rolno;
		}
		void display()
		{
			cout<<"Name: "<<name<<endl;
			cout<<"ROll NO: "<<rolno<<endl;
		}
};
int main()
{
	student obj;
	obj("Ali",10)
	for(int i=0;i<5;i++)
	obj.input();
	for(int i=0;i<5;i++)
	obj.display();
	return 0;
}
