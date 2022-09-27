#include <iostream>
using namespace std;

int main(){
	string nama,prodi,predikat;
	float uts,tugas,uas,nr;
	char nh;
	
	cout<<"masukan nama anda : "; getline(cin,nama);
//	cout<<"masukan prodi anda : "; cin>>prodi;
	cout<<"masukan nilai tugas : "; cin>>tugas;
	cout<<"masukan nilai uts : "; cin>>uts;
	cout<<"masukan nilai uas : "; cin>>uas;
	cout<<"-------------------" <<endl;
	
	cout<<"selamat "<<nama<<endl;
	
	nr = (tugas + uts + uas) / 3;
	
	cout<<"nilai anda (tgs+uts+uas)/3: "<<nr<<endl;
	
	if (nr >0 && nr<=20){
		nh = 'E';
	} else if (nr>21 && nr<=40){
		nh = 'D';
	} else if (nr>41 && nr<=60){
		nh = 'C';
	} else if (nr>61 && nr<=80){
		nh = 'B';
	} else if (nr>81 && nr<=100){
		nh = 'A';
	} else {
		cout<<'X';
	}
	cout<<"nilai huruf : "<<nh<<endl;
	
	switch (nh){
		case 'A' : cout<< "Predikat : Sangat baik";break;
		case 'B' : cout<<"Predikat : Baik"; break;
		case 'C' : cout<<"Predikat : Cukup"; break;
		case 'D' : cout<<"Predikat : Kurang"; break;
		case 'E' : cout<<"Predikat : Kurang Baik"; break;
		default: cout<<"Error"; break;
	
	}

}
