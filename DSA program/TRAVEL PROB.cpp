#include <iostream>
#include <vector>
#include <cstdio>
#include <string>
#include <windows.h>
#include <string.h>
#include <conio.h>
using namespace std;

const int INF = 1e9;
int n = 0;
vector<int> result;
vector<vector<int>> dist, path;
vector<string> city_names;
int start;
int End;
class TravelSalesManProblem
{
public:
    void showShortestPath()
    {
        if (End == 0 && start == 0)
        {
            cout << "\nSource and destination still not choosed ...!!!!\nPlease choose before..." << endl;
        }
        else
        {
            floyd_warshall();
            int s = start;
            int e = End;
            while (s != e)
            {
                result.push_back(s);
                s = path[s][e];
            }
            result.push_back(e);
            cout << "Shortest path: ";
            for (int i = 0; i < result.size(); i++)
            {
                cout << city_names[result[i]] << " -> ";
            }
            cout << "FINISH" << endl;
            showTotalCost();
        }
    }
    void showTotalCost()
    {
        vector<int> result;
        if (start == 0 && End == 0)
        {
            cout << "Source and destination still not choosed ...!!!!\nPlease choose before..." << endl;
        }
        else
        {
            floyd_warshall();
            int s = start;
            int e = End;
            int total_cost = 0;
            while (s != e)
            {
                total_cost += dist[s][path[s][e]];
                result.push_back(s);
                s = path[s][e];
            }
            result.push_back(e);
            cout << "Total cost: " << total_cost << endl;
            cout << endl;
        }
    }
    void enterCityNames()
    {
        cout << "\nEnter the number of cities: ";
        cin >> n;
        dist.assign(n, vector<int>(n, INF));
        path.resize(n, vector<int>(n));
        city_names.resize(n);
        //displayMatrix();
        for (int i = 0; i < n; i++)
        {
            cout << "Enter the name of city " << i + 1 << ": ";
            cin >> city_names[i];
            path[i][i] = i;
        }
    }
    void enterDistanceMatrix()
    {
        if (n == 0)
        {
            cout << "Before you Not entered any city name   ...!!!!\nPlease Enter before..." << endl;
        }
        else
        {
            cout << "Enter the Adjacency distance matrix between the cities (Enter INF if there is no direct connection between cities):" << endl;
            cout<<endl;
            for (int i = 0; i < n; i++)
            {            
                for (int j = 0; j < n; j++)
                {
                    cout<<"Enter the distance between city  "<<city_names[i]<<" to "<<city_names[j]<<" : ";
                    cin >> dist[i][j];
                    path[i][j] = j;
                    if (i == j)
                    {
                        dist[i][j] = 0;
                    }
                }
            }
            displayMatrix();
        }
    }
    void floyd_warshall()
    {
        for (int k = 0; k < n; k++)
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (dist[i][k] != INF && dist[k][j] != INF && dist[i][k] + dist[k][j] < dist[i][j])
                    {
                        dist[i][j] = dist[i][k] + dist[k][j];
                        path[i][j] = path[i][k];
                    }
                }
            }
        }
    }
    void displayMatrix()
    {
        cout << "\nGraph Adjacency Matrix is :\n";
        cout<<"\t";
        for(int i=0;i<n;i++)
        {
            cout<<city_names[i]<<"\t";
        }
        cout<<endl;
        for (int i = 0; i < n; i++)
        {
            cout<<city_names[i]<<"\t";
            for (int j = 0; j < n; j++)
            {
                cout << dist[i][j] << "\t";
            }
            cout << endl;
        }
    }
    void enterPoints()
    {
        if (n == 0)
        {
            cout << "No city  are entered ...!!!!\nPlease Enter before..." << endl;
        }
        else
        {
            displayMatrix();
            cout << "Enter the starting city: ";
            cin >> start;
            cout << "Enter the ending city: ";
            cin >> End;
        }
    }
    void layout()
    {
      //  Sleep(2000);
        cout << "\t\t\t\t\t\t%%      %%      ";
        cout << "\n\t\t\t\t\t \t%%      %% %%%%%%% %%      %%%%%%  %%%%%% %%%%  %%%% %%%%%%%";
        cout << "\n\t\t\t\t\t \t%%      %% %%      %%      %%      %%  %% %%  %%% %% %%       ";
        cout << "\n\t\t\t\t\t \t%%  %%  %% %%%%%   %%      %%      %%  %% %%  %%% %% %%%%%      ";
        cout << "\n\t\t\t\t\t \t%%  %%  %% %%      %%      %%      %%  %% %%      %% %%           ";
        cout << "\n\t\t\t\t\t \t%%%%%%%%%% %%%%%%% %%%%%%% %%%%%%% %%%%%% %%      %% %%%%%%%     ";
        //Sleep(2000);
        cout << "\n\n\t\t\t\t\t\t \t        $$$$$$$$  $$$$$        ";
        cout << "\n\t\t\t\t\t\t \t           $$     $   $      ";
        cout << "\n\t\t\t\t\t\t \t           $$     $$$$$   \n\n ";
        //Sleep(3000);
        cout << "\t\t\t\t\t \t   *********************************************\n";
        cout << "\t\t\t\t\t\t \t    TRAVELING SALESMAN PROBLEM (TSP)  \n";
        cout << "\t\t\t\t\t \t  ********************************************** \n";
    }
    bool Login()
    {

        int count = 0;
        cout << "\n\n\n\n\n";
        cout << "\t\t\t\t\t\t\t =====================================\n\n";
        cout << "\t\t\t\t\t\t\t \t*****LOGIN PROCESS*****\n\n";
        cout << "\t\t\t\t\t\t\t =====================================\n\n";

        while (true)
        {
            char ch;
            string password, username;
            cout << "\tEnter a username :\t";
            //  cin.ignore();
            cin >> username;
            // getline(cin, username);
            cout << "\n\tEnter a password  : \t";
            cin.ignore();
            for (int i = 0; i < 5; i++)
            {
                ch = getch();
                password += ch;
                cout << "*";
            }
            count++;
            if (username == "NOMI" && password == "12345")
            {
                cout << "\n\n\tCongratulation Login successfully......\n";
                cout << "\n\n\t\tLoading";
                for (int i = 0; i < 3; i++)
                {
                 //   Sleep(1000);
                    cout << ".";
                }
                return true;
            }
            else if (username != "NOMI" && password == "12345")
            {
                cout << "\n\n\tYou enter a wrong name....!!!!\a\n";
                getch();
            }
            else if (username == "NOMI" && password != "12345")
            {
                cout << "\n\n\tYou Enter a wrong password.....!!!!!\a\n\n";
                getch();
            }
            else
            {
                cout << "\n\n\nUSERS NAME and PASSWORD both are worng....!!!!\a";
                cout << "\nPlease try again....\n\n";
            }
            if (count == 2)
            {
                cout << "\n\n\tOnly one chance remaining for login ....\n";
            }
            if (count == 3)
            {
                break;
            }
        }
        return false;
    }
    bool signUP()
    {
        char ch;
        int count = 0;
        string password, username, c_password;
        cout << "\n\n\n\n\n";
        cout << "\t\t\t\t\t\t\t =====================================\n\n";
        cout << "\t\t\t\t\t\t\t\t *****SIGNUP PROCESS*****\n\n";
        cout << "\t\t\t\t\t\t\t =====================================\n\n";
        cout << "\tEnter a username :\t";
        // getline(cin, username);
        cin >> username;
        cout << "\n\tEnter a password  : \t";
        for (int i = 0; i < 5; i++)
        {
            ch = getch();
            password += ch;
            cout << "*";
        }
        cout << "\n\n\tEnter a confirmed password :\t";
        for (int i = 0; i < 5; i++)
        {
            ch = getch();
            c_password += ch;
            cout << "*";
        }
        if (password == c_password)
        {

            cout << "\n\n\tCongratulation SignUP successfully......\n";
            cout << "\n\n\t\tLoading";
            for (int i = 0; i < 3; i++)
            {
              //  Sleep(1000);
                cout << ".";
            }
            return true;
        }
        else
        {
            while (true)
            {
                string c_password;
                cout << "\nPlease enter again confirmed password previos is wrong..!!!\n\n";
                cout << "\n\tEnter a confirmed password :\t";
                // cin.ignore();
                for (int i = 0; i < 5; i++)
                {
                    ch = getch();
                    c_password += ch;
                    cout << "*";
                }
                count++;
                if (password == c_password)
                {
                    cout << "\n\n\tCongratulation SignUP successfully......\n";
                    cout << "\n\n\t\tLoading";
                    for (int i = 0; i < 3; i++)
                    {
                        Sleep(1000);
                        cout << ".";
                    }
                    return true;
                }
                if (count == 2)
                {
                    break;
                }
                if (count = 1)
                {
                    cout << "\nYou have only one attempt of confirmed password  reserved.....\n\n";
                }
            }
            return false;
        }
        return false;
    }
    void menu()
    {
        system("cls");
        int choice;
        while (true)
        {
            cout << "\n\n\n\t\t\t\t\t\r^^^^^^^^^ To Use This APPLICATION You must have to SIGN IN ^^^^^^^^^\n"
                 << endl;
            cout << endl;
            cout << "\t\t\t\t\t\t\t |**************************| \n";
            cout << "\t\t\t\t\t\t\t | (1) PRESS 1 FOR LOGIN    |\n";
            cout << "\t\t\t\t\t\t\t | (2) PRESS 2 FOR SIGNUP   |\n";
            cout << "\t\t\t\t\t\t\t | (0) EXIT                 |\n";
            cout << "\t\t\t\t\t\t\t |**************************|\n";
            cout << "\\nEnter your choice:";
            cin >> choice;
            switch (choice)
            {
            case 1:
                if (Login())
                {
                    system("cls");
                    layout();
                    int ch;
                    while (true)
                    {
                        cout << endl;
                        cout << "\t\t\t\t\t  _______________________________________________________________ \n";
                        cout << "\t\t\t\t\t |                    ^^^^^^MAIN MENU^^^^^^^                     |\n";
                        cout << "\t\t\t\t\t |_______________________________________________________________|\n";
                        cout << "\t\t\t\t\t | (1) Press 1 to  Enter Number of city and Name :               |\n";
                        cout << "\t\t\t\t\t | (2) Press 2  to Enter source and destination :                |\n";
                        cout << "\t\t\t\t\t | (3) Press 3 to Enter distance between all city :              |\n";
                        cout << "\t\t\t\t\t | (4) Press 4 to show shortest path :                           |\n";
                        cout << "\t\t\t\t\t | (5) Press 5 to show total cost :                              |\n";
                        cout << "\t\t\t\t\t | (0) EXIT                                                      |\n";
                        cout << "\t\t\t\t\t |_______________________________________________________________|\n"
                             << endl;
                        cout << "Enter your choice : ";

                        cin >> ch;
                        switch (ch)
                        {
                        case 1:
                            enterCityNames();
                            break;
                        case 2:
                            enterPoints();
                            break;
                        case 3:
                            enterDistanceMatrix();
                            break;
                        case 4:
                            showShortestPath();
                            break;
                        case 5:
                            showTotalCost();
                            break;
                        case 0:
                            exit(0);
                        default:
                            cout << "Invalid choice ...!!!\nPlease try again...." << endl;
                        }
                    }
                }
                break;
            case 2:
                if (signUP())
                {

                    system("cls");
                    layout();
                    int ch;
                    while (true)
                    {
                        cout << endl;
                        cout << "\t\t\t\t\t  ______________________________________________________________ \n";
                        cout << "\t\t\t\t\t |                          MAIN MENU                           |\n";
                        cout << "\t\t\t\t\t |______________________________________________________________|\n";
                        cout << "\t\t\t\t\t | 1) Press 1 to  Enter Number of city and Name :               |\n";
                        cout << "\t\t\t\t\t | 2) Press 2 to Enter distance between all city :              |\n";
                        cout << "\t\t\t\t\t | 3) Press 3  to Enter source and destination :                |\n";
                        cout << "\t\t\t\t\t | 4) Press 4 to show shortest path :                           |\n";
                        cout << "\t\t\t\t\t | 5) Press 5 to show total cost :                              |\n";
                        cout << "\t\t\t\t\t | 0) EXIT                                                      |\n";
                        cout << "\t\t\t\t\t |______________________________________________________________|\n"
                             << endl;
                        cout << "Enter your choice : ";
                        cin >> ch;
                        switch (ch)
                        {
                        case 1:
                            enterCityNames();
                            break;
                        case 2:
                            enterDistanceMatrix();
                            break;
                        case 3:
                            enterPoints();
                            break;
                        case 4:
                            showShortestPath();
                            break;
                        case 5:
                            showTotalCost();
                            break;
                        case 0:
                            exit(0);
                        default:
                            cout << "Invalid choice ...!!!\nPlease try again...." << endl;
                        }
                    }
                }
                break;
            case 0:
                exit(0);
            default:
                cout << "Invalid choice ...!!!\nPlease try again..." << endl;
            }
        }
    }
};

int main()
{
    system("color 10");
   // system("color 1");
    TravelSalesManProblem project;
    project.menu();
    return 0;
}
