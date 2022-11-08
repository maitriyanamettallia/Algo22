#include <iostream>
using namespace std;

struct universitas{
	string prodi,rektor;
	int niu;
};

int main(){
	universitas u[100];
	for (int a=0;a<2;a++){
		cout<<"niu: ";cin>>u[a].niu;
		cout<<"prodi: ";cin>>u[a].prodi;
		cout<<"rektor: ";cin>>u[a].rektor;
		cout<<endl;
	}
	for (int a=0;a<2;a++){
		cout<<"niu: "<<u[a].niu<<endl;
		cout<<"prodi: "<<u[a].prodi<<endl;
		cout<<"rektor: "<<u[a].rektor<<endl;
		
	}
}
