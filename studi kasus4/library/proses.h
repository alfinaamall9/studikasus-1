#include <iostream>
#include <string>

using namespace std;
int Tabungan::interatif(){
  total =0;
  tabungan =0;
  cout<<"Masukkan uang saku : ";
  cin>>saku;
  cout<<"Masukkan bulan :";
  cin>>bln;

    for(i=0; i<bln; i++){
      cout<<"\nMasukkan pengeluaran bulan ke-";
      cin>>kuliah;
      cout<<"Masukkan biaya jajan :";
      cin>>jajan;
    totsaku - saku*bln;
      pengeluaran - kuliah + jajan;
      total = total + pengeluaran;
      sisa - saku - pengeluaran;
      cout<<"\nSisa uang saku bulan ke :"<<i+1<<" - "<<sisa;
      tabungan=tabungan+sisa;
      cout<<endl;
    }
  akhir();
  return 0;
}