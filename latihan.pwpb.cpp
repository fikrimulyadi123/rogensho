#include <iostream>

using namespace std;

int main()
{ 
 // Deklarasi variabel
 int indomie, tehpucuk, Dict, Marker, Calc;
 float Book, Stat, Disc, FixBook, FixStat;
 
 // Menampilkan daftar harga
 cout<<"\n\t\t=== Daftar barang beserta harganya ==="<<endl;
 cout<<"\t\t| indomie : Rp 10000 |"<<endl;
 cout<<"\t\t| teh pucuk         : Rp 7000|"<<endl;
 cout<<"\t\t| Dictionary         : Rp  55.000,00 |"<<endl;
 cout<<"\t\t| WhiteBoard Marker  : Rp  10.000,00 |"<<endl;
 cout<<"\t\t| Calculator         : Rp  35.000,00 |"<<endl;
 cout<<"\t\t======================================\n"<<endl;
 
cout<<"\n\t\t=== makanan/minuman==="<<endl;
 cout<<"Masukkan indomie yang dibeli                   : "; cin>>indomie;
 cout<<"Masukkan tehpucuk yang dibeli                  : "; cin>>tehpucuk;
 cout<<"Masukkan jumlah Dictionary yang dibeli         : "; cin>>Dict;
 cout<<"Masukkan jumlah Whiteboard Marker yang dibeli  : "; cin>>Marker;
 cout<<"Masukkan jumlah Calculator yang dibeli         : "; cin>>Calc;
 cout<<"\n"<<endl;
 
 // Menampilkan customer's bill
 cout<<"\t========================== Customer's BILL =========================="<<endl;
 cout<<"\t| Jumlah \tDeskripsi \t\tHarga Satuan \tTotal Harga |"<<endl;
 cout<<"\t| ------ \t--------- \t\t------------ \t----------- |"<<endl;
 cout<<"\t|   "<<indomie<<"\t\t indomie \t105000 \t\t"<<indomie*105000<<"\t    |"<<endl;
 cout<<"\t|   "<<tehpucuk<<"\t\ttehpusuk \t\t188000 \t\t"<<tehpucuk*188000<<"\t    |"<<endl;
 cout<<"\t|   "<<Dict<<"\t\tDictionary \t\t55000 \t\t"<<Dict*55000<<"\t    |"<<endl;
 cout<<"\t|   "<<Marker<<"\t\tWhiteboard Marker \t10000 \t\t"<<Marker*10000<<"\t    |"<<endl;
 cout<<"\t|   "<<Calc<<"\t\tCalculator \t\t35000 \t\t"<<Calc*35000<<"\t    |"<<endl;
 cout<<"\t| ----------------------------------------------------------------- |"<<endl;
 Book = indomie*105000+tehpucuk*188000;
 Disc = 6.25/100*Book;
 Stat = Dict*55000+Marker*10000+Calc*35000;
 cout<<"\t|\t\t\tHarga Total Buku \t: "<<Book<<"\t    |"<<endl;
 cout<<"\t|\t\t\tPotongan Harga \t\t: "<<Disc<<"   \t    |"<<endl;
 cout<<"\t|\t\t\tHarga Setelah Diskon \t: "<<Book-Disc<<"\t    |"<<endl;
 FixBook = Book-Disc;
 Disc = 3.00/100*Stat;
 cout<<"\t|\t\t\tHarga Total Stationary \t: "<<Stat<<"  \t    |"<<endl;
 cout<<"\t|\t\t\tPotongan Harga \t\t: "<<Disc<<"   \t    |"<<endl;
 cout<<"\t|\t\t\tHarga Setelah Diskon \t: "<<Stat-Disc<<"   \t    |"<<endl;
 FixStat = Stat-Disc;
 cout<<"\t|\t\t\t------------------------------------------- |"<<endl;
 cout<<"\t|\t\t\tTotal Pembayaran \t: "<<FixBook+FixStat<<"\t    |"<<endl;
 cout<<"\t====================================================================="<<endl;
}
