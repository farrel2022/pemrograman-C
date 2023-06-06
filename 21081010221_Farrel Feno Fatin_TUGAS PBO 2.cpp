#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <math.h>

using namespace std;

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

class clskubus{
	public :
		int rusuk;
		float volume(){
			return (pow(this->rusuk,3));
		}
		int luaspermukaan(){
			return 6* (pow(this->rusuk,2));
		}
};

class clslingkaran{
	public :
		int  jari;
		float luas(){
			return 3.14 * this -> jari* this -> jari; 
		}
		int keliling(){
			return 3.14*2*this -> jari;
		}
};

class clsbola{
	public :
		int jari;
		float volume (){
			return 1.33*3.14*(pow(jari,3));
		}
		int luaspermukaan(){
			return 4*3.14* (pow(this -> jari,2));
		}
};

int main()
{
	clspersegi s;
	int w;
	cout<<"Masukkan Panjang Sisi Persegi :  "; 
	cin>> w;
	s.sisi = w;
	
	clskubus r;
	int x;
	cout<<"Masukkan Panjang Rusuk Kubus :  "; 
	cin>> x;
	r.rusuk = x;
	
	clslingkaran j;
	int y;
	cout<<"Masukkan Panjang Jari-Jari Lingkaran :  ";
	cin>> y;
	j.jari = y;
	
	clsbola rb;
	int z;
	cout<<"Masukkan Panjang Jari-Jari Pada Bola :  ";
	cin>> z;
	rb.jari = z;
	
cout<<"\n"<<endl;
	
	cout <<"Luas Persegi : "<<s.luas()<<" cm^2"<<endl;
	cout <<"Keliling Persegi : "<<s.keliling()<<" cm"<<endl;

cout<<"\n"<<endl;

	cout <<"Volume Kubus : "<<r.volume()<<" cm^3"<<endl;
	cout <<"Luas Permukaan Kubus : "<<r.luaspermukaan()<<" cm^2"<<endl;
	
cout<<"\n"<<endl;

	cout <<"Luas Lingkaran : "<<j.luas()<<" cm^2"<<endl;
	cout <<"Keliling Lingkaran : "<<j.keliling()<<" cm"<<endl;

cout<<"\n"<<endl;

	cout <<"Volume Bola : "<<rb.volume()<<" cm^3"<<endl;
	cout <<"Luas Permukaan Bola : "<<rb.luaspermukaan()<<" cm^2"<<endl;

return 0;
}

