#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <math.h>

using namespace std;

class Segitiga{
	public:
		int a,t; //data member
		float luas(){ //member fuction
			return 0.5 *this->a *this->t;
		}
};

int main()
{
	Segitiga s;
	s.a = 10;
	s.t - 20;
	cout<<"Luas ="<<s.luas()<<endl;
	return 0;
		
}
