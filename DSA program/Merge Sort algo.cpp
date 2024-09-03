//Merge Sort Algorithm.
#include<iostream>
using namespace std;
void mergeArray(int A[],int,int,int);
void mergeSort(int arr[],int beg,int end)
{
	int mid;
	if(beg<end)
	{
		mid=(beg+end)/2;
		//Function recursion
		mergeSort(arr,beg,mid);
		mergeSort(arr,mid+1,end);
		mergeArray(arr,beg,mid,end);		
	}
}
void mergeArray(int A[],int beg,int mid,int end)
{
	int i=beg,k=beg,j=mid+1,B[5];
	while((i<=mid) && (j<=end))
	{
		if(A[i]<=A[j])
		{
			B[k++]=A[i++];
		}
		else
		{
			B[k++]=A[j++];
		}
	}
		while(i<=mid)
		{
			B[k++]=A[i++];
		}
		while(j<=end)
		{
			B[k++]=A[j++];
		}
	for(int i=beg;i<=end;i++)
	{
		A[i]=B[i];
	}	
}
int main()
{
	int arr[5],s=4;
	cout<<"\nEnter 5 element of array :\n";
	for(int i=0;i<5;i++)
	{
		cin>>arr[i];
	}
	cout<<"\nBefore Merge sorting the Array elements is :\n";
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<endl;
	}
	mergeSort(arr,0,s);
	cout<<"\nAfter Merge sorting the Array elements is :\n";
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<endl;
	}
	
}
