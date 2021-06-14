#include <iostream>
using namespace std;
int main()
{

char arr[5] ={'S','U','P','E','R'}; //definisikan isi dari arr sesuai dengan contoh output program di soal
//Deklarasikan ptr sebagai pointer
char* ptr;
//Definiskan ptr menunjuk ke arr
ptr=arr;
//Tuliskan program sesuai output baris 1-3 pada soal
cout<<"Nilai array ke 0: "<<ptr[0]<<endl;
cout<<"Nilai array ke 2: "<<ptr[2]<<endl;
cout<<"Nilai array ke 4: "<<ptr[4]<<endl;
//Gunakan perulangan, pointer, dan array untuk mengakses semua nilai arr
for(int i=0;i<5;i++)
{
    cout<<"Array ke-"<<i+1<<": "<<*(ptr+i)<<endl;
}
return 0;
}

