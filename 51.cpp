#include <iostream>
using namespace std;

int persegipanjang(int panjang,int lebar){
	int hasil;
	hasil = panjang*lebar;
	return hasil;
}

int main(){
	int p,l;
	cout<<"masukkan panjang: ";cin>>p;
	cout<<"masukkan lebar: ";cin>>l;
	cout<<"luas persegi panjang: "<<persegipanjang(p,l);
}
