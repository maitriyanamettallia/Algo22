#include <iostream>
using namespace std;

float beratbadanideal (string nama,double tinggi){
	double ideal;
	double a = (tinggi - 100)* 0.15;
	ideal = (tinggi - 100)-a;
	return ideal;
}

int main(){
	string nama;double tinggi;
	cout<<"aplikasi penghitung berat badan ideal wanita"<<endl;
	cout<<"------------------------------------------"<<endl;
	cout<<"masukkan nama anda: ";cin>>nama;
	cout<<"masukkan tinggi badan anda: ";cin>>tinggi;
	cout<<"berat badan ideal "<<nama<<" adalah "<<beratbadanideal(nama,tinggi);
}
