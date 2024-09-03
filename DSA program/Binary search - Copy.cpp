#include<iostream>
using namespace std;
void BS(int *A,int s,int e,int p)
{
	if(s<e)
	{
		int mid=(s+e)/2;
		if(p==A[mid])
		{
			cout<<"The Search value "<<p<<" is found in Array index["<<mid<<"]"<<endl;
		}
		else if(p<A[mid])
		{
			BS(A,s,mid-1,p);
		}
		else
		{
			BS(A,mid+1,e,p);
		}
	}
}
void sort(int *A,int s)
{
//Bubble sorting
   for(int i=0;i<s;i++)
    {
    	for(int j=0;j<s-i-1;j++)
    	{
    		if(A[j]>A[j+1])
    		{
    		int temp=A[j];
    		A[j]=A[j+1];
    		A[j+1]=temp;
    	    }
		}
	}

}
int main()
{
	int arr[5];
	int val;
	cout<<"Enter a element of array :\n";
	for(int i=0;i<5;i++)
	{
		cin>>arr[i];
	}
	cout<<"After sorting the input array element is :\n";
	sort(arr,5);
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<endl;
	}
	cout<<"Which value do you want to search :";
	cin>>val;
	BS(arr,0,5,val);
	return 0;

}
