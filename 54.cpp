#include <iostream>
using namespace std;

void cetak(string kata){
	cout<<"hasil: "<<kata<<endl;
}

void cetak (int angka){
	cout<<"hasil: "<<angka<<endl;
}

void cetak (double b){
	cout<<"hasil: "<<b<<endl;
}
int main(){
	string nama;
	cout<<"masukkan nama: "; cin>>nama;
	cetak(nama);
	cetak(100);
	cetak(10.5);
}
