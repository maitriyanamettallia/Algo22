#include <iostream>
using namespace std;

int main(){
	int total_belanja;
	char member;
	cout<<"masukkan total belanja: "; cin>>total_belanja;
	cout<<"masukkan anda member? (y/t): "; cin>>member;
	if (total_belanja > 1000000){
		if (member == 'y'|| member =='y'){
			cout<<"potongan 35000"<<endl;
		} else {
			cout<<"potongan 20000"<<endl;
		}
	} else {
		cout<<"potongan 0"<<endl;
	}
}
