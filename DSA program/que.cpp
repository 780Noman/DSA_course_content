#include <iostream>
using namespace std;
class Queue
{
    int data;
    int front, rear;
    int size;
    int *a;

public:
    Queue()
    {
        front = rear = -1;
        cout << "Enter a array size : ";
        cin >> size;
        a = new int[size];
    }
    bool isEmpty()
    {
        if (front == -1 && rear == -1)
        {
            return true;
        }
        else
            return false;
    }
    bool isFull()
    {
        if (rear > size-1)
        {
            return true;
        }
        else
            return false;
    }
    void enqueue()
    {

        if (isFull())
        {
            cout << "\nQueue is full...\n";
        }
        else
        {
        	front=0;
            cout << "\nEnter a Number : ";
            cin >> data;
            for(int i=size-1;i>=0;i++)
            {
                a[i+1]=a[i];
            }
            a[0]=data;
            rear++;
        }
    }
    void dequeue()
    {
        if(isEmpty())
        {
            cout<<"\nQueue is Empty...\n";
        }
        else
        {
            cout<<"\nValue dequeue succussfully "<<a[rear]<<"  ;"<<endl;
            rear--;
        }
    }
};
 int main()
{
	Queue q;
	q.enqueue();
	q.dequeue();
    cout << "\nHello world...\n";
    return 0;
}
