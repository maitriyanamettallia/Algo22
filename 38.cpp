#include <iostream>
using namespace std;

struct mahasiswa{
	string nama;
	string matakuliah;
	int nim;
	int nilaiangka;
	char nilaihuruf;
};

int main(){
	mahasiswa mhs[3];
	int i;
	for (i=0; i<3; i++){
		cout<<"Nama : ";
		cin>>mhs[i].nama;
		cout<<"NIM : ";
		cin>>mhs[i].nim;
		cout<<"Mata Kuliah : ";
		cin>>mhs[i].matakuliah;
		cout<<"Nilai : ";
		cin>>mhs[i].nilaiangka;
		cout<<endl;
	
	if (mhs[i].nilaiangka >= 0 && mhs[i].nilaiangka <= 60){
		mhs[i].nilaihuruf = 'e';	
	} else if (mhs[i].nilaiangka >= 61 && mhs[i].nilaiangka <= 75){
		mhs[i].nilaihuruf = 'D';
	} else if (mhs[i].nilaiangka >= 75 && mhs[i].nilaiangka <= 85){
		mhs[i].nilaihuruf = 'C';
	} else if (mhs[i].nilaiangka >= 86 && mhs[i].nilaiangka <= 90){
		mhs[i].nilaihuruf = 'B';
	} else if (mhs[i].nilaiangka >= 91 && mhs[i].nilaiangka <= 100){
		mhs[i].nilaihuruf = 'A';
	}
	}
	
	for (i=0; i<3; i++){
		cout<<"\nNama : "<<mhs[i].nama ;
		cout<<"\nNIM : "<<mhs[i].nim;
		cout<<"\nMata Kuliah : "<<mhs[i].matakuliah;
		cout<<"\nNilai Angka : "<<mhs[i].nilaiangka;
		cout<<"\nNilai Huruf : "<<mhs[i].nilaihuruf;
		cout<<endl;
	}
	
	return 0;
}

