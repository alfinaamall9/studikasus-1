//Alfina Amallia : 2100018240
//Fadillah Oktavia : 2100018259
//Dimas Jiyan Pangestu : 2100018265
#include <iostream>
#include <string>
using namespace std;

class Tabungan{
    public:
        int interatif();
        void akhir();

    private:
        int saku, kuliah, jajan, total, pengeluaran, i, bln;
        float sisa, tabungan, totsaku;

};
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
void Tabungan::akhir(){

  for(1-0; i<bln; i++){
    cout<<"Total pengeluaran bulan ke : "<<i+1<<" "<<pengeluaran;
  }
  cout<<"\nTotal keseluruhan uang saku selama "<<bln<<"bulan : "<<totsaku;
  cout<<"\nTotal keseluruhan pengeluaran : "<<total;
  cout<<"\nTotal tabungan : "<<tabungan;
}
int main(){
 Tabungan H;
  H.interatif();
  return 0;
}