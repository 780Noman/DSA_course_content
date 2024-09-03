#include<iostream>
using namespace std;
void display(int *ary,int s)
{
	for(int i=0;i<s;i++)
	{
		cout<<ary[i]<<"  ";
	}
}
void bubble_sort(int arr[],int size)
{
	int temp;
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size;j++)
		{
			if(arr[j]<arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	cout<<"\nAfter BUBBLE SORT the array is :\n ";
	display(arr,size);
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
	bubble_sort(arry,size);
}
