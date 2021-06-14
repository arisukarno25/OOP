#include <iostream>
using namespace std;
////////////////////////////////////////////////////////////////
class corona  //Definisikan kelas corona     
{
private:
    //Definiskan member data/variabel
    char nama[40];
    int suhu;
    char pil;
    string status;
public:
    void get()      //definisikan fungsi get() untuk mengambil data sesuai dengan contoh output program pada soal
    {
    cout<<"Masukan nama: ";cin>>nama;
    cout<<"Apakah anda pernah berkunjung dengan Pasien Positif atau berkunjung ke daerah/negara endemis COVID-19 dalam 14 hari terakhir?(y/n)";
    cin>>pil;
    cout<<"Berapa suhu badan anda: ";cin>>suhu;
    /*Buat percabangan dengan 3 kondisi sebagai berikut
    1. Jika pasien pernah berinteraksi dengan penderita COVID-19 dan suhu>38 maka pasien tersebut PDP
    2. Jika pasien pernah berinteraksi dengan penderita COVID-19 dan suhu<38 maka pasien tersebut ODP
    3. Jika pasien tidak pernah berinteraksi dengan penderita COVID-19 maka pasien tersebut sehat
    output tiap kondisi ditunjukkan pada gambar contoh output program di soal*/
    if(pil=='y'&&suhu>38) 
    {
        status="PDP";
    cout<<"Anda berstatus PDP, segera periksakan diri anda ke RS rujukan COVID-19";
    }else if(pil=='y'&&suhu<38)
    {
        status="ODP";
        cout<<"Anda berstatus ODP, isolasi mandiri selama 14 hari!!!";
    }else
    {
        status="sehat";
        cout<<"Anda tidak terdampak COVID-19, Jaga diri anda, tetap di rumah saja!!!";
    }
}
    void display()  //definisikan fungsi display() untuk menampilkan rekap data seperti contoh output di soal
    {
    cout<<nama<<" memiliki suhu badan "<<suhu<<" berstatus "<<status;
    }
};
////////////////////////////////////////////////////////////////
int main()
{
corona* ptr[100];   //array of pointers untuk kelas corona
int n=0;
char P;


/*Buat perulangan untuk membuat objek dari array of pointer menggunakan operator new dan mengambil data melalui member fungsi get()*/
do
{
ptr[n]= new corona;
ptr[n]->get();
cout<<"Masukan data lain?(y/n)";
n++;
} while(P=='y');

cout<<"Rekap Data status warga"<<endl;
//Buat perulangan untuk menampilkan rekap data dengan memanggil member fungsi disply()
for(int j=0;j<n;j++)
{
ptr[j]->display();
}
cout << endl;
return 0;
} 
