#include<iostream>
using namespace std;
void heap(int *arr,int s,int h)
{
	int largest=h;
	int L=2*h+1;
	int R=2*h+2;
	if(L<s && arr[L]>arr[largest])
	{
		largest=L;
	}
	if(R<s && arr[R]>arr[largest])
	{
		largest=R;
	}
	if(largest!=h)
	{
		swap(arr[h],arr[largest]);
		heap(arr,s,largest);
	}
}

void heapSort(int *arr,int s)
{
	for(int j=s/2-1;j>=0;j--)
	{
		heap(arr,s,j);
	}
	for(int j=s-1;j>=0;j--)
	{
		swap(arr[0],arr[j]);
		heap(arr,j,0);
	}
}
void display(int *arr,int s)
{
	for(int i=0;i<s;i++)
	{
		cout<<arr[i]<<"  ";
	}
}
int main()
{
	int arr[5];
	cout<<"\nEnter a five element :\n";
	int s=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<s;i++)
	{
		cin>>arr[i];
	}
	for(int j=s/2-1;j>=0;j--)
	{
		heap(arr,s,j);
	}
	display(arr,s);
	heapSort(arr,s);
	cout<<"\nAfter heap sorting : \n";
	display(arr,s);
	return 0;
	
}
