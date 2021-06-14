#include<iostream>
using namespace std;

int main()
{
int var1=10;
float var2=5.5;
string var="CORONA IS COMING";

//Deklarasikan ptr1 sebagai pointer pada titik2 di bawah ini
void *ptr1;
//Deklarasikan ptr2 sebagai pointer pada titik2 di bawah ini
void *ptr2;
//Definisikan ptr1 menunjuk ke var1 pada titik di bawah ini
ptr1=&var1;
//Definisikan ptr2 menunjuk ke var2 pada titik2 di bawah ini
ptr2=&var2;
//Tuliskan kode program sesuai dengan output pada baris 1 dan 2
//Gunakan variabel ptr1 & ptr2 untuk mengisi titik2 di bawah ini
cout<<"Nilai pointer ptr1 : "<<*(int*)ptr1<<endl;
cout<<"Nilai pointer ptr2 : "<<*(float*)ptr2<<endl;
//Tuliskan kode program sesuai dengan output pada baris 3 dan 4
//Gunakan variabel ptr1 & ptr2 untuk mengisi titik2 di bawah ini
ptr1=&var1;
ptr2=&var2;
//Definisikan ptr2 menyimpan alamat var pada titik2 di bawah ini
ptr2=&var;
//Tuliskan kode program sesuai dengan output pada baris 5
//Gunakan variabel ptr2 untuk mengisi titik2 di bawah ini
cout<<var;

return 0;    
}
