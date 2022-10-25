#include <iostream>
using namespace std;
int main(){
	int kegantengan;
	string nama;
	cout<<"masukkan nama anda : ";cin>>nama;
	cout<<"masukkan kegantengan 1-100 :";cin>>kegantengan;
	if (kegantengan>100){
		cout<<"bukan manusia";
	} else if (kegantengan<1){
		cout<<"alien";
	}
	else if (kegantengan>85){
		cout<<"ganteng";
	} else {
		cout<<"perlu oplas";
	}
}
