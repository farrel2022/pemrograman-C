#include <iostream>
using namespace std;

class Siswa {
   public:
    virtual void Jumlah() {
        cout << "Siswa berjumlah 25\n";
    }
};

class Siswi : public Siswa {
   public:
    void Jumlah() {
        cout << "Siswi berjumlah 15\n";
    }
};

int main() {
    Siswa* s = new Siswa();
    s->Jumlah();

    Siswi* siswi = new Siswi();
    siswi->Jumlah();

    Siswa* s2 = new Siswi();
    s2->Jumlah();

    return 0;
}
