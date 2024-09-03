#include<iostream>
using namespace std;
struct t_array
{
	int num;
};
t_array A[50];
void Insert_in_array(int n)
{
	int i=0;
	while(true)
	{
	if(A[i].num==-1)
	{
		A[i].num=n;
		cout<<"\nValue inserted succussfully...\n";
		break;
	}
	else
     {
		if(A[i].num>n)
		{
			i=i*2+1;
		}
		else
		{
			i=i*2+2;
		}
     }
	}
}
	void InOrder_arr(int r)
	{
		if(A[r].num==-1)
		{
			return;
		}
		else
		{
			InOrder_arr(2*r+1);
			cout<<A[r].num<<endl;
			InOrder_arr(2*r+2);
		}
	}
	void PreOrder_arr(int r)
	{
	
		if(A[r].num==-1)
		{
			return;
		}
		else
		{
			cout<<A[r].num<<endl;
			PreOrder_arr(2*r+1);
			PreOrder_arr(2*r+2);
		}
	}
	void PostOrder_arr(int r)
	{
		if(A[r].num==-1)
		{
			return ;
		}
		else
		{
			PostOrder_arr(2*r+1);
			PostOrder_arr(2*r+2);
			cout<<A[r].num<<endl;
		}
	}
	void Search_Node(int v)
	{
		int i=0;
		int found=0;
		if(A[i].num==-1)
		{
			cout<<"\nEmpty Tree No Node exists...!!\n";
		}
		else
		{
			while(A[i].num!=-1)
			{
				if(A[i].num==v)
				{
					cout<<"\nValue founded succussfully...\n";
					found++;
					break;
				}
				else
				{
					if(A[i].num>v)
					{
						i=2*i+1;
					}
					else
					i=2*i+2;
				}
				/*if(A[i].num>v)
				{
					if(A[i].num==v)
					{
						cout<<"\nValue Founded at left side of tree...\n";
						found++;
						break;
					}
					else
					{
						i=2*i+1;
					}
				}
				else 
				{
					if(A[i].num==v)
					{
						cout<<"\nvalue founded at right side of tree...\n";
						found++;
						break;
					}
					else
					{
						i=2*i+2;
					}
				}*/				
			}
			if(found==0)
			{
				cout<<"\nValue Not found...!!\n";
			}
		}
	}
int main()
{
	for(int i=0;i<50;i++)
	{
		A[i].num=-1;
	}
	int choice,v;
	do
	{
		cout<<"\nPress 1 to insert : ";
		cout<<"\nPress 2 to Display InOrder LPR : ";
		cout<<"\nPress 3 to Display PreOrder PLR: ";
		cout<<"\nPress 4 to Display PostOrder LRP: ";
		cout<<"\nPress 5 to Search Element : ";
		cout<<"\nPress 0 to Exit : ";
		cout<<"\nEnter a choice : ";
		cin>>choice;
		switch(choice)
		{
			case 1:
				cout<<"\nEnter a Number : ";
				cin>>v;
				Insert_in_array(v);
				break;
			case 2:
				cout<<"\nIn_order display Tree LPR :\n";
				InOrder_arr(0);
				break;
			case 3:
				cout<<"\nPre Order Tree display PLR :\n";
				PreOrder_arr(0);
				break;
			case 4:
				cout<<"\nPost Order Tree display LRP :\n";
				PostOrder_arr(0);
				break;
			case 5:
				cout<<"\nEnter value do you want to search : \n";
				cin>>v;
				Search_Node(v);
				break;
			case 0:
				exit(0);
			default:
				cout<<"\nInvalid Input!!!\n";
		}
	}while(true);
	return 0;
}
