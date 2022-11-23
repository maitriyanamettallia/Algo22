#include <iostream>
using namespace std;

int tambah(int bilangan1,int bilangan2){
	return bilangan1+bilangan2;
}

int main(){
	int a,b,c;
	
	cout<<"masukkan nilai a: ";cin>>a;
	cout<<"masukkan nilai b: ";cin>>b;
	cout<<"hasil pejumlahan: "<<tambah(a,b)<<endl;
	
	c=10+tambah(a,b);
	
	cout<<"hasil penjumlahan ditambah 10: "<<c<<endl;
	
	return 0;
}
