#include<iostream>
using namespace std;

class Pegawai
{
private:
    int NIP;
    char Nama[25];
    int Gaji;
public:
    void GetData()      
    {
        cout<<"\nMasukkan NIP Pegawai: ";
        cin>>NIP;
        cout<<"Masukkan Nama Pegawai: ";
        cin>>Nama;
        cout<<"Masukkan Gaji Pegawai : ";
        cin>>Gaji;
    }
    void PutData ()      {
        cout<<NIP<<"\t"<<Nama<<"\t"<<Gaji<<endl;
    }
};
int main ()
{
     int i,j;
     Pegawai P1[10];       //Pendefinisian Objek dr Array

     for(i=0;i<2;i++)
     {
        cout<<"\n\tMasukkan Biodata Pegawai "<<i+1;
        P1[i].GetData();
     }
     cout<<"\nBiodata Seluruh Pegawai\n";
     for(j=0;j<2;j++)   {
        P1[j].PutData(); 
    }
    return 0;
}

