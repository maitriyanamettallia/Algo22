#include <iostream>
using namespace std;

char huruf (int nilai){
	char hasil;
	if (nilai==100){
		hasil='A';
	} else if (nilai<100){
		hasil='B';
	} else if (nilai>100){
		hasil='X';
	}
	return hasil;
}

int main(){
	int angka;
	cout<<"masukkan angka: ";cin>>angka;
	cout<<"hurufnya: "<<huruf(angka);
}
