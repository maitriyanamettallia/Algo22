#include <iostream>
using namespace std;

int main(){
	int A[3][4];
	int B[3][4];
	int result[3][4];
	
	cout<<"===APLIKASI PENJUMLAHAN 2 MATRIKS[3][4]===\n\n";
	
	cout<<"matriks 1\n";
	for (int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			cout<<"masukkan nilai baris ke"<<i+1<<"kolom ke "<<j+1<<":";
			cin>>A[i][j];
		}
		cout<<endl;
	}
	cout<<"matriks2\n";
	for (int i=0;i<3;i++){
		for (int j=0;j<4;j++){
			cout<<"masukkan nilai baris ke"<<i+1<<"kolom ke "<<j+1<<":";
			cin>>B[i][j];
		}
		cout<<endl;
	}
	for (int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			result[i][j]=A[i][j]+B[i][j];
		}
	}
	cout<<"hasil penjumlahan matriks: \n";
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			cout<<result[i][j]<<"\t";
		}
		cout<<endl;
	}
}
