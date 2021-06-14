#include <iostream>
using namespace std;

class ujian     //create class
{
    private :
    float nilai[100], rata_rata=0;
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
        cout<<"Masukkan jumlah ujian anda: ";cin>>i;
        do
        {
            if (n==i)
            throw jml(i);
            cout<<"Masukkan nilai ujian "<<n+1<<": ";cin>>nilai[n];
            rata_rata=(rata_rata*(n)+nilai[n])/(n+1);
            n++;
            cout<<"Masukkan nilai?(y/n)";cin>>pil;
        } while (pil=='y');
    }
    void display()
    {
        try
        {
            cout<<"Rata-rata: "<<rata_rata<<endl;
            if (rata_rata<40)
            throw nil();
        }
        catch (ujian::nil)
        {
            cout<<"catch block 2 bekerja"<<endl;
            cout<<"Anda harus mengikuti remidi"<<endl;
        }
        cout<<endl;
    }
};

int main()
{
    ujian* obj1[100];       //instantiation pointer object
    char pil;
    int x=0;
    do
    {
        obj1[x]= new ujian;
        try
        {
            obj1[x]->get();
            obj1[x]->display();
        }
        catch (ujian::jml M)
        {
            cout<<"Catch block 1 bekerja"<<endl;
            cout<<"Jumlah ujian terlalu banyak, lebih dari "<<M.p<<endl;
            obj1[x]->display();
        }
        x++;
        cout<<"Masukkan data lagi?(y/n)"; cin>>pil;
    } while (pil=='y');
}

