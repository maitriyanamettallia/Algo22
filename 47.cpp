#include <iostream>
using namespace std;

struct mahasiswa{
	string nim;
	string nama;
	string prodi;
	float ipk;
	
};

int main(){
	mahasiswa mhs[5];
	int jum;
	
	cout<<"aplikasi data mahasiswa"<<endl;
	cout<<"---------------------------"<<endl;
	cout<<"data mahasiswa yang ingin dimasukkan (max 5): ";
	cin>>jum;
	
	for (int i=0;i<jum;i++){
		cout<<"data mahasiswa ke-"<<i+1<<endl;
		cout<<"masukkan nama: ";cin>>mhs[i].nama;
		cout<<"masukkan nim: ";cin>>mhs[i].nim;
		cout<<"masukkan prodi: ";cin>>mhs[i].prodi;
		cout<<"masukkan ipk: ";cin>>mhs[i].ipk;	
	}
	
	system("cls");
	
	cout<<"data yang telah dimasukkan"<<endl;
	cout<<"----------------------------"<<endl;
	
	for (int i=0;i<jum;i++){
		cout<<"data mahasiswa ke-"<<i+1<<endl;
		cout<<"nama: "<<mhs[i].nama<<endl;
		cout<<"nim: "<<mhs[i].nim<<endl;
		cout<<"prodi: "<<mhs[i].prodi<<endl;
		cout<<"ipk: "<<mhs[i].ipk<<endl;	
	}
}
