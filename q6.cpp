#include <iostream>
using namespace std;

int main (){
	int a,b,c;
	char h;
	cout<<"Masukkan sebuah angka : ";cin>>a;
	
	if (a<5) {h = 'a';}
		else if (a>5) {h = 'b';}
		else if (a == 0) {h = 'c';}
		else {h = 'd';}
		
	switch (h){
		case 'a': cout<<"universitas";break;
		case 'b': cout<<"universal";break;
		case 'c': cout<<"kampus";break;
		case 'd': cout<<"keren";break;
		default: cout<<"Uvers kampus keren";
	}
}
