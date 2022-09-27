#include<iostream>
using namespace std;
int main(){
	int u;
	char lagi;
	atas:
	cout<<"masukkan umur: ";
	cin>>u;
	
	cout<<"umur anda adalah: "<<u<<endl;
	cout<<"ulang lagi (y/t): ";
	cin>>lagi;
	
	if(lagi == 'y'){
		goto atas;
	}
}
