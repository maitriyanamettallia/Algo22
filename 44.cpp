#include <iostream>
using namespace std;

void hitungluassegitiga(double alas,double tinggi){
	double luas=(alas*tinggi)/2;
	cout<<"luas segitiga adalah: "<<luas<<endl;
}

int main(){
	double alas,tinggi;
	cout<<"masukkan alas: ";cin>>alas;
	cout<<"masukkan tinggi: ";cin>>tinggi;
	hitungluassegitiga(alas,tinggi);
	return 0;
}
