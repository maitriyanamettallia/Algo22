#include <iostream>
using namespace std;

struct kendaraan{
	string jeniskendaraan;
	int tahunproduksi;
	float harga;
};

int main(){
	kendaraan data1,data2;
	
	data1.jeniskendaraan="sedan";
	data2.jeniskendaraan="minibus";
	
	data1.tahunproduksi=2007;
	data1.harga=97.500000;
	
	data2.tahunproduksi=2012;
	data2.harga=120.500000;
	
	cout<<"data 1: "<<endl;
	cout<<"jenis kendaraan: "<<data1.jeniskendaraan<<endl;
	cout<<"tahun produksi: "<<data1.tahunproduksi<<endl;
	cout<<"harga kendaraan: "<<data1.harga<<endl;
	
	cout<<"data 2: "<<endl;
	cout<<"jenis kendaraan: "<<data2.jeniskendaraan<<endl;
	cout<<"tahun produksi: "<<data2.tahunproduksi<<endl;
	cout<<"harga kendaraan: "<<data2.harga<<endl;
	
	return 0;
}
