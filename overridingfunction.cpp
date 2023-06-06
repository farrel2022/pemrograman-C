#include <iostream>
 
using namespace std;
 
class Komputer {
  public:
    string cekInfo() {
      return "Ini berasal dari class Komputer";
    }
};
 
class Laptop: public Komputer {
  public:
    string cekInfo() {
      return "Ini berasal dari class Laptop";
    }
};
 
int main()
{
  Laptop laptopAndi;
  cout << laptopAndi.cekInfo() << endl;
 
  return 0;
}
