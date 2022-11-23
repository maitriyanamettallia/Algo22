#include <iostream>
using namespace std;

void beratbadanideal1(double tinggi){
	double x=(tinggi-100)*0.1;
	double ideal=(tinggi-100)-x;
	cout<<"berat badan ideal adalah: "<<ideal<<endl;
}

void beratbadanideal2(double tinggi){
	double x=(tinggi-100)*0.15;
	double ideal=(tinggi-100)-x;
	cout<<"berat badan ideal adalah: "<<ideal<<endl;
}

int main(){
	double tinggi;
	char kelamin;
	cout<<"aplikasi berat badan ideal"<<endl;
	cout<<"------------------------------"<<endl;
	cout<<"masukkan jenis kelamin anda (L/P): ";cin>>kelamin;
	
	if (kelamin == 'L' || kelamin=='L'){
		cout<<"masukkan tinggi anda: ";cin>>tinggi;
		beratbadanideal1(tinggi);
	} else{
		cout<<"masukkan tinggi anda: ";cin>>tinggi;
		beratbadanideal2(tinggi);
	}
	return 0;
}
