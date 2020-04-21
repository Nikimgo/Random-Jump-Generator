#include <iostream>
#include <cmath>
#include <time.h>
#include <cstdlib>

using namespace std;

int Skok(double wzrost){
	
	
	double wynik = wzrost * M_PI;
	//cout << "Wynik_flat: " << wynik;
	
	wynik = round(wynik*100)/100;
	
	double losowa = (rand()%5 -2);
	double losowa2 = (rand()%5 -2);
	
	losowa = losowa/10;
	losowa2 = losowa2/100;
	
	//cout << "Losowa: " <<losowa;
	wynik = wynik + losowa + losowa2;
	
	
	
	cout << "Wynik: " << wynik << endl;
	
}

double wzrost;

int main() {
	
	srand(time(NULL));
	
	cout << "Wzrost (m): ";
	cin >> wzrost;
	
	double one = Skok(wzrost);
	double two = Skok(wzrost);
	
	return 0;
}
