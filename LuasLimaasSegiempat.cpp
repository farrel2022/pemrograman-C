#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    float sisi,tinggi,hasil_LP,hasil_V;
    float pythagoras,L_STiga;

    cout <<"Luas dan Volume Limas Segi Empat Beraturan\n";
    cout <<"www.ekorkode.com\n\n";

    cout <<"Masukan Tinggi         : ";
    cin  >> tinggi;
    cout <<"Masukan Panjang sisi   : ";
    cin  >>sisi;


    pythagoras=sqrt(((sisi*0.5)*(sisi*0.5))+(tinggi*tinggi));
    L_STiga=0.5*sisi*pythagoras;

    hasil_LP=(sisi*sisi)+(4*L_STiga);
    hasil_V=(0.33333)*(sisi*sisi)*tinggi;
    
    cout << endl;
    cout <<"Luas Limas   = " << hasil_LP;
    cout <<"\nVolume Limas = " << hasil_V;

    return 0;
}
