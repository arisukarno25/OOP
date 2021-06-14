#include <iostream>
#include <fstream>
#include <string>
using namespace std;
////////////////////////////////////////////////////////////////
//Membuat Kelas
class zakatmal
{
private:
    //Deklarasikan variabel
    char nama[100];
    int i, nishab;
    float tabungan[4], total;
    float bayar, sisa;
public:
    void pengenalan()
	{
		cout<<"Sekilas Zakat Mal "<<endl;
		cout<<"1. Zakat mal hukumnya wajib bagi yang memiliki harta diatas nishab"<<endl;
		cout<<"2. Zakat mal berlaku jika orang sudah terbebas dari hutang"<<endl;
		cout<<"3. Zakat mal berlaku jika kepemilikan hartanya sudah mencapai 1 tahun"<<endl;
		cout<<"=> tekan enter untuk memulai";
	}
	//Buat member fungsi untuk input data
    void getdata()
    {
    //input nama
    cin.ignore();   //untuk membersihkan buffer
    cout<<endl;
    cout<<"Masukan nama : ";
    cin.getline(nama,20);
    //Gunakan Pengulangan untuk input tugas 1-4
    for (i=0;i<4;i++)
    {
        cout<<"Masukan tabungan ke-"<<i+1<<" : Rp. ";
        cin>>tabungan[i];
    }
    }
    //Buat member fungsi untuk menampilkan data
    void display()
    {
    //Tampilkan nama
    cout<<"Nama : " <<nama<<endl;
    //buat pengulangan untuk tampilkan tugas
    for (i=0;i<4;i++)
    {
        cout<<"Tabungan Tahun ke-"<<i+1<<" : "<<tabungan[i]<<endl;
    }
    //Tampilkan rata-rata
    total=tabungan[0]+tabungan[1]+tabungan[2]+tabungan[3];
	cout<<"Jumlah total tabungan Anda : Rp."<<total<<endl;
    }
    void bayar_zakat()
    {
    	nishab=68000000;
		if (total>=nishab)
		{
    	bayar=0.025*total;
    	cout<<"Jumlah bayar zakat Anda : Rp."<<bayar<<endl;
    	sisa=total-bayar;
		cout<<"=> Rincian zakat mal Anda"<<endl;
		cout<<"Rp. "<<total<<" - "<<"Rp. "<<bayar<<" : Rp. "<<sisa<<endl;
		}
		else
    	{
    		cout<<"Anda belum wajib zakat"<<endl;
		}
	}
};
////////////////////////////////////////////////////////////////
int main()
{
zakatmal S1;       //Membuat objek
fstream data;       //Membuat objek stream
int n=0;
int j=1;
char pilihan;
//Membuka file disk dan Mengatur Mode bit
data.open("18101041.txt", ios::app|ios::out|
                          ios::in|ios::binary);
S1.pengenalan();
cin.ignore();
system("CLS");
//memmbuat pengulangan untuk input objek
cout<<"======================================"<<endl;
cout<<"|       PERHITUNGAN ZAKAT MAL        |"<<endl;
cout<<"======================================"<<endl;
cout<<"=> tekan enter untuk memulai";
do
{
    //Memanggil member fungsi untuk input data
    S1.getdata();
    //Menulis ke file disk
    data.write((char*)(&S1), sizeof(S1));
    cout<<"Tuliskan data baru lagi{y/n) : ";
    cin>>pilihan;
} while(pilihan=='y');

data.seekg(0);  //meletakkan pointer di awal data
//Baca data pertama
data.read((char*)(&S1), sizeof(S1));
//Pengulangan dengan syarat eof()
while(!data.eof())
{
    //Tampilkan data
	cout<<endl;
    cout<<"======================================"<<endl;
	cout<<"|     HASIL PERHITUNGAN ZAKAT MAL    |"<<endl;
	cout<<"======================================"<<endl;
	cout<<"Data Ke-"<<j++<<endl;
    S1.display();
    S1.bayar_zakat();
    data.read((char*)(&S1), sizeof(S1));
}
//tutup file disk
data.close();
//buka file disk
data.open("18101041.txt",ios::in|ios::binary|ios::out);
//Memilih file yang ingin diedit
cout<<"\nAnda ingin mengedit data ke-: " ;cin>>n;
int pos = (n-1)*sizeof(S1);
//Menghitung letak pointer
data.seekg(pos); //Meletakkan posisi pointer 
//melihat posisi pointer sekarang
cout<<"\nPosisi pointer sekarang: "<<data.tellg();
//Masukkan data objek baru 
S1.getdata();
//Menulis data ke file
data.write((char*)(&S1),sizeof(S1));
//Tutup disk file
cout<<endl;
S1.display();
S1.bayar_zakat();
data.close();
cout << endl;
return 0;
}
