#include <iostream>
#include <math.h>
using namespace std;

int factorial(int A) {
	int nF = 1;
	for (int i = 0; i < A; i++) {
		nF *= (A - i);
	}
	return nF;
}

float SenoX(float X, int n) {

	float suma = 0;
	float calculo = 0;

	for (int i = 0; i < n; i++) {

		calculo = ((float)pow(X, 2 * i + 1)) / (factorial(2 * i + 1));

		if (i % 2  == 0) {
			suma += calculo;
		}

	    else if (i % 2 != 0) {

			suma -= calculo;
		}

	}

	return suma;
}


int Digit(int num, int N) {
	int digito = -1;
	num = abs(num); // valor absoluto de num 
	int temporal = num;
	int divisor = 1;
	int posicion = 0; // porque solo da 4 vueltas si num=-54321
	while (temporal / 10 > 0) {
		temporal = temporal / 10;
		divisor = divisor * 10;
		posicion++;
	}
	
	while (divisor > 0)
	{

		if (posicion == N) {
			digito = num / divisor;
		}

		num = num % divisor;
		divisor = divisor / 10;
		posicion--;
	}

	return digito;
}


void main() {

	float X=0;
	int n=0;
	int num=0;
	int N=0;

	int opcion=1 ;

	while (opcion ==2 || opcion ==1) {

		cout << "Menu de opciones" << endl;
		cout << "1. Calcular el seno" << endl;
		cout << "2. Hallar el enesimo numero" << endl;
		cout << "3. Fin" << endl;

		cin >> opcion;

		switch (opcion)
		{
		case 1:
			cout << "ingrese X: " << endl;
			cin >> X;
			cout << "ingrese n: " << endl;
			cin >> n;
			cout << "el Seno de X es: " << SenoX(X, n) << endl;

			break;

		case 2:
			cout << "ingrese el valor de N: " << endl;
			cin >> N;
			cout << "ingrese el numero: " << endl;
			cin >> num;
			cout << "el n-esimo digito es: " << Digit(num, N) << endl;

			break;

		case 3:

			break;
		}

	}

}
