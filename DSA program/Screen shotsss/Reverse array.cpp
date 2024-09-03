#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	cout<<"\nEnter a 5 array element : \n";
	for(int i=0;i<5;i++)
	{
		cin>>arr[i];
	}
	cout<<"\nThe array element is : \n";
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<"  ";
	}
	cout<<"\nAfter reversing the array element is :\n";
	for(int i=4;i>=0;i--)
	{
		cout<<arr[i]<<"  ";
	}
	return 0;
}
