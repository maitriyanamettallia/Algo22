#include <iostream>
using namespace std;

int main(){
	int i=0;
	do while (i<10){
		if(1==7){
			break;
		}
		cout<<i<<" ";i++;
	}
	
	cout<<endl<<"------------------------"<<endl;
while (int a=0; a<10;a++)	{
	if(a%2==0){
		continue;
	}
	cout<<a<<" ";
}
return 0;
}
