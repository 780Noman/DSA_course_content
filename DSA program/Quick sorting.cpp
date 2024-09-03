#include<iostream>
using namespace std;

int partioning(int *A,int s,int e)
{
	int piviot=A[e];
	int i=s-1;
	int j=e+1;
	while(1)
	{
		do
		{
			i++;
		}while(A[i]<piviot);
		do
		{
			j--;
		}while(A[j]>=piviot);
	}
		if(i<j)
		{
			swap(A[i],A[j]);
		}
		else
		{
			return j;
		}
}
void Quick_sort(int *A,int s,int e)
{
	if(s<e)
	{
		int p=partioning(A,s,e);
		Quick_sort(A,s,p);
		Quick_sort(A,p+1,e);
	}
}
void display(int *A,int s)
{
	cout<<"\nThe array element is :\n";
	for(int i=0;i<s;i++)
	{
		cout<<A[i]<<"  ";
	}
}
int main()
{
	int arr[5];
	cout<<"\nEnter a array elements : \n";
	for(int i=0;i<5;i++)
	{
		cin>>arr[i];
	}
	display(arr,5);
	Quick_sort(arr,0,4);
	cout<<"\nAfter Quick sorting the array is :\n";
	display(arr,5);
	return 0;
}
