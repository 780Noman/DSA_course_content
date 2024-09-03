#include<iostream>
using namespace std;
int partioning(int [],int ,int);
void Quick_sort(int *A,int s,int e)
{
	if(s<e)
	{
		int p=partioning(A,s,e);
		Quick_sort(A,s,p-1);
		Quick_sort(A,p+1,e);
	}
 } 
 int partioning(int *A,int s,int e)
 {
 	int pivot=A[s];
 	int i=s-1;
 	int j=e+1;
 	while(i<j)
 	{
 	do
 	{
 		i++;
	 }while(A[i]<pivot);
	 do
	 {
	 	j--;
	 }while(A[j]>pivot);
	 if(A[i]==A[j])
	 {
	 	i++;
	 }
	 else if(i<j)
	 {
	 	int temp=A[i];
	 	A[i]=A[j];
	 	A[j]=temp;
	 }
    }
	 return j;
 }
 void display(int *A,int s)
 {
 	cout<<"\nThe array element is : \n ";
 	for(int i=0;i<s;i++)
 	{
 		cout<<A[i]<<"  ";
	 }
 }
 int main()
 {
 	int arry[5];
 	cout<<"\nEnter a Array element :\n";
 	for(int i=0;i<5;i++)
 	{
 		cin>>arry[i];
	 }
	 display(arry,5);
	 Quick_sort(arry,0,4);
	 display(arry,5);
	 return 0;
 }
