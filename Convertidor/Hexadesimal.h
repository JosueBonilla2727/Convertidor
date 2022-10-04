#pragma once

#include<iostream>
#include<stdlib.h>
#include<math.h>

using namespace std;

class Hexadesimal {

	private:
		char hex[10];
        int sum = 0;
        int i; 
        int len; 
        int c = 0;
		
	public:

		void Hexadesimal_Binario() {
            
            cout << "\n\n(limite Hexadecimal: 10 caracteres)" << endl;
            cout << "\nIntroduce el numero hexadecimal que quieras convertir a binario: ";
            cin >> hex;
            cout << "\n\nEl numero en binario es: ";
            while (hex[c])
            {
                switch (hex[c])
                {
                case '0':
                    cout << "0000";
                    break;
                case '1':
                    cout << "0001";
                    break;
                case '2':
                    cout << "0010";
                    break;
                case '3':
                    cout << "0011";
                    break;
                case '4':
                    cout << "0100";
                    break;
                case '5':
                    cout << "0101";
                    break;
                case '6':
                    cout << "0110";
                    break;
                case '7':
                    cout << "0111";
                    break;
                case '8':
                    cout << "1000";
                    break;
                case '9':
                    cout << "1001";
                    break;
                case 'A':
                case 'a':
                    cout << "1010";
                    break;
                case 'B':
                case 'b':
                    cout << "1011";
                    break;
                case 'C':
                case 'c':
                    cout << "1100";
                    break;
                case 'D':
                case 'd':
                    cout << "1101";
                    break;
                case 'E':
                case 'e':
                    cout << "1110";
                    break;
                case 'F':
                case 'f':
                    cout << "1111";
                    break;
                default:
                    cout << "\n\nCaracter en Hexadecimal Incorrecto:" << hex[c] << endl;;
                }
                c++;
            }
		};

		void Hexadesimal_desimal() {
			
            cout << "\n\n(limite Hexadecimal: 10 caracteres)" << endl;
            cout << "\nIntroduce el numero hexadecimal que quieras convertir a decimal: ";
			cin >> hex;
			len = strlen(hex);
			for (i=len-1; i >= 0; i--) {
				if (hex[i] >= '0' && hex[i] <= '9') {
					sum = sum+ (hex[i] - 48) * pow(16,c);
					c++;
				}
				else if (hex[i] >= 'A' && hex[i] <= 'F') {
					sum = sum+ (hex[i] - 55) * pow(16,c);
					c++;
				}
			}
			cout << "\n\nEl numero en decimal es: " << sum << endl;
		};
};
