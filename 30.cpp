#include <iostream>
using namespace std;

int main()
{
	const int MAX_ARRAY=5;
	string nama[MAX_ARRAY];
	
	for (int i=0;i<MAX_ARRAY;++i){
		cout<<"masukkan nama : ";cin>>nama[i];
	}
	
	cout<<endl<<"===daftar nama==="<<endl;
	for(int i=0;i<MAX_ARRAY;++i){
		cout<<(i+1)<<". "<<nama[i]<<endl;
	}
	return 0;
}
