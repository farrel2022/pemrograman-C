#include <iostream>
#include <cmath>
using namespace std;

class PrismaSegitiga {

   public:
   	int alas,tinggi,tinggi_prisma;
      PrismaSegitiga(int a, int t, int tp) {
         alas = a;
         tinggi = t;
         tinggi_prisma = tp;
      }

      float luas_permukaan() {
         float luas = (alas * tinggi) + (3 * alas * tinggi_prisma);
         cout << "Luas permukaan prisma segitiga adalah: " << luas << endl;
      }

      float volume() {
         float volume = (alas * tinggi * tinggi_prisma) / 2;
         cout << "Volume prisma segitiga adalah: " << volume << endl;
      }
};

int main() {
   int a, t, tp;
   cout << "Masukkan alas segitiga: ";
   cin >> a;
   cout << "Masukkan tinggi segitiga: ";
   cin >> t;
   cout << "Masukkan tinggi prisma: ";
   cin >> tp;

   PrismaSegitiga prisma(a, t, tp);
	
   prisma.luas_permukaan();
   prisma.volume();

   return 0;
}
