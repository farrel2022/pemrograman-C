#include <iostream>
#include <string>
using namespace std;
 
class siswa{
private:
    static int s_id;
public:
    int id;
    string nama;
 
    void setID();
    void printAll();
 
    static void setS_id(int pS_id){s_id=pS_id; /*Definisi Function*/}
    static int getS_id(){return s_id; /*Definisi Function*/}
 
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
    siswa::setS_id(5); //mengakses s_id melalui static member function “setS_id” 
    siswa andi("Andi Dadi Loro");
    siswa william("Joko Will");
 
    dadi.printAll();
    budi.printAll();
    andi.printAll();
    william.printAll();
 
    cout<<"akses dari luar object = "<<siswa::getS_id()<<endl; //mengakses s_id melalui static member function “getS_id” 
 
    return 0;
}
