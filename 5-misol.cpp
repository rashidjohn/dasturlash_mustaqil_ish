#include<iostream>
using namespace std;
int main(){
	int count=0, A[100][100],B[100*100],i,j,N,M;
	cout<<"Massiv satrlari sonini kiriting= "; cin>>N;
	cout<<"Massiv ustunlari sonini kiriting= "; cin>>M;
	for ( i = 0; i < N; i++)
		for ( j = 0; j < M; j++){
			cout<<"A["<<i<<","<<j<<"]="; cin>>A[i][j];
	}
 	int X;
	cout<<"X ni kiriting= "; cin>>X;
	for ( i = 0; i < N; i++ )
		for ( j = 0; j < M; j++ )
  			if ( A[i][j] == X ) {
				B[count] = A[i][j];
    			count ++;
			  }
	cout << X << " soni " << count << " marta qatnashgan" << endl;
	return 0;
}
