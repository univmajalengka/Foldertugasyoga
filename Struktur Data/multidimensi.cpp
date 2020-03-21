#include<iostream>
using namespace std;
int main ()
{
	int p[4][4][2] = 	{ {2,3,4,5}, {7,6,9,8}, {1,10} };
	int q[4][4][2] = 	{ {5,4,3,2}, {8,9,6,7}, {10,1} };
	int r[4][4][2];
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++)
			for(int k=0;k<2;k++){
			r[i][j][k]=p[i][j][k]+q[i][j][k];
		}
	}
	
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++)
			for(int k=0;k<2;k++){
			cout << r[i][j][k]<< " ";
		}
		cout << endl;
	}
}
