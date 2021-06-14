#include <iostream>
using namespace std;
////////////////////////////////////////////////////////////////
class DataBMI      //Kelas DataBMI
{
private:
    //deklarasikan variabel nama, tinggi, berat dan bMI
    char nama[50];
    int berat;
    float tinggi, BMI;
public:
    void get ()   //definisikan fungsi untuk mengambil data
    {
        //Tulis program untuk memasukkan nama, berat, dan tinggi
        //sesuai dengan contoh output program di soal
        cout<<"Masukan nama: ";
        cin>>nama;
        cout<<"Masukan berat: ";
        cin>>berat;
        cout<<"Masukan tinggi(m): ";
        cin>>tinggi;
    }
    ~DataBMI()      //Definisikan Destruktor
    {
        //Tulis output program ketika destruktor bekerja
        //sesuai dengan contoh output program di soal
        cout<<"Destruktor bekerja-Terima kasih"<<endl;
    }
    void display ()  //definisikan fungsi untuk menampilkan data
    {
        BMI=berat/(tinggi*tinggi);
        //Tulis tampilan output hasil perhitungan sesuai contoh output di soal
        cout<<"Nilai BMI "<<nama<<": "<<BMI<<endl;
    }
};
///////////////////////r/////////////////////////////////////////
int main()
{
DataBMI obj;
DataBMI* ptr1;     //deklarasi pointer ptr1 ke kelas
    
//Panggil 2 member fungsi untuk mengambil dan menampilkan data
//gunakan objek obj
obj.get();
obj.display();
//Simpan alamat memori obj pada pointer ptr1
ptr1=&obj;
//panggil member fungsi display dari objek pointer ptr1
ptr1->display();
cout<<endl;
//Definisikan objek baru dengan menggunakan pointer ptr1 dan operator new 
ptr1 = new DataBMI;
//Panggil 2 member fungsi untuk mengambil dan menampilkan data  
//gunakan objek pointer ptr1
ptr1->get();
ptr1->display();

delete ptr1; //Gunakan operator delete untuk menghapus memori objek pointer ptr1
return 0;
}
