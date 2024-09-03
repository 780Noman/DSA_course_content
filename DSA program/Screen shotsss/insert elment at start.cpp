//Enter a element at start of array.
#include<iostream>
using namespace std;
int main()
{
	int arry_size=6;
	int val,n=6;
	
	int arr[n]={2,3,4,5,6};
	cout<<"\nThe array element before adding value at start of array :\n";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	for(int i=n-1;n>=0;i--)
	{
		arr[i+1]=arr[i];
	}
//	n++;
	cout<<"\nEnter value do you want to insert : ";
	cin>>val;
	arr[0]=val;
	cout<<"\nAfter enter the element at start the array is : \n";
	for(int i=0;i<n;i++)
	{
		cout<<"arr["<<i<<"] ="<<arr[i]<<endl;
	}
	return 0;
}

