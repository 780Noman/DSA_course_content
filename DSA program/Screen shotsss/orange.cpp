#include <iostream>
using namespace std;

int binarySearch(int[], int, int);
int steps=0;
int main()
{
   int apple[128];
   for(int i=0;i<128;i++)
        apple[i]=200; //200g weight
   apple[127]=250;    //last apple 250g
   
   int loc= binarySearch(apple, 0, 127);

   if(loc == -1)
   {
      cout<<"All apples are same";
   }
   else
   {
      cout<<"Heavy Apple found in the array at the location: "<<loc<<" in "<<steps<<" steps";
   }
   return 0;
}

int binarySearch(int a[], int first, int last)
{
      steps++;
      int middle = (first + last)/2;  
      int weightLeft=0;
      int weightRight=0;
      for(int i=first;i<=middle;i++)
        weightLeft+=a[i];
      for(int i=(middle+1);i<=last;i++)
        weightRight+=a[i];
      if(weightLeft == weightRight)
        return -1;
      
      if(first==last)
           return first;
      else if(weightLeft > weightRight)
           {
              return binarySearch(a,first,middle);
           }
           else
            {
                return binarySearch(a,middle+1,last);
            }
}

