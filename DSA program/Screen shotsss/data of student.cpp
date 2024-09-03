#include <iostream>
using namespace std;
const int size = 2000;
struct Student {
    int AridNumber;
    float attendPercent;
};

class UIITAdmin {
    Student S[size];
    int top;
public:
    UIITAdmin(){
        top = -1;
    }
    
    void push(int n, float p){
        S[++top].AridNumber = n;
        S[top].attendPercent = p;
    }
    Student pop()
    {
        Student t;
        t.AridNumber=S[top].AridNumber;
        t.attendPercent=S[top].attendPercent;
        top--;
        return t;
    }
    void shortAttandance() {
	UIITAdmin TempObj;
        while (!isEmpty()) {
	Student  tempVar=pop();
	if(tempVar.attendPercent < 75)
           {
			//Do nothing, automatically deleted
	}
	else
			TempObj.push(tempVar.AridNumber, tempVar.attendPercent);
        }
        while (!TempObj.isEmpty()) {
			Student  tempVar=TempObj.pop();
			push(tempVar.AridNumber, tempVar.attendPercent);
        }
    }
    
    bool isEmpty() {
        if (top < 0)
            return true;
        else
            return false;
    }
    
    bool isFull() {
        if (top >= size-1 )
            return true;
        else
            return false;
    }
    
    void display() {
        for (int i = 0 ; i <= top ; i++) {
            cout << "\nStudent Arid# " << S[i].AridNumber;
            cout << "\nAttandance %age: " << S[i].attendPercent << endl;
        }
    }
};

int main( ) {
    
    UIITAdmin AttendData;
    int n, op;
    float p;
    char getc = '\0';
    
    do 
   {
        cout << "\nPress 1 to enter record"
                << "\nPress 2 to display record"
                << "\nPress 3 to remove shortage data: "; 
        cin >> op;
        switch (op) {
            case 1:{
                if(AttendData.isFull()){
                    cout << "\nStack is already full";
                }
		    else{
                    cout << "Enter Arid No: "; cin>> n;
                    cout << "Enter Attandance %age: "; cin >> p;
                    AttendData.push(n, p);
                }
            } break;
            case 2: {
                if(AttendData.isEmpty()){
                    cout << "\nStack is empty!";
                }
	    else{
                    AttendData.display();
                }
            } break;
            case 3:
                if (AttendData.isEmpty()) {
                    cout << "\nStack is empty!";
                }else{
                    AttendData.shortAttandance();
                    cout << "\nStudents with attendance shortage has been removed.";
                }
                break;
                
            default:
                cout << "\nInvalid option!";
                break;
        }
        cout << "Do you want to continue? (y/n): "; cin >> getc;
    }while(getc == 'y' || getc == 'Y');
    
    
    return 0;
}

