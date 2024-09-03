#include<iostream>
using namespace std;
void  display(int *arr,int sz)
{
	for(int i=0;i<sz;i++)
	{
		cout<<arr[i]<<"  ";
	}
}
void select_sort(int arr[],int s)
{
	int temp;
	for(int i=0;i<s;i++)
	{
		for(int j=i;j<s;j++)
		{
			if(arr[i]<arr[j])
			{
		    	 temp=arr[i];
		    	 arr[i]=arr[j];
		    	 arr[j]=temp;
			}
		}
	}
	cout<<"\nAfter decending seletion sorting the array is :\n ";
	display(arr,s);
}

int main()
{
	int size;
	cout<<"\nEnter a size of array : ";
	cin>>size;
	int arry[size];
	cout<<"\nEnter array element here : \n";
	for(int i=0;i<size;i++)
	{
		cin>>arry[i];
	}
	display(arry,size);
	select_sort(arry,size);
	return 0;
}
