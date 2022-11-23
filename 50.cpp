#include <iostream>
using namespace std;

int a(int nilai){
	return nilai;
}

int main(){
	int angka;
	cout<<"masukkan angka: ";cin>>angka;
	cout<<"angka yang dimasukkan: "<<a(angka);
}
