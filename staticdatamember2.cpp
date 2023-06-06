#include <iostream>
#include <string>
using namespace std;

class siswa{
public:
    static int s_id;
    int id;
    string nama;

    void setID();
    void printAll();
    siswa(string pnama):nama(pnama){setID();}
};

int siswa::s_id=0;

void siswa::setID(){
    id = ++s_id;
}

void siswa::printAll(){
    cout<<"ID   = "<<id<<endl;
    cout<<"Nama = "<<nama<<endl;
    cout<<endl;
}

int main(){
    siswa dadi("Dadi family");
    siswa budi("Budi Dudi Dodi");
    siswa andi("Andi Dadi Loro");
    siswa william("Joko Will");

    dadi.printAll();
    budi.printAll();
    andi.printAll();
    william.printAll();
    return 0;
}
