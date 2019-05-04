#include<iostream>
#include<stdlib.h>
#include<windows.h>
using namespace std;

main(){
system("color a");
char mem;
float dis,disc;
string id,idn,nm,nb[20];
int du,jml,hb[20],jb[30],tot1,tot2=0;
string nama[10];


cout<<"apakah Anda member atau non : ";cin>>mem;
if(mem=='y'||mem=='Y')
{
    cout<<"inputkan No identitas : ";cin>>idn;
system("cls");

 if(idn=="A001"){
    cout<<"No. identitas : "<<idn<<endl;
    cout<<"Nama          : "<<nama[0]<<endl;
}
else if(idn=="A002"){
    cout<<"No. identitas : "<<idn<<endl;
    cout<<"Nama          : "<<nama[1]<<endl;
}
else if(idn=="A003"){
    cout<<"No. identitas : "<<idn<<endl;
    cout<<"Nama          : "<<nama[2]<<endl;
}
else if(idn=="A007"){
    cout<<"No. identitas : "<<idn<<endl;
    cout<<"Nama          : "<<nama[3]<<endl;
}
else if(idn=="A008"){
    cout<<"No. identitas : "<<idn<<endl;
    cout<<"Nama          : "<<nama[4]<<endl;
}

}

else if(mem=='t'||mem=='T')
{
    cout<<"Masukkan Nama : ";cin>>nama[0];
    cout<<"No Identitas  : ";cin>>idn;
    cout<<endl;
}

cout<<"Berapa Jumlah Barang : ";cin>>jml;cout<<endl;
for(int i=0;i<jml;i++){
    cout<<"Barang ke - "<<i+1<<endl;
    cout<<"Masukkan Nama Barang   : ";cin>>nb[i];
    cout<<"Masukkan Jumlah barang : ";cin>>jb[i];
    cout<<"masukkan Harga Barang  : ";cin>>hb[i];
    cout<<endl;

tot1=jb[i]*hb[i];
tot2=tot2+tot1;
}
cout<<"Total Harga : "<<tot2<<endl;
if(mem=='y'||mem=='Y'){
    dis=5/(float)100;

    cout<<"Diskon Anda Adalah : "<<disc<<endl;
    cout<<"Total Yang Harus Dibayar :"<<tot2-disc<<endl;
cout<<"Masukkan Uang : ";cin>>du;
cout<<"kembalian     : "<<du-(tot2-disc);

}

else if(mem=='t'||mem=='T'){
        cout<<"Anda tidak Dapat Discon "<<endl;
  cout<<"Masukkan Uang : ";cin>>du;
   cout<<"kembalian     : "<<du-tot2;
}

}
