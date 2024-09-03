//Enter element at last index of array...
#include<iostream>
using namespace std;
int main()
{
	int arr[6],i,element;
	cout<<"\nEnter a five element of array :\n";
	for(i=0;i<5;i++)
	{
		cin>>arr[i];
	}
	cout<<"\nEnter a Element do you want to insert at last index :\n ";
	cin>>element;
	arr[i]=element;
	cout<<"\nAfter inserting element in array is :\n ";
	for(i=0;i<6;i++)
	{
		cout<<arr[i]<<"  ";
	}
	return 0;	
}
