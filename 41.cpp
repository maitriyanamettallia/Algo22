#include <iostream>
using namespace std;

void garis(){
	cout<<"-------------------"<<endl;
}

void say_hello(string name){
	garis();
	cout<<"hello"<<name<<endl;
}

int main(){
	say_hello("yodi");
	return 0;
}
