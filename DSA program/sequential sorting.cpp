#include<iostream>
using namespace std;
void sequential_search(int *A,int size,int s_val)
{
	for(int i=0;i<size;i++)
	{
		if(s_val==A[i])
		{
			cout<<"The value "<<s_val<<" found at index ["<<i<<"] \n";
		}
	}
	
}
int main()
{
	int arr[5];
	int num;
	cout<<"Enter Array Element :\n";
	for(int i=0;i<5;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter Which value do you want to find in an array : ";
	cin>>num;
	sequential_search(arr,5,num);
	return 0;
}
