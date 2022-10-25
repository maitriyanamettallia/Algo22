#include <iostream>
using namespace std;
int main(){
	string nama;
	double a,b;
	char u;
	double c,d;
	cout<<"masukkan nama anda: "; getline(cin,nama);
	cout<<"aplikasi konversi suhu"<<endl;
	do{
		cout<<"masukkan suhu celcius: ";cin>>a;
//      rumus celcius ke fahrenhait
		c=(9*a/5)+32;
		cout<<"nilai fahrenhait nya adalah: "<<c<<endl;
		cout<<"masukkan suhu fahrenhait: ";cin>>b;
//      rumus fahrenhait ke celcius
        d= (b-32)*5/9;
		cout<<"nilainya dalam celcius adalah "<<d<<endl;
		cout<<"ulangi?(y/t): ";cin>>u;
	} while ( u == 'y' || u == 'y');
	cout<<"terima kasih "<<nama<<"karena telah menggunakan aplikasi"<<endl;
	}
	

