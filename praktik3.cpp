#include <iostream>
using namespace std;

int main (){
	int pil; float a,b,c;
	cout<<"kalkulator canggih"<<endl;
	cout<<"1. penjumlahan"<<endl;
	cout<<"2. penggurangan"<<endl;
	cout<<"3. perkalian"<<endl;
	cout<<"4. pembagian"<<endl;
	cout<<"5. modulus"<<endl;
	cout<<"--------------------------------"<<endl;
	cout<<"masukkan pilihan anda (1-5): "; cin>>pil;
	switch (pil){
		case 1: cout<<"masukkan angka pertama: "; cin>>a;
		cout<<"masukkan angka kedua: "; cin>>b;
		c= a+b;
		cout<<"hasil penjumlahan: "<<c<<endl;
		break; 
		case 2: cout<<"masukkan angka pertama: "; cin>>a;
		cout<<"masukkan angka kedua: "; cin>>b;
		c= a-b;
		cout<<"hasil penggurangan: "<<c<<endl;
		break;
		case 3: cout<<"masukkan angka pertama: "; cin>>a;
		cout<<"masukkan angka kedua: "; cin>>b;
		c= a*b;
		cout<<"hasil perkalian: "<<c<<endl;
		break;
		case 4: cout<<"masukkan angka pertama: "; cin>>a;
		cout<<"masukkan angka kedua: "; cin>>b;
		c=a/b;
		cout<<"hasil pembagian: "<<c<<endl;

		default: cout<<"masih tahap perkembangan. pilih 1 atau 2"<<endl;
		break;

	}
}
