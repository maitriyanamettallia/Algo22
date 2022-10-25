#include <iostream>
using namespace std;

int main(){
	const int MAX_ROW=3;
	const int MAX_COLUMN=4;
	
	int A[MAX_ROW][MAX_COLUMN];
	
	for (int i=0;i<MAX_ROW;i++){
		for (int j=0;j<MAX_COLUMN;j++){
			cout<<"masukkan nilai baris ke "<<i+1<<"kolom ke"<<j+1<<":";
			cin>>A[i][j];
		}
		cout<<endl;
	}
	for (int i=0;i<MAX_ROW;i++){
		for(int j=0;j<MAX_COLUMN;j++){
			cout<<A[i][j];
		}
		cout<<endl;
	}
}
