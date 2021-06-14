#include <iostream>
using namespace std;

template <class T>
class jumlah
{
    T h;
    public:
    jumlah (T hari)
    {h=hari;}
    void masukan()
    {
        cout<<"Masukan jumlah hari Anda mengambil data: "; cin>>h;
    }
    T hitung();
};
class DHT11     //create class
{
    public :
    float suhu[100], avg=0, total;
    int i,n=0;
    char pil;
    public:
    class nil{};    //create exception class
    class jml
    {
        public :
        int p;
        jml(int a)
        {
            p=a;
        }
    };
    void get ()
    {
        cout<<"Masukkan jumlah data anda : ";cin>>i;
        do
        {
            if (n==i)
            throw jml(i);
            cout<<"Masukkan data suhu (Celcius) ke-"<<n+1<<": ";cin>>suhu[n];
            avg=(avg*(n)+suhu[n])/(n+1);
            n++;
            cout<<"Masukkan data lagi?(y/n)";cin>>pil;
        } while (pil=='y');
    }
    void display()
    {
        try
        {
            cout<<endl;
            cout<<"Hasil Data"<<endl;
            cout<<"-> Rata-Rata Suhu (Celcius): "<<avg<<endl;
            throw nil();
        }
        catch (DHT11::nil)
        {
            cout<<"-> Data Bagus, Anda memasukkan sesuai data lapangan"<<endl;
        }
        cout<<endl;
    }
};

template <class T>
T jumlah<T>::hitung()
{
    T total;
    total=h*24;
    return total;
}

int main()
{
    DHT11* obj1[100];       //instantiation pointer object
    char pil;
    int x=0;
    double a;
    cout<<"Program Pengambilan Data Suhu Sensor DHT11"<<endl;
    cout<<"-> Dibuat untuk meghindari manipulasi data"<<endl;
    cout<<"-> Menghitung total waktu pengambilan data"<<endl;
    cout<<"-> Memudahkan Menghitung rerata data suhu"<<endl;
    cout<<endl;
    jumlah <double> obj2(a);
    obj2.masukan();
    cout<<"Banyaknya waktu Anda mengambil data (jam): "<<obj2.hitung()<<endl;
    cout<<endl;
    do
    {
        obj1[x]= new DHT11;
        try
        {
            obj1[x]->get();
            obj1[x]->display();
        }
        catch (DHT11::jml M)
        {
            cout<<endl;
            cout<<"Anda berusaha memanipulasi data"<<endl;
            cout<<"Jumlah data yang Anda masukan lebih dari "<<M.p<<endl;
            cout<<"-> Hasil tidak ditampilkan"<<endl;
        }
        x++;
        cout<<"Masukkan data lagi?(y/n)"; cin>>pil;
    } while (pil=='y');
}

