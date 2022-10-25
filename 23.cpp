#include <iostream>
using namespace std;

int main(){
	int umur[2000],total=0,rerata,data;
	cout<<"ingin masukkan berapa data? ";cin>>data;
	for (int a=0;a<data;a++){
cout<<"masukkan umur";
cin>>umur[a];
total=total+umur[a];
}
rerata=total/data;
cout<<"rata-rata umur : "<<rerata;
}
