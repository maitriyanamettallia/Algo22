#include <iostream>
using namespace std;

int main (){
	int a,b;
	
	cout<<"Masukkan a : ";cin>>a;
	cout<<"Masukkan b : ";cin>>b;
	
	cout<<a<<" | "<<b<<" = "<<(a|b)<<endl;
	cout<<a<<" & "<<b<<" = "<<(a&b)<<endl;
	cout<<a<<" ^ "<<b<<" = "<<(a^b)<<endl;
	cout<<a<<" << "<<b<<" = "<<(a<<b)<<endl;
	cout<<a<<" >> "<<b<<" = "<<(a>>b)<<endl;
	cout<<" ~ "<<a<<" = "<<(~a)<<endl;
}
