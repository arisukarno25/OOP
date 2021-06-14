#include <iostream>
using namespace std;

int main () {
//deklarasi variabel
float berat,tinggi, BMI;
char pil;
//Buat Perulangan 
do
    {
      //Buat try block
      try
      {
        //masukkan data dan perhitungan BMI
        cout<<"Tuliskan berat anda: ";
        cin>>berat;
        cout<<"Tuliskan tinggi anda(m): ";
        cin>>tinggi;
        BMI=berat/(tinggi*tinggi); 
        if (BMI<18.5||BMI>24.9)    //syarat BB tidak ideal jika <18,5 atau >24,9
             {
            throw (BMI);    //melempar exception
             }
        else {//Output program BB Ideal
            cout<<"BMI anda: "<<BMI<<" BB Ideal"<<endl;
        }    
      }
      //buat catch block 
      catch (float BMI)
      {
        //output program BB tidak ideal
        cout<<"BMI anda: "<<BMI<<" BB Tidak ideal"<<endl;
      }
      cout<<"Isi data lagi? ";cin>>pil;
      cout<<endl;
    } while(pil=='y');
  return 0;
}
