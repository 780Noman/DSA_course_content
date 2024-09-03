#include<iostream>
using namespace std;
class base
{
	public:
		void show()
		{
			cout<<"Base class....\n";
		}
};
class derived1:public base
{
	public:
		void show()
		{
			cout<<"Derived class 1......\n";
		}
};
class derived2:public base
{
	public:
		void show()
		{
			cout<<"Derived class 2...\n";
		}
};
int main()
{
	base *b1;
	derived1 d1;
	derived2 d2;
	b1=&d1;
	b1->show();
	d1.show();
	d2.show();
	return 0;
}
