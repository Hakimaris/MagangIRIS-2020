#include <iostream>
#include <string>
using namespace std;

class hewan{
    public:
    string nama;
    int age;
    string asal;
    void set_value(string b,int a,string c){
        nama = b;
        age = a;
        asal = c;
    }
};

class zebra : public hewan{
    public:
    void biodata(){
        cout << "nama zebra ini "<< nama << " umurnya " << age << "tahun."<< " lahir di "<< asal <<endl;
    }
};

class dolphin : public hewan{
    public:
    void biodata(){
        cout << "nama lumba-lumba ini "<< nama << " umurnya " << age << "tahun."<< " lahir di "<< asal <<endl;
    }
};

int main(){
    string namaZebra;
    int umurZebra;
    string kampungZebra;

    zebra OwO;
    cout<<"nama zebra ini: "<<endl;
    cin>>namaZebra;
    cout<<"umur zebra: "<<endl;
    cin>>umurZebra;
    cout<<"zebra ini lahir di: "<<endl;
    cin>>kampungZebra;
    OwO.set_value(namaZebra,umurZebra,kampungZebra);
    OwO.biodata();

    string namaLumba;
    int umurLumba;
    string kampungLumba;

    dolphin uwu;
    cout<<"\nnama lumba-lumba: "<<endl;
    cin>>namaLumba;
    cout<<"umur lumba-lumba: "<<endl;
    cin>>umurLumba;
    cout<<"lumba-lumba ini lahir di: "<<endl;
    cin>>kampungLumba;
    
    uwu.set_value(namaLumba,umurLumba,kampungLumba);
    uwu.biodata();
}