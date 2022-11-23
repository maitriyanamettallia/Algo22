#include <iostream>
using namespace std;

void volumebalok(double p,double l,double t){
	double volume=(p*l*t);
	cout<<"volume balok adalah: "<<volume<<"cm."<<endl;
}

int main(){
	double p,l,t;
	cout<<"pencari volume balok"<<endl;
	cout<<"--------------------------"<<endl;
	cout<<"masukkan panjang balok(cm): ";cin>>p;
	cout<<"masukkan lebar balok(cm): ";cin>>l;
	cout<<"masukkan tinggi balok(cm): ";cin>>t;
	volumebalok(p,l,t);
	
	return 0;
}
