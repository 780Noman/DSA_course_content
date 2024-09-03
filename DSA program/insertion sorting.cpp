//insert an element from unsorted array to its correct position in sorted array.
#include<iostream>
using namespace std;
void insert_sort(int *arr,int n)
{
	int cur_val,j;
  for(int i=1;i<n;i++)
    {
        cur_val=arr[i];
        j=i-1;
        while(arr[j]>cur_val && j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=cur_val;        
    }	
}
int main()
{
//	int arr[]={23,2,45,4,32};
    int size,cur_val,j;
    cout<<"Enter a size of array :\n";
    cin>>size;
    int arr[size];
    cout<<"Enter a array element :\n";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    insert_sort(arr,size);
    cout<<"After insertion sorting array is :\n";
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;    
}
