#include <iostream>
using namespace std;

int main (){
	int a,b,c,d;
	cout<<"Masukkan angka: ";cin>>a;
	for (b=1; b<10; b=b+a){
		cout<<b<<" ";
	}
	cout<<endl;
	c=4;
	while (c >=0){
		cout<<a<<" ";
		a--;
		c--;
	}
	cout<<endl;
	do{
		cout<<c<<" ";
		++c;
		a++;
	} while (a<=5);
}
