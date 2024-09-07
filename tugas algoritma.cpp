#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
cout <<"penjualan barang elektronik"<<endl;
char nabar[30];
float harga,jumlahjual,totalharga,diskon,totalbayar=0;
cout<<"nama barang=";
cin>>nabar;
cout<<"harga";
cin>>harga;
cout<<"jumlah jual";
cin>>jumlahjual;
cout<<setprecision(13);
totalharga=harga*jumlahjual;
cout<<"totalharga="<<totalharga<<endl;
diskon=0.1*totalharga;
cout<<"totalbayar="<<totalbayar<<endl;
return 0;
}
