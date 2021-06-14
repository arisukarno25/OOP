#include <iostream>

using namespace std;

//definisi template fungsi
template <class S>
S MAX(S x, S y ) {
    return (x>y)? x:y;
}  

int main () {
    int i, j, k;
    double l, o, n;
    string p, q, r;
    cout<<"Mencari nilai terkecil"<<endl;
    //mencari nilai integer terkecil
    cout<<"Tuliskan nilai 1 (integer): ";
    cin>>i;
    cout<<"Tuliskan nilai 2 (integer): ";
    cin>>j;
    k=MAX(i,j);
    cout<<"Nilai terkecil: "<<k<<endl;
    cout<<endl;
    //mencari nilai double terkecil
    cout<<"Tuliskan nilai 1 (double): ";
    cin>>l;
    cout<<"Tuliskan nilai 2 (double): ";
    cin>>o;
    n=MAX(l,o);
    cout<<"Nilai terkecil: "<<n<<endl;
	cout<<endl;    
	//mencari nilai string terkecil
    cout<<"Tuliskan nilai 1 (string): ";
    cin>>p;
    cout<<"Tuliskan nilai 2 (string): "<<q;
    cin>>q;
    r=MAX(p,q);
    cout<<"Nilai terkecil: "<<r<<endl;
   	return 0;
}

