#pragma once
#include<iostream>
#include<stdlib.h>
#include "Decimal.h"
#include "Hexadesimal.h"
#include "Binario.h"

using namespace std;

class Correr {

	private:
		int op;
		int rep;


	public:

		void menu() {

			Decimal d;
			Binario b;
			Hexadesimal s;

			do{
				cout << "\n\tJosue Bonilla Cardenas - 2P - Tarea 03" << endl;

				cout << "\n------------------MENU------------------" << endl;

				cout << "\nQue desea convertir:\n" << endl;

				cout << "1.- Decimal a binario." << endl;
				cout << "2.- Decimal a hexadecimal." << endl;
				cout << "3.- Binario a decimal." << endl;
				cout << "4.- Binario a hexadecimal." << endl;
				cout << "5.- Hexadesimal a binario." << endl;
				cout << "6.- Hexadesimal a desimal." << endl;
				cout << "0.- SALIR" << endl;

				cout << "\n------------------MENU------------------" << endl;

				cin >> op;

				switch (op) {

					case 1:
						d.decimal_Binario();

						repetir();

						system("cls");
					break;

					case 2:

						d.decimal_Hexadesimal();

						repetir();

						system("pause");
						system("cls");
					break;

					case 3:

						b.binario_desimal();

						repetir();

						system("pause");
						system("cls");
					break;

					case 4:

						b.binario_Hexadesimal();

						repetir();

						system("pause");
						system("cls");
					break;

					case 5:

						s.Hexadesimal_Binario();

						repetir();

						system("pause");
						system("cls");
					break;

					case 6:

						s.Hexadesimal_desimal();

						repetir();

						system("pause");
						system("cls");
					break;

					default:
						if (op != 0) {
							cout << "\nopcion NO valida, intentelo de nuevo" << endl;
						}
				}
			} while (op != 0);
		}

		void repetir() {

			cout << "\n\nDesea regresar al menu o salir del programa? (MENU = 1, SALIR = 0)" << endl;
			cin >> rep;
			if (rep == 0) {
				op = 0;
			}
		}

		void correr_programa() {
			menu();
		}
};