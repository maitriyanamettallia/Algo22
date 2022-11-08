#include <iostream>
using namespace std;

struct mahasiswa{
	string nama;
	string prodi;
	float ipk;
};

int main(){
	mahasiswa mhs;
	
	mhs.nama="yodi";
	mhs.prodi="SI";
	mhs.ipk=4.0;
	cout<<"--------------------"<<endl;
	cout<<"nama anda: "<<mhs.nama<<endl;
	cout<<"prodi anda: "<<mhs.prodi<<endl;
	cout<<"IPK anda: "<<mhs.ipk<<endl;
}
