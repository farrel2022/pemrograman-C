#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <math.h>

using namespace std;


class clsSegitiga {
	public :
	int alas, tinggi;
	float luas()
	{
		return this->alas*this->tinggi*0.5;
	}
	int keliling()
	{
		return this->alas+this->tinggi+(sqrt(pow(this->alas,2)+pow(this->tinggi,2)));
	}
}; 

class clstrapesium{
	public :
		int tinggi, a,b,c,d;
		float luas(){
			
			return 0.5* this -> tinggi * (this -> a + this -> b);
		}
		int keliling(){
			return this -> a + this -> b + this -> c + this -> d;
			
		}
};

class clspersegi{
	public :
		int sisi;
		float luas(){
			return this -> sisi * this -> sisi;
		}
		int keliling(){
			return 4* this -> sisi;
		}
};

class clslingkaran{
	public :
		int  r;
		float luas(){
			return 3.14 * this -> r* this -> r; 
		}
		int keliling(){
			return 2*3.14*this -> r;
		}
};

class clsjjrgenjang{
	public :
		int a,b,t;
		float luas(){
			return this -> a * this -> t;
		}
		int keliling(){
			return 2 * (this -> a + this -> b);
		}
};

class clsvkubus{
	public :
		int p,l,t,s;
		float volume(){
			return (pow(this ->l,3));
		}
		int luaspermukaan(){
			return 6  * (pow(this -> s,2)); 
		}
};

class clsvbalok{
	public :
		int p,l,t,v;
		float volume (){
			return this -> p * this-> l *this -> t;
		}
		int luaspermukaan(){
			return this -> v/ (this -> p* this ->l * this -> t);
		}
};

class clsvbola{
	public :
		int r;
		float volume (){
			return 1.33*3.14*(pow(r,3));
		}
		int luaspermukaan(){
			return 4*3.14* (pow(this -> r,2));
		}
};

class clsvtabung{
	public :
		int t,r;
		float volume (){
			return 3.14* (pow(this -> r,2))*this -> t;
		}
		int luaspermukaan(){
			return 2*3.14*this -> r*(this -> r + this -> t);
		}
};

class clsvkerucut{
	public :
		int d,r,t,x;
		float panjanggarispelukis(){
			x = (pow(this -> t,2))+(pow(this -> r,2));
			return (sqrt(this -> x));
		}
		int luasselimutkerucut(){
			return 3.14 * this -> r* panjanggarispelukis();
		}
};
int main()
{
	clsSegitiga s;
	s.alas = 17;
	s.tinggi = 12;
	
	clstrapesium t;
	t.a = 8;
	t.b = 5;
	t.c = 6;
	t.d = 4;
	t.tinggi = 8;
	
	clspersegi p;
	p.sisi = 4;
	
	clslingkaran l;
	l.r = 14;
	
	clsjjrgenjang j;
	j.a = 12;
	j.b = 7;
	j.t = 9;
	
	clsvkubus vk;
	vk.l = 5;
	vk.s = 10;
	
	clsvbalok vb;
	vb.l = 24;
	vb.p = 28;
	vb.t = 10;
	vb.v = 6720;
	
	clsvbola vbl;
	vbl.r = 21;
	
	clsvtabung vt;
	vt.r = 7;
	vt.t = 28;
	
	clsvkerucut vkr;
	vkr.d = 10;
	vkr.r = 5;
	vkr.t = 12;
	
cout <<"MENGHITUNG BANGUN DATAR"<<endl<<endl;
//	luas = luasSegitiga(s1.alas,s1.tinggi);
	cout << "Luas segitiga : " << s.luas()<<" cm2" <<endl;
	cout << "Keliling segitiga : " << s.keliling()<<endl<<endl;
// luas trapesium
	cout <<"Luas Trapesium : "<<t.luas()<<" cm2"<<endl;
	cout <<"Keliling Trapesium : "<<t.keliling()<<endl<<endl;
// laus persegi
	cout <<"Luas Persegi : "<<p.luas()<<" cm2"<<endl;
	cout <<"Keliling Persegi : "<<p.keliling()<<endl<<endl;
// luas lingkaran
	cout <<"Luas Lingkaran : "<<l.luas()<<" cm2"<<endl;
	cout <<"keliling lingkaran : "<<l.keliling()<<endl<<endl;
// luas jjr genjang
	cout <<"Luas Jajar Genjang : "<<j.luas()<<" cm2"<<endl;
	cout <<"Keliling Jajar Genjang : "<<j.keliling()<<endl<<endl<<endl<<endl;
	
cout <<"MENGHITUNG BANGUN RUANG"<<endl<<endl;

// Volume Kubus
	cout <<"Volume Kubus : "<<vk.volume()<<" cm3"<<endl;
	cout <<"Luas Permukaan Kubus : "<<vk.luaspermukaan()<<" cm2"<<endl<<endl;
// Volume Balok
	cout <<"Volume Balok : "<<vb.volume()<<" cm3"<<endl;
	cout <<"Luas Permukaan Balok : "<<vb.luaspermukaan()<<" cm2"<<endl<<endl;
// Volume Bola
	cout <<"Volume Bola : "<<vbl.volume()<<" cm3"<<endl;
	cout <<"Luas Permukaan Bola : "<<vbl.luaspermukaan()<<endl<<endl;
// Volume Tabung
	cout <<"Volume Tabung : "<<vt.volume()<<" cm3"<<endl;
	cout <<"Luas Permukaan Tabung : "<<vt.luaspermukaan()<<endl<<endl;
// kerucut
	cout <<"Panjang Garis Pelukis Kerucut : "<<vkr.panjanggarispelukis()<<endl;
	cout <<"Luas Selimut Kerucut : "<<vkr.luasselimutkerucut()<<endl<<endl;
	
	return 0;
}
