#include <iostream>
#include <fstream>
#include <string>
using namespace std;
////////////////////////////////////////////////////////////////
//Membuat Kelas
class siswa
{
private:
    //Deklarasikan variabel
    char nama[20];
    int i;
    float nilai[4], rata_rata;
public:
    //Buat member fungsi untuk input data
    void getdata()
    {
    //input nama
    cin.ignore();   //untuk membersihkan buffer
    cout<<endl;
    cout<<"Tuliskan nama : ";
    cin.getline(nama,20);
    //Gunakan Pengulangan untuk input tugas 1-4
    for (i=0;i<4;i++)
    {
        cout<<"Input tugas ke-"<<i+1<<" : ";
        cin>>nilai[i];
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
        cout<<"Nilai tugas ke-"<<i+1<<" : "<<nilai[i]<<endl;
    }
    //Tampilkan rata-rata
    rata_rata=(nilai[0]+nilai[1]+nilai[2]+nilai[3])/4;
    cout<<"Nilai rata-rata : "<<rata_rata<<endl;
    }
    //Buat member fungsi percabangan untuk indeks nilai dari A-E
    void indeks()
    {
        if (rata_rata>80)
        {
            cout<<"Indeks nilai : A";
        }
        else if (rata_rata>70)
        {
            cout<<"Indeks nilai : AB";
        }
        else if (rata_rata>65)
        {
            cout<<"Indeks nilai : B";
        }
        else if (rata_rata>60)
        {
            cout<<"Indeks nilai : BC";
        }
        else if (rata_rata>50)
        {
            cout<<"Indeks nilai : C";
        }
        else if (rata_rata>40)
        {
            cout<<"Indeks nilai : D";
        }
        else
        {
            cout<<"Indeks nilai : E";
        }
    }
};
////////////////////////////////////////////////////////////////
int main()
{

siswa S1;        //membuat objek dari kelas
fstream data;        //Membuat objek stream
int i=1;
int n=0;

//Membuka file disk dan pengaturan Mode bit
data.open("18101041.txt", ios::in|ios::binary|ios::out);
data.seekg(0); //Reset posisi pointer di awal file
//Baca data pertama
data.read((char*)(&S1),sizeof(S1));
//Buat pengulangan untuk menampilkan data
while(!data.eof())
{
    cout<<"\nData ke-"<<i++<<endl;
    //tampilkan nilai dan indeks
    S1.display();
    S1.indeks();
    //baca data lain
    data.read((char*)(&S1),sizeof(S1));
}
data.close();   //tutup file disk
//Buka File Disk
data.open("18101041.txt",ios::in|ios::binary|ios::out);
//Memilih file yang ingin diedit
cout<<"\nData mana yang ingin diedit :" ;cin>>n;
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
data.close();
return 0;
}
