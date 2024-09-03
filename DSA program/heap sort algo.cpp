#include <iostream>
using namespace std;
void heap(int arry[], int n, int h)
{
int largest = h;
int L = 2 * h + 1;
int R = 2 * h + 2;
if (L < n && arry[L] > arry[largest])
  {
  	 largest = L;
  }
if (R < n && arry[R] > arry[largest])
   {
   	largest = R;
   }
if (largest != h)
 {
swap(arry[h], arry[largest]);
heap(arry, n, largest);
}
}
void heapSort(int arr[], int i)
{
for (int j = i / 2 - 1; j >= 0; j--)
heap(arr, i, j);
for(int j = i - 1; j >= 0; j--)
{
swap(arr[0], arr[j]);
heap(arr, j, 0);
}
}
void Display(int arr[], int i)
{
for (int j = 0; j < i; ++j)
cout << arr[j] << " ";
cout <<endl;
}
int main()
{
int arry[] = { 18 ,105 ,110 ,8, 4, 1};
int n = sizeof(arry) / sizeof(arry[0]);
for(int j=n/2 -1;j>=0;j--)
{
heap(arry,n,j);
}
cout << " Array is : \n";
Display(arry, n);
heapSort(arry, n);
cout << " Array after Heap Sorted is :\n";
Display(arry, n);
return 0;
}

