#include<iostream>
#include<string>
using namespace std;

class Book
{
	public:
		string title;
		string author;
		string publisher;
		float price;
		
		Book *next;
		Book *prev;
		
		Book *start = NULL;
		Book *end = NULL;
		
		void InsertAtStart()
		{
			Book *t = new Book();
			
			cout << " * Enter Book from Start *\n" << endl;
			cout<<"Enter book Title " << endl;
			cin >> t->title;
			cout<<"Enter book Author " << endl;
			cin>>t->author;
			cout<<"Enter book Publisher city " << endl;
			cin>>t->publisher;
			cout<<"Enter price here " << endl;
			cin>>t->price;
			cin.ignore();
			t->prev = NULL;
			t->next = NULL;
			
			if(start==NULL && end == NULL)
			{
				start = t;
				end = t;
			}
			else
			{
				Book *temp = start;
				start = t;
				temp->prev=t;
				t->next = temp;
			}
}
		
void insertbookend()
{
	Book *t = new Book();
	
	cout << "* Enter Book from End *\n" << endl;
	// Book::insertbookstart;
	cout << "Enter book Title" << endl;
	cin >> t->title;
	cout << "Enter book Author" << endl;
	cin >> t->author;
	cout << "Enter book Publisher city" << endl;
	cin >> t->publisher;
	cout << "Enter price here " << endl;
	cin >> t->price;
	cin.ignore();
			
	t->prev = NULL;
	t->next = NULL;
	if(start == NULL && end == NULL )
	{
		start = t;
		end = t;
	}
	else 
	{
		Book *temp = end;
		end->next = t;
		t->prev = temp;
		end = t;
	}
}

void deletebookstart()
{
	if(start == NULL)
	cout << "No Book exsist" << endl;
	
	else if(start->next == NULL)
	{
		Book *delbook = start;
		start = NULL;
		end = NULL;
		delete delbook;
		cout << "Book delete from First" <<endl;
	}  
	else
	{
		Book *temp = start;
		start = start->next;
		temp->next->prev = NULL;
		delete temp;
		cout << "Book delete from First\n" <<endl;
	}
}

void deletebookend()
{
	if(start == NULL)
	{
		cout << "No Book exsist" << endl;
	}
	else if(start->next == NULL)
	{
		Book *delbook = end;
		start = NULL;
		end = NULL;
		
		delete delbook;
		cout << "Book data delete from Last"  <<endl;
	}
	else
	{
		Book *temp = end;
		end = temp->prev;
		temp->prev->next = NULL;
		
		delete temp;
		cout << "Book data deleted from Last" << endl;
	}
}

void DisplayFromStart()
		{
			int n=0;				
			if(start == NULL)
			{
				cout<<"No Book Exists There" << endl;
			}
			else
			{
				Book *temp = start;
				while(temp != NULL)
				{
					cout << "Title of book is : " << temp->title << endl;
					cout << "Author of book is : " << temp->author << endl;
					cout << "Publisher of book is : " << temp->publisher << endl;					
					cout << "Price of book is : " << temp->price << endl;
					n++;
					cout<<"Book_"<<n<<endl; 
					cout <<"\n";
					temp = temp->next;		
				}
			}
}
void DisplayFromEnd()
{
		int n=0;
		Book *temp = end;
		if(end == NULL)
		{
			cout<<"No Book Exists There" << endl;
		}
		else
		{
			while(temp != NULL)
			{
				cout << "Title of book is : " << temp->title << endl;
				cout << "Author of book is : " << temp->author << endl;
				cout << "Publisher of book is : " << temp->publisher << endl;					
				cout << "Price of book is : " << temp->price << endl;
				n++;
				cout<<"Book_"<<n<<endl;
				cout <<"\n";
				temp = temp->prev;
			}
		}
}

bool Search(string Tname, string Aname)
{
	int k=0;
	if(start==NULL)
	{
		return false;
	}
	else
	{
		Book *temp = start;
		while(temp!=NULL)
		{
			if(temp->author == Aname && temp->title==Tname)
			{
				return true;
				k=1;
				break;
			}
			else
			{
				temp=temp->next;
			}
		}
		if(k==0)
		{
			return false;
		}
	}
}
void Editbooksdata(string Tname, string Aname)		
{
	int k=0;
	if(start,end==NULL)
	{
		cout<<"No data exists\n";
	}
	else
	{
		Book *temp = start;
		
		while(temp!=NULL)
		{
			if(temp->author == Aname && temp->title==Tname)
			{
				cout<<"-------Before Edit--------\n";
				cout<<"Book Title : "<<temp->title<<endl;
				cout<<"Book Author : "<<temp->author<<endl;
				cout<<"Book Publisher : "<<temp->publisher<<endl;
				cout<<"Book Price : "<<temp->price<<endl<<endl;
				cout<<"-------Edit Details----------\n";
				cout<<"Enter Authur name : ";
				cin>>temp->author;
				cout<<"Enter Title : ";
				cin>>temp->title;
				k=1;
				cout<<"\n\n-------After Edit--------\n";
				cout<<"Book Title : "<<temp->title<<endl;
				cout<<"Book Author : "<<temp->author<<endl;
				cout<<"Book Publisher : "<<temp->publisher<<endl;
				cout<<"Book Price : "<<temp->price<<endl<<endl;
				break;
			}
			else
			{
				temp=temp->next;
			}
		}
		if(k==0)
		{
			cout<<"Record dosn't match\n";
		}
		else
		{
			cout<<"Record updated\n";
		}
	}
}
	
};
int main()
{
	Book obj;
	int opt;
		string Tname,Aname;
	do
	{
		cout<<"\nEnter 1 to insert book in start\n";
		cout<<"Enter 2 to display all books from start \n";
		cout<<"Enter 3 to display all books from end \n";
		cout<<"Enter 4 to insert Book at end\n";
		cout<<"Enter 5 to delete book from start\n";
		cout<<"Enter 6 to delete book from end\n";
		cout<<"Enter 7 to edit\n"; 
		cout<<"Enter 8 to exit from program" << endl;
		
		cout<<"Choice : ";
		cin>>opt;
		
		switch(opt)
		{
			case 1:
				obj.InsertAtStart();
				break;
			case 2:
				obj.DisplayFromStart();
				break;
			case 3:
				obj.DisplayFromEnd();
				break;
			case 4:
				obj.insertbookend();
				break;
			case 5:
				obj.deletebookstart();
				break;
			case 6:
				obj.deletebookend();
				break;		
				
			case 7:
				cout << "Enter the Title here " << endl;
				cin >> Tname;
				cout << "Enter the author Here" << endl;
				cin >> Aname;
				if(obj.Search(Tname,Aname)==true)
				{
					obj.Editbooksdata(Tname,Aname);
				}
				else if(obj.Search(Tname,Aname)==false)
				{
					cout<<"Record dosen't match\n";
				}
				break;
				
			case 8: exit (0);
			default: cout << "Enter Invalid Input" << endl; 		
				break;		
		}
	}while(opt);
}

