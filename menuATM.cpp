#include <iostream>//MENU ATM
using namespace std;
int main(){
	int menu;
	cout<<"pilih menu"<<endl;
	cout<<"1 Tarik Dana"<<endl;
	cout<<"2 Transfer Dana"<<endl;
	cout<<"3 Lihat Saldo"<<endl;
	cout<<"Masukkan Pilihan Anda:";
cin>>menu;
if(menu==1){
	cout<<"Anda Memilih Tarik Dana";
}
else if(menu==2){
	cout<<"Anda Memilih Transfer Dana";
}
else if(menu==3){
	cout<<"Lihat Saldo";
}
else {
	cout<<"Pilihan Tidak Ada";
}
return 0;}
