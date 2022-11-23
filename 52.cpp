#include <iostream>
using namespace std;

float luasling(float r){
	return 3.14*r*r;
}

float volker (float r,float t){
	return luasling(r)*t/3;
}

int main(){
	float a,b,c;
	cout<<"masukkan jari-jari: ";cin>>a;
	cout<<"luas lingkaran: "<<luasling(a)<<endl;
	
	cout<<"masukkan tinggi: ";cin>>b;
	
	c=luasling(a)*b/3;
	cout<<"volume kerucut: "<<c<<endl;
	
	cout<<"volume kerucut dengan fungsi: "<<volker(a,b);
	
}
