#include<iostream>
using namespace std;
void sort(int *A,int s)
{
	
	for(int i=0;i<s;i++)
	{
		for(int j=i;j<s;j++)
		{
			if(A[i]>A[j])
			{
			int temp=A[i];
			A[i]=A[j];
			A[j]=temp;
		    }
		}
	}

}
void show(int *a,int s)
{
	cout<<"The array element are :\n";
	for(int i=0;i<s;i++)
	{
		cout<<a[i]<<endl;
	}
}

int main()
{
	//int arr[5]={4,2,8,1,5};
int arry[5];
cout<<"Enter a 5 element of array :"<<endl;
for(int i=0;i<5;i++)
{
	cin>>arry[i];
}
    show(arry,5);
	sort(arry,5);
	cout<<"After sorting the  array element :"<<endl;
	show(arry,5);
	return 0;
}
