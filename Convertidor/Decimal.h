#pragma once

#include<iostream>
#include<stdlib.h>

using namespace std;

class Decimal {
	
	private:
		int dec;
		short bin[10];
		int hex[20];
		int resi, resul, c = 0;

	public:
		
		void decimal_Binario() {

			cout << "\n\n(limite binario: 10 caracteres)" << endl;
			cout << "\nIngrese el valor decimal que quira convertir en binario: ";
			cin >> dec;

			for (int c = 0; c < 10; c++) {
				bin[c] = dec % 2;
				dec /= 2;
			}

			cout << "\nEl numero en binario es: ";

			for (int i = 9; i >= 0; i--) {
				cout << bin[i];
			}

			cout << endl;
		};

		void decimal_Hexadesimal() {

			cout << "\n\n(limite Hexadecimal: 10 caracteres)" << endl;
			cout << "\nIngrese el valor decimal que quira convertir en hexadecimal : ";
			cin >> dec;

			do{

				resi = dec % 16;
				resul = dec / 16;
				hex[c] = resi;
				dec = resul;
				c++;

			} while (resul > 15);

			hex[c] = resul;

			cout << "\nEl numero en hexadecimal es: ";

			for (int i = c; i >= 0; i--)
			{
				if (hex[i] == 10)
				{
					cout << "A";
				}
				else if (hex[i] == 11)
				{
					cout << "B";
				}
				else if (hex[i] == 12)
				{
					cout << "C";
				}
				else if (hex[i] == 13)
				{
					cout << "D";
				}
				else if (hex[i] == 14)
				{
					cout << "E";
				}
				else if (hex[i] == 15)
				{
					cout << "F";
				}
				else
				{
					cout << hex[i];
				}
			}
		};
};