#include<iostream>
using namespace std;
int main()
{
	int arr[5]={4,21,8,1,5};
	//Bubble sorting
   for(int i=0;i<5;i++)
    {
    	for(int j=0;j<4;j++)
    	{
    		if(arr[j]>arr[j+1])
    		{
    		int temp=arr[j];
    		arr[j]=arr[j+1];
    		arr[j+1]=temp;
    	    }
		}
	}
	cout<<"The array element are :\n";
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<endl;
	}
	return 0;
}
