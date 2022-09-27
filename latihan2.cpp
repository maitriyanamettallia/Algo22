#include <iostream>
using namespace std;

int main(){
string pilihan,namakamar,nama; 
char sarapan;
int kamar,lamainap; 
long harga,total,totalbiaya; 
const long hargasarapan = 50000;

cout<<"hotel bahagia"<<endl;
cout<<"----------------------"<<endl;
cout<<"1. vvip (1000000)"<<endl;
cout<<"2. vip (750000)"<<endl;
cout<<"3. standard (500000) "<<endl;
cout<<"4. melati (250000)"<<endl;
cout<<"---------------------------"<<endl;

cout<<"masukan nama anda: ";getline(cin,nama);
cout<<"jenis kamar (1-4): ";cin>>kamar;

switch(kamar){
	case 1 :
		harga=1000000;
		namakamar="vvip";
		break;
	case 2:
		harga=750000;
		namakamar="vip";
		break;
	case 3:
		harga=500000;
		namakamar="standard";
		break;
	case 4:
		harga=250000;
		namakamar="melati";
		break;
		default: pilihan="nama data salah";
	}
	cout<<" lamainap : ";cin>>lamainap;
	total = lamainap * harga;
	
	cout<<"sarapan (y/n: ";cin>>sarapan;
	if (sarapan == 'y'){
		totalbiaya = (lamainap * 50000) + total;
	} else if (sarapan == 'n'){
		totalbiaya = total;
	}
	
	cout<<"---------------------------"<<endl;
	cout<<"selamat "<<nama<<endl;
	cout<<"kamar anda : "<<namakamar<<endl;
	cout<<"lama inap : "<<lamainap<<endl;
	cout<<"totalbayar : "<<totalbiaya<<endl;
}
