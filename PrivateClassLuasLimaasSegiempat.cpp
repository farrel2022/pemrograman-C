#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class LimasSegiEmpat {
private:
    int tinggi, sisi;
        // constructor
    LimasSegiEmpat(int t, int s) {
        tinggi = t;
        sisi = s;
    }

public:    
    // method untuk menghitung luas alas
    float luasAlas() {
        return sisi * sisi;
    }
    
    // method untuk menghitung luas segitiga
    float luasSegitiga() {
        return sisi * sqrt(pow((sisi/2), 2) + pow(tinggi, 2)) * 0.5;
    }
    
    // method untuk menghitung luas permukaan
    float luasPermukaan() {
        return luasAlas() + (4 * luasSegitiga());
    }
    
    // method untuk menghitung volume
    float volume() {
        return luasAlas() * tinggi * 0.33333;
    }
};

int main() 
{

	// membuat objek limas segiempat dengan tinggi=10, sisi=8
	LimasSegiEmpat lse(10, 8);
	
	// menampilkan luas permukaan dan volume limas segiempat
	cout << "Luas Permukaan Limas Segiempat: " << lse.luasPermukaan() << endl;
	cout << "Volume Limas Segiempat: " << lse.volume() << endl;

	return 0;
}
