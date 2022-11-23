#include <iostream>
using namespace std;

string barang (int belanja){
	string bonus;
	if (belanja>=0 && belanja<=100000){
		bonus="buku";
	} else if(belanja>=100001 && belanja<=200000){
		bonus="topi";
	} else if(belanja>=200001 && belanja<=300000){
		bonus="kalung";
	} else if(belanja>=300001 && belanja<=400000){
		bonus="tas";
	} else if(belanja>=400001){
		bonus="sepatu";
	} else{
		bonus="tidak ada";
	}
	return bonus;
}

int main(){
	int belanja;string nama;
	cout<<"masukkan nama anda: ";cin>>nama;
	cout<<"masukkan harga belanja anda: ";cin>>belanja;
	cout<<"bonus anda adalah "<<barang(belanja)<<endl;
	cout<<"terima kasih" << nama << "sudah belanja disini. harga belanja anda adalah Rp"<<belanja<<"anda mendapatkan bonus"<<barang(belanja);
	return 0;
}
