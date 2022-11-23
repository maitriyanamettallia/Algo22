#include <iostream>
using namespace std;

float volumebalok(double panjang,double lebar,double tinggi){
	double volume;
	volume=panjang*lebar*tinggi;
	return volume;
}

int main(){
	string nama;double panjang,lebar,tinggi;
	cout<<"aplikasi pencari volume balok"<<endl;
	cout<<"-------------------------------"<<endl;
	cout<<"masukkan nama anda: ";cin>>nama;
	cout<<"masukkan panjang balok: ";cin>>panjang;
	cout<<"masukkan lebar balok: ";cin>>lebar;
	cout<<"masukkan tinggi balok: ";cin>>tinggi;
	cout<<"volume balok yang"<<nama<<"cari adalah: "<<volumebalok(panjang,lebar,tinggi)<<"cm";
	return 0;
}
