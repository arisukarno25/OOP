#include <iostream>
using namespace std;

class orang
{
private:
    char nama[30];
    int umur;
public:
    void getdata()         //konstruktor
    {
        cout<<"Nama : ";
        cin>>nama;
        cout<<"Umur : ";
        cin>>umur;
    }
    void display()
    {
        cout<<"Nama         : "<<nama<<endl;
        cout<<"Umur         : "<<umur<<endl;
    }
};
class Mahasiswa : public orang  //definisi kelas turunan level 1
{
private:
	char kampus[100];
	int NIM;
public:
		void getdata()
		{
			orang::getdata();
			cout<<"Nama Kampus :";
			cin>>kampus;
			cout<<"NIM 		   :";
			cin>>NIM;
		}
	void display()
	{
		orang::display();
		cout<<"Nama Kampus  : "<<kampus<<endl;
		cout<<"NIM 			: "<<NIM<<endl;
	}
};

 class Engineer : public Mahasiswa     //Definisi kelas turunan level 2
{
	private:
    char sertf[100];
    public :
    	void getdata()
    	{
    		Mahasiswa::getdata();
			cin.ignore();
    		cout<<"Sertifikat Bid. Telekomunikasi : ";
    		cin.getline(sertf,100);
		}
    	void display()
    	{
    	Mahasiswa::display();
    	cout<<"Sertifikat Bid.Telekomunikasi : "<<sertf;
		}
};
        

int main()
{
    cout<<"====MASUKAN DATA===="<<endl;
	Engineer E1;
    E1.getdata();
    cout<<"\n\n++++TAMPILKAN DATA++++"<<endl;
    E1.display();
    return 0;

}

