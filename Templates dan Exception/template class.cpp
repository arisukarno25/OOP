#include <iostream>
using namespace std;

//deklarasi template kelas
template <class T>
//buat kelas
class balok
{     
    T p,l,t; //deklarasi variabel
    public:
    balok (T panjang, T tinggi, T lebar)
    {p=panjang; t=tinggi; l=lebar;}
    void masukan()  //member fungsi untuk memasukkan data
    {
        cout<<"Masukkan panjang: ";cin>>p;
        cout<<"Masukkan tinggi: ";cin>>t;
        cout<<"Masukkan lebar: ";cin>>l;
    }
    T hitung(); //deklarasi member fungsi untuk hitung
};

//definisi fungsi menghitung volume
template <class T>
T balok<T>::hitung()
{
    T volume_balok;
    volume_balok=p*t*l;
    return volume_balok;
}

int main () {
    int a,b,c;
    double d,e,f;
    balok <int> obj1(a,b,c);       //instansiasi objek 1 berbentuk int
    obj1.masukan();                   //memanggil member fungsi masukkan data
    cout<<"Volume balok 1 (int): "<<obj1.hitung();                    //output volume balok 1
    cout<<endl;
    balok <double> obj2(d,e,f);   //instansiasi objek 2 berbentuk double
    obj2.masukan();               //memanggil member fungsi masukkan data
    cout<<"Volume balok 2 (double): "<<obj2.hitung();                //output volume balok 2
    return 0;
}
