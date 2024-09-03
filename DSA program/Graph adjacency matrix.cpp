#include<iostream>
using namespace std;
int vertArr[20][20]; //the adjacency matrix initially 0
int count = 0;
void displayMatrix(int v, char* N) {
	int i, j; 
	cout << "  ";
	for (i = 0; i < 6; i++)
		cout<<N[i] << " ";
	cout << endl;
	for (i = 0; i < v; i++) {
		cout << N[i] << " ";
		for (j = 0; j < v; j++) {
			
			cout << vertArr[i][j] << " ";
		}
		cout << endl;
	}
}
/*void add_edge(int u, int v) {       //function to add edge into the matrix
	vertArr[u][v] = 1;
	vertArr[v][u] = 1;
}*/
void add_edge(int u,int v)
{
	vertArr[u][v]=1;
	vertArr[v][u]=1;
}
int main() {
	int v = 6; 
	char N[6] = { 'a','b','c','d','e','f' };
	//there are 6 vertices in the graph
	add_edge(0, 4);
	add_edge(0, 3);
	add_edge(1, 2);
	add_edge(1, 4);
	add_edge(1, 5);
	add_edge(2, 3);
	add_edge(2, 5);
	add_edge(5, 3);
	add_edge(5, 4);
	displayMatrix(v, N);
}

