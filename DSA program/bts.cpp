#include<iostream>
#include<string>
using namespace std;
struct arrary{
	int data;
};
struct link_list
{
	int data1;
	link_list* right;
	link_list* left;
};
link_list* prnt=NULL;
arrary arr[500];
void insertarr(int u)
{
	int i=0;
	while(true)
	{
	if(arr[i].data==-1)
	{
		arr[i].data=u;
		break;
	}
	else
		if(arr[i].data>u)
		{
			i=i*2+1;
		}
		else i=i*2+2;
	}

}
void insertlist(int u)
{
	link_list* y=new link_list;
	y->data1=u;
	y->right=NULL;
	y->left=NULL;
	link_list* t=prnt;
	if(t==NULL)
	{
		prnt=y;
	}
	else
	while(true)
	{
		if(t->data1>u)
		{
			if(t->left==NULL)
			{
				t->left=y;
				break;
			}
			else t=t->left;
		}
		else
		{
			if(t->right==NULL)
			{
				t->right=y;
				break;
			}
			else t=t->right;
		}

	}
}
void inorderarr(int n)
{
	if(arr[n].data==-1)
		return;
	else
	{
		inorderarr(2*n+1);
		cout<<arr[n].data<<endl;
		inorderarr(2*n+2);
	}
}
void pre_orderarr(int h)
{
	if(arr[h].data==-1)
		return;
	else
	{
		cout<<arr[h].data<<endl;
		inorderarr(2*h+1);
		inorderarr(2*h+2);
	}
}
void post_orderarr(int s)
{
	if(arr[s].data==-1)
		return;
	else
	{
		inorderarr(2*s+1);
		inorderarr(2*s+2);
		cout<<arr[s].data<<endl;
	}
}
void searchlist(int x)
{
	link_list* t=prnt;
	int f=0;
	if(t==NULL)
		cout<<"List is empty\n";
	else
	{
		while(t!=NULL)
		{
			if(t->data1==x)
			{
				cout<<"found\n";
				f=1;
				break;
			}
			else if(t->data1>x)
			 t=t->left;
			else
			 t=t->right;

		}
		if(f==0) 
		cout<<"Not found\n";
	}
}
void searcharr(int x)
{
	int i=0;
	int f=0;
	if(arr[i].data==-1)
	cout<<"tree is empty\n";
	else
	{
		while(arr[i].data!=-1)
		{
			if(arr[i].data==x)
			{
				cout<<"found at\t"<<i<<endl;
				f++;
				break;
			}
			else if(arr[i].data>x)
			 i=i*2+1;
			else 
			i=i*2+2;
		}
		if(f==0)
		cout<<"not found"<<endl;
	}
}
void inorderlist(link_list* root)
{
	if(root==NULL)
		return;
	else
	{
		inorderlist(root->left);
		cout<<root->data1<<endl;
		inorderlist(root->right);
	}

}
void pre_orderlist(link_list* root)
{
	if(root==NULL)
		return;
	else
	{
		cout<<root->data1<<endl;
		inorderlist(root->left);
		inorderlist(root->right);
	}

}
void post_orderlist(link_list* root)
{
	if(root==NULL)
		return;
	else
	{
		inorderlist(root->left);
		inorderlist(root->right);
		cout<<root->data1<<endl;
	}

}
int main()
{
	for(int i=0; i<500; i++)
	arr[i].data=-1;
	int op;
	int x,y;
	
	cout<<"Enter 1 to Binary Search  with array\n";
	cout<<"Enter 2 to Binary Search with linked list\n";
	cout<<"Enter 3 to exit\n";
	cin>>op;
	system("cls");
	switch(op)
	{
	case 1:
		do
		{
			cout<<"Enter 1 to insert node\n";
			cout<<"Enter 2 to display in inorder\n";
			cout<<"Enter 3 to display in pre-order\n";
			cout<<"Enter 4 to display in post-order\n";
			cout<<"Enter 5 to search\n";
			cout<<"Enter 6 to exit\n";
			cin>>x;
			if(x==6)break;
			switch(x)
			{
			case 1:
				cout<<"Enter number to input\n";
				cin>>y;
				insertarr(y);
				break;
			case 2:
				cout<<"Inorder\n";
				inorderarr(0);
				break;
			case 3:
				cout<<"pre-order\n";
				pre_orderarr(0);
				break;
			case 4:
				cout<<"post-order\n";
				post_orderarr(0);
				break;
			case 5:
				cout<<"Enter number to search\n";
				cin>>y;
				searcharr(y);
				break;
			default: cout<<"Invalid option\n";

			}
		}while(true);
		break;
	case 2:
		do
		{
			cout<<"Enter 1 to insert node\n";
			cout<<"Enter 2 to display in inorder\n";
			cout<<"Enter 3 to display in pre-order\n";
			cout<<"Enter 4 to display in post-order\n";
			cout<<" Enter 5 to Search\n";
			cout<<" 6 to Exit\n";
			cin>>x;
			if(x==6)break;
			switch(x)
			{
			case 1:
				cout<<"Enter number to input\n";
				cin>>y;
				insertlist(y);
				break;
			case 2:
				cout<<"Inorder\n";
				inorderlist(prnt);
				break;
			case 3:
				cout<<"pre-order\n";
				pre_orderlist(prnt);
				break;
			case 4:
				cout<<"post-order\n";
				post_orderlist(prnt);
				break;
			case 5:
				cout<<"Enter number to searc\n";
				cin>>y;
				searchlist(y);
				break;
			default: cout<<"Invalid option\n";

			}
		}while(true);


	}
	

}

