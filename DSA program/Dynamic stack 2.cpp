#include<iostream>
using namespace std;
class stack
{
	int top;
	int v;
	int *a;
	public:
		stack()
		{
			top=-1;
		}
		void create_dynamic_ary(stack *s)
		{
			cout<<"\nEnter a size of array: ";
			cin>>s->v;
			s->a=new int[s->v];
		}
		void push(stack *s,int val)
		{
			if(s->top==s->v-1)
			{
				cout<<"\nstack is full...!!";
			}
			else
			{
				top++;
				s->a[top]=val;
			}
		}
		void pop(stack *s)
		{
			if(s->top<-1)
			{
				cout<<"\nStack is Empty!!!\n";
			}
			else
			{
				cout<<s->a[top--]<<endl;
			}
		}
};
int main()
{
	stack s;
	s.create_dynamic_ary(&s);
	s.push(&s,10);
	s.push(&s,30);
	s.push(&s,40);
	s.pop(&s);
	s.pop(&s);
	s.pop(&s);
	return 0;
}
