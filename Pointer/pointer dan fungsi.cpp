#include <iostream>
using namespace std;
//program konversi dari meter ke inci dan kaki

//Definisikan fungsi mil() untuk mengalikan nilai varray
//menggunakan argumen berupa pointer
void mil(double*  aptr)
{
//Gunakan perulangan untuk mengalikan semua nilai varray
for(int i=0;i<5;i++)
    {
    //Perhitungan konversi meter ke mil
    *aptr = 39.3701;     //Gunakan aptr sebagai pointer array 
    }
}

int main()
{
//Tuliskan Prototype
void kaki(double*);
double varray[5] = { 0.1,1,10,100,1000 };
double panjang;
double arr;

cout<<"Konversi meter ke kaki"<<endl;
//Masukan nilai panjang dalam meter untuk dikonversi ke kaki, Gunakan variabel panjang
cout<<"Input panjang dalam meter: ";
cin>>panjang;
//Deklarasikan fungsi kaki() dengan variabel panjang sebagai argument untuk dilewatkan ke variabel pointer PTR
kaki(&panjang);
//tuliskan program untuk menampilkan hasil konversi 
cout<<"Hasil konversi:"<<" "<<panjang<<" kaki"<<endl;

cout<<"\nKonversi meter ke mil"<<endl;
//Deklarasikan fungsi mil() dengan variabel varray sebagai argument 
mil (&arr);
//Gunakan perulangan untuk menampilkan hasil konversi varray
for(int i=0;i<5;i++)
{
cout<<"Data ke-"<<i+1<<"= "<<varray[i]*arr<<" mil"<<endl;
}
return 0;
}
//--------------------------------------------------------------
//Definisikan fungsi kaki() dengan argumen berupa pointer PTR
void kaki(double* PTR)
{
//perhitungan konversi meter ke kaki
    *PTR *= 3.28;   //Gunakan PTR sebagai variabel pointer untuk dikalikan
}
