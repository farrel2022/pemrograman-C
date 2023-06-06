#include<iostream>
#include<cmath>

using namespace std;

class segitigaSiku{
	private:
    	float alas;
    	float tinggi;
    	float miring;

    public:
		/*CONSTRUKTOR -> untuk proses awal pembuatan objek 
		(pemberian value pd data member, pemanggilan data member atau
		proses lain jika perlu)*/ 
		segitigaSiku(){
			cout << "Masukkan alas segitiga : "; cin >> alas;
			cout << "Masukkan tinggi segitiga : "; cin >> tinggi;
			cout << "Masukkan miring segitiga : "; cin >> miring;
		}

		// function Get() -> untuk mengambil value dari private
		float getAlas(){
			return alas;
		}

		float getTinggi(){
			return tinggi;
		}

		float getMiring(){
			return miring;
		}

    	float luas(){
    		return 0.5*alas*tinggi;
		}
		
		float keliling(){
			return alas+miring+miring;
		}
		
};

class persegi{
	private:
    	int sisi;
    public:
		persegi(){
			cout << "Masukkan sisi persegi : "; cin >> sisi;
		}

		int getSisi(){
			return sisi;
		}

    	int luas(){
    		return sisi*sisi;
		}
		
		int keliling(){
			return sisi*4;
		}
};

class lingkaran{
	private:
		float phi = 3.14;
		float jari_jari;
	public:
		lingkaran(){
			cout << "Masukkan jari-jari lingkaran : "; cin >> jari_jari;
		}

		float getJari_Jari(){
			return jari_jari;
		}

		float getPhi(){
			return phi;
		}

		float luas(){
			return phi*pow(jari_jari,2);
		}
		
		float keliling(){
			return 2*phi*jari_jari;
		}
};

class tabung{
	private:
		float tinggi;
	public:
		//komposisi -> untuk pengambilan data member dari class lain
		lingkaran c1;

		tabung(){
			cout << "Masukkan tinggi tabung : "; cin >> tinggi;
		}

		float getJari_jari(){
			return c1.getJari_Jari();
		}

		float getTinggi(){
			return tinggi;
		}

		float getPhi(){
			return c1.getPhi();
		}


		float volume(){
			float volumeTab = c1.luas() * tinggi;
			return volumeTab;
		}
};

class balok{
	private:
		int panjang, lebar, tinggi;
	public:
		balok(){
			cout << "Masukkan panjang balok : "; cin >> panjang;
		    cout << "Masukkan lebar balok : "; cin >> lebar;
		    cout << "Masukkan tinggi balok : "; cin >> tinggi;
		}
		
		int getPanjang(){
			return panjang;
		}

		int getLebar(){
			return lebar;
		}

		int getTingggi(){
			return tinggi;
		}

		int volume(){
			return panjang*lebar*tinggi;
		}
};

class limSegitiga{
	private:
		float tinggiLim;
	public:
		segitigaSiku a1;

		limSegitiga(){
		    cout << "Masukkan tinggi limas : "; cin >> tinggiLim;
		}
	

		float volume(){
			float volumeLim = (a1.luas() * tinggiLim)/3;
			return volumeLim;
		}
};

int main()
{

	int pil;
	cout << "===== PERHITUNGAN BANGUN DATAR DAN BANGUN RUANG =====\n";
	cout << "1. Segitiga\n2. Persegi\n3. Lingkaran\n4. Tabung\n5. Balok\n6. Limas Segitiga\n" << endl;
	cout << "Masukkan pilihan anda : "; cin >> pil; cout << endl;


	switch(pil){
		case 1:	
		{
			segitigaSiku a;
			cout << "luas : " << a.luas() << endl;
			cout << "keliling : " << a.keliling() << endl;
			cout << endl;
			break;
		}
		case 2:	
		{
			persegi b;
			cout << "luas : " << b.luas() << endl;
			cout << "keliling : " << b.keliling() << endl;
			cout << endl;
			break;
		}
		case 3:	
		{
			lingkaran c;
			cout << "luas : " << c.luas() << endl;
			cout << "keliling : " << c.keliling() << endl;
			cout << endl;
			break;
		}
		case 4:	
		{
			tabung d;
			cout << "Volume tabung adalah : " << d.volume() << endl;
			cout << endl;
			break;
		}
		case 5:	
		{
			balok e;
			cout << "Volume balok adalah : " << e.volume() << endl;
			cout << endl;
			break;
		}
		case 6:	
		{
			limSegitiga f;
			cout << "Volume limas segitiga adalah : " << f.volume() << endl;
			cout << endl;
			break;
		}
	}
    return 0;
}
