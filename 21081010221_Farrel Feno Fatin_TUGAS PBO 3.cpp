#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class LimasSegiEmpat {
    private:
        int tinggi, sisi; // data member
    public:
        void setTinggi(int t) {
            this->tinggi = t;
        }
        int getTinggi() {
            return this->tinggi;
        }
        void setSisi(int s) {
            this->sisi = s;
        }
        int getSisi() {
            return this->sisi;
        }

        float luasAlas() {
            return sisi * sisi;
        }

        float luasSegitiga() {
            return sisi * sqrt(pow((sisi/2), 2) + pow(tinggi, 2)) / 2;
        }

        float luasPermukaan() {
            return luasAlas() + (4 * luasSegitiga());
        }

        float volume() {
            return luasAlas() * tinggi / 3;
        }
};

class PrismaSegitiga {

    private:
        int alas, tinggi, tinggi_prisma; //data member
    public:
        void setAlas(int a) {
            this->alas = a;
        }
        int getAlas() {
            return this->alas;
        }
        void setTinggi(int t) {
            this->tinggi = t;
        }
        int getTinggi() {
            return this->tinggi;
        }
        void setTinggi_Prisma(int tp) {
            this->tinggi_prisma = tp;
        }
        int getTinggi_Prisma() {
            return this->tinggi_prisma;
        }
        float luas_alas() {
            return (alas * tinggi) / 2;
        }
        float keliling_alas(){
        	return (alas + tinggi + sqrt(pow(alas, 2) + pow(tinggi, 2)));
		}
		float luas_seluruh_sisi_tegak(){
			return (keliling_alas() * tinggi_prisma);
		}
        float luas_permukaan() {
            return (luas_alas()* 2) + luas_seluruh_sisi_tegak() ;
        }
        float volume() {
            return (luas_alas() * tinggi_prisma);
        }
};

int main() {
	
cout<<"--LIMAS SEGIEMPAT--"<<endl;
    int t, s, a, tp;
    cout << "Masukkan Tinggi Limas Segiempat: ";
    cin >> t;
    cout << "Masukkan Sisi Alas Limas Segiempat: ";
    cin >> s;

    LimasSegiEmpat lse;
    lse.setTinggi(t);
    lse.setSisi(s);
    
cout<<"\n"<<endl;
    
	cout << "Luas Permukaan Limas Segiempat: " << lse.luasPermukaan() << endl;
    cout << "Volume Limas Segiempat: " << lse.volume() << endl;

cout<<"\n"<<endl;
cout<<"--PRISMA SEGITIGA--"<<endl;
    cout << "Masukkan Alas Segitiga: ";
    cin >> a;
    cout << "Masukkan Tinggi Segitiga: ";
    cin >> t;
    cout << "Masukkan Tinggi Prisma: ";
    cin >> tp;

cout<<"\n"<<endl;

    PrismaSegitiga pst;
    pst.setAlas(a);
    pst.setTinggi(t);
    pst.setTinggi_Prisma(tp);

    cout << "Luas Permukaan Prisma Segitiga: " << pst.luas_permukaan() << endl;
    cout << "Volume Prisma Segitiga: " << pst.volume() << endl;
    return 0;
}
