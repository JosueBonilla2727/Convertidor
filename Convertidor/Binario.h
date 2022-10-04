#pragma once

#include<iostream>
#include<stdlib.h>

using namespace std;

class Binario {

	private:
        int bin, resul, residuo = 0;
        int des[10];
        int hex[10];
        int i = 1, rem, dec = 0;

	public:

		void binario_desimal() {

            cout << "\n\n(limite binario: 10 caracteres)" << endl;
            cout << "\nIntroduce el numero binario que quieras convertir a decimal: ";
            cin >> bin;

            for (int c = 0; c < 10; c++)
            {
                des[c] = bin % 10;
                bin /= 10;
            }

            for (int i = 9; i >= 0; i--)
            {
                resul = (residuo * 2) + des[i];
                residuo = resul;
            }

            cout << "\n\nEl numero en decimal es: " << resul << endl;
		};

		void binario_Hexadesimal() {

            cout << "\n\n(limite hexadecimal: 10 caracteres)" << endl;
            cout << "\nIntroduce el numero binario que quieras convertir a hexadecimal: ";
            cin >> bin;
            while (bin > 0)
            {
                rem = bin % 2;
                dec = dec + rem * i;
                i = i * 2;
                bin = bin / 10;
            }
            i = 0;
            while (dec != 0)
            {
                hex[i] = dec % 16;
                dec = dec / 16;
                i++;
            }
            cout << "\n\nEl numero en hexadecimal es: ";
            for (int c = i - 1; c >= 0; c--)
            {
                if (hex[c] > 9)
                {
                    cout << (char)(hex[c] + 55) ;
                }
                else
                {
                    cout << hex[c] ;
                }
            }

		};
};