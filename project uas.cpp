#include <iostream>
using namespace std;

struct cafe {
	int pilih[100], jumlah [100], harga[100], hs[100], hrg[100];
	int bayar;
	string nama;
	string menu[100];
	char size[10];
};

int total (int a, int b) {
	int hargatotal;
	hargatotal = a*b;
	
	return hargatotal;
}


void menu () {
	cafe coffee;
	int i = 0;
	bool selesai=false;
	int bayar;
cout<<"	Selamat datang di Coffee Shop	"<<endl;
cout<<"==========================================="<<endl;
cout<<"||	     	   MENU  	         ||"<<endl;
cout<<"==========================================="<<endl;
cout<<"||     	   Nama           ||     Harga	 ||"<<endl;
cout<<"==========================================="<<endl;
cout<<"||1. Americano            ||	Rp.15,000||"<<endl;
cout<<"||2. Latte                ||	Rp.18,000||"<<endl;
cout<<"||3. Espresso        	  ||	Rp.20,000||"<<endl;
cout<<"||4. Cappuccino 	  ||	Rp.22,000||"<<endl;
cout<<"||5. Cheezy Toast  	  ||	Rp.30,000||"<<endl;
cout<<"||6. Crispy Chicken Toast ||	Rp.35,000||"<<endl;
cout<<"||7. Tuna Melt Toast 	  ||	Rp.38,000||"<<endl;
cout<<"||8. Egg and Chease Toast ||	Rp.32,000||"<<endl;
cout<<"==========================================="<<endl;
cout<<"Masukkan nama anda: "; getline(cin,coffee.nama);
cout<<endl;
cout<<"-Pilih minuman anda (1-8), tekan 0 jika selesai melakukan pemesanan-"<<endl;
while(selesai==false){
	cout<<"Pilih menu: "; cin>>coffee.pilih[i];
	
	if (coffee.pilih[i] <= 8) {
		if (coffee.pilih[i]==0) {
			selesai=true;
		}else {
			switch (coffee.pilih[i]) {
				case 1 : 
				coffee.menu[i]="Americano"; 
				coffee.harga[i] = 15000; 
				cout<<"Jumlah Pesanan: "; cin>>coffee.jumlah[i]; 
				cout<<"Size (S/L) [L: +Rp.5000]: "; cin>>coffee.size[i]; break;
				case 2 : coffee.menu[i]="Latte"; 
				coffee.harga[i] = 18000; 
				cout<<"Jumlah Pesanan: "; cin>>coffee.jumlah[i]; 
				cout<<"Size (S/L) [L: +Rp.5000]: "; cin>>coffee.size[i]; break;
				case 3 : coffee.menu[i]="Espresso"; 
				coffee.harga[i] = 20000; 
				cout<<"Jumlah Pesanan: "; cin>>coffee.jumlah[i]; 
				cout<<"Size (S/L) [L: +Rp.5000]: "; cin>>coffee.size[i]; break;
				case 4 : coffee.menu[i]="Cappuccino"; 
				coffee.harga[i] = 22000; 
				cout<<"Jumlah Pesanan: "; cin>>coffee.jumlah[i];
				cout<<"Size (S/L) [L: +Rp.5000]: "; cin>>coffee.size[i]; break;
				case 5 : coffee.menu[i]="Cheezy Toast"; 
				coffee.harga[i] = 30000; 
				cout<<"Jumlah Pesanan: "; cin>>coffee.jumlah[i];
				cout<<"Size (S/L) [L: +Rp.5000]: "; cin>>coffee.size[i]; break;
				case 6 : coffee.menu[i]="Crispy Chicken Toast"; 
				coffee.harga[i] = 35000; 
				cout<<"Jumlah Pesanan: "; cin>>coffee.jumlah[i];
				cout<<"Size (S/L) [L: +Rp.5000]: "; cin>>coffee.size[i]; break;
				case 7 : coffee.menu[i]="Tuna Melt Toast"; 
				coffee.harga[i] = 38000; 
				cout<<"Jumlah Pesanan: "; cin>>coffee.jumlah[i];
				cout<<"Size (S/L) [L: +Rp.5000]: "; cin>>coffee.size[i]; break;
				case 8 : coffee.menu[i]="Egg and Cheese Toast"; 
				coffee.harga[i] = 32000; 
				cout<<"Jumlah Pesanan: "; cin>>coffee.jumlah[i]; 
				cout<<"Size (S/L) [L: +Rp.5000]: "; cin>>coffee.size[i]; break;
				default : coffee.menu[i] = ""; coffee.harga[i] = 0;
			} if (coffee.size[i] == 's') {
				coffee.hs[i]= 0;
		} else if (coffee.size[i] = 'l') {
		 coffee.hs[i] = 5000;
		} else {
			coffee.hs[i] = 0;
		}
			coffee.hrg[i] = coffee.harga[i] + coffee.hs[i];
			cout<<endl; 
			i++;	
		}
	} else {
			cout<<"Menu yang dipilih tidak sesuai"<<endl;
			cout<<endl;
} 
}
system ("cls");
	cout<<"----------------------------------------------------------------------"<<endl;
	cout<<"                 STRUK PEMBAYARAN COFFEE SHOP"<<endl;
	cout<<"----------------------------------------------------------------------"<<endl;
	cout<<"Atas nama: "<<coffee.nama<<endl;
	cout<<"----------------------------------------------------------------------"<<endl;
	for (int a=0;a<i;a++){
		  cout<<a+1<<" "<<coffee.menu[a]<<endl<<"Harga: "<<coffee.hrg[a]<<endl<<"Jumlah: "<<coffee.jumlah[a]<<endl<<"Sub total:"
		  <<total(coffee.hrg[a],coffee.jumlah[a])<<endl;
		  cout<<endl;
		  	bayar += total(coffee.hrg[a],coffee.jumlah[a]);
	}
	
	
	cout<<"----------------------------------------------------------------------"<<endl;
	cout<<"Total Bayar = Rp."<<bayar<<endl;
}

int main(){
cafe coffee;
char tanya;
atas:
menu();
cout<<"Apakah Anda Ingin Memesan lagi (y/t)?";cin>>tanya;
if(tanya=='y'){
system ("cls");
goto atas;
}
else {
cout<<"TERIMA KASIH DAN SILAHKAN DATANG KEMBALI"<<endl;
cout<<"Thank You and Enjoy Your Food" <<endl;
cout<<"MERRY CHRISTMAS" <<endl;

}

}
