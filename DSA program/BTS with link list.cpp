#include<iostream>
using namespace std;
struct t_list
{
	int d;
	t_list *left;
	t_list *right;
};
struct t_list *root=NULL;
void Insert_In_List(int n)
{
	t_list *i=new t_list();
	i->d=n;
	i->left=NULL;
	i->right=NULL;
	if(root==NULL)
	{
		root=i;
	}
	else
	{
		t_list *r=root;
		while(true)
		{
			if(r->d>n)
			{
				if(r->left==NULL)
				{
					r->left=i;
					break;
				}
				else
				{
					r=r->left;
				}
			}
			else
			{
				if(r->right==NULL)
				{
					r->right=i;
					break;
				}
				else
				{
					r=r->right;
				}
			}
		}
	}
}
void search_list(int v)
{
	int found=0;
	if(root==NULL)
	{
		cout<<"\nTree is empty No Node exists...\n";
	}
	else
	{
		t_list *r=root;
		while(true)
		{
				if(r->d==v)
				{
					cout<<"\nValue is founded...\n";
					found++;
					break;
				}
			    else
			    {
			    	if(r->d>v)
			    	r=r->left;
			    	else
			    	r=r->right;
				}
		}
		if(found==0)
		{
			cout<<"\nNo value founded...!!!\n";
		}
	}
}
void InOrder(t_list *r)
{
	if(r==NULL)
	{
	  return;
	}
	else
	{
		InOrder(r->left);
		cout<<r->d<<endl;
		InOrder(r->right);
	}
}
void PreOrder(t_list *r)
{
	if(r==NULL)
	{
		return;
	}
	else
	{
		cout<<r->d<<endl;
		PreOrder(r->left);
		PreOrder(r->right);
	}
}
void PostOrder(t_list *r)
{
	if(r==NULL)
	{
		return;
	}
	else
	{
		PostOrder(r->left);
		PostOrder(r->right);
		cout<<r->d<<endl;
	}
}
int main()
{
	int choice,n;
	do
	{
		cout<<"\nPress 1 to Insert : ";
		cout<<"\nPress 2 to InOrder Display LPR: ";
		cout<<"\nPress 3 to PreOrder Display PLR: ";
		cout<<"\nPress 4 to PostOrder Display LRP: ";
		cout<<"\nPress 5 to Search element : ";
		cout<<"\nPress 0 to exit : ";
		cout<<"\nEnter a Choice : ";
		cin>>choice;
		switch(choice)
		{
			case 1:
				cout<<"\nEnter a Number : ";
				cin>>n;
				Insert_In_List(n);
				break;
			case 2:
				cout<<"\nIn_order display Tree LPR :\n";
				InOrder(root);
				break;
			case 3:
				cout<<"\nPre_order display Tree PLR :\n";
				PreOrder(root);
				break;
			case 4:
				cout<<"\nPost_order display Tree LRP :\n";
				PostOrder(root);
				break;
			case 5:
				cout<<"\nEnter a value do you want to search : ";
				cin>>n;
				search_list(n);
				break;
			case 0:
				exit(0);
			default:
				cout<<"\nInvalid Input...!!!!\n";
		}
	}while(choice!=0);
	return 0;
}
