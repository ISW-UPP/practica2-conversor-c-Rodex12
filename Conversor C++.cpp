#include <iostream>

using namespace std;

int main()
{
	float c;
	int op, op1;
	cout <<"Con que conversiones quiere trabajar: (1. MXN), (2. Kms), (3. Kgs) "<<endl;
	cin >> op;
	
	switch (op)
	{
		case 1:
			cout << "Has elegido trabajar con MXN"<<endl;
			cout << "Ingrese la cantidad que desea convertir: ";
			cin >> c;
			cout << "A que quiere convertir: (1. Libras), (2. Euros), (3. Dolares), (4. Yen), (5. Pesos colombianos) \n";
			cin >> op1;
			switch(op1)
			{
				case 1:
					cout << "MXN a Libras es: \n"<<c* 0.043;
					break;
				case 2:
					cout << "MXN a Euros: \n"<<c * 0.049;
					break;
				case 3:
					cout << "MXN a Dolares: \n"<< c * 0.053;
					break;
				case 4:
					cout << "MXN a Yenes: \n"<< c * 6.76;
					break;
				case 5:
					cout << "MXN a Pesos colombianos: \n"<< c * 245.85;
					break;
			}
			break;
		case 2:
			cout << "Has elegido trabajar con Kms"<<endl;
			cout << "Ingrese la cantidad que desea convertir: ";
			cin >> c;
			cout << "A que quiere convertir: (1. Pulgada), (2. Pie), (3. Centimetro), (4. Nanometros), (5. Años luz) \n";
			cin >> op1;
			switch(op1)
			{
				case 1:
					cout << "Kms a Pulgadas es: \n"<<c* 39370.1;
					break;
				case 2:
					cout << "Kms a Pies: \n"<<c * 3280.84;
					break;
				case 3:
					cout << "Kms a Centimetros: \n"<< c * 100000;
					break;
				case 4:
					cout << "Kms a Nanometros: \n"<< c * 1000000000000;
					break;
				case 5:
					cout << "Kms a Años luz: \n"<< c * 0.00000000000010570;
					break;
			}
			break;
		case 3:
			cout << "Has elegido trabajar con Kgs"<<endl;
			cout << "Ingrese la cantidad que desea convertir: ";
			cin >> c;
			cout << "A que quiere convertir: (1. Toneladas), (2. Onzas), (3. Libra), (4. Microgramo), (5. Teragramo) \n";
			cin >> op1;
			switch(op1)
			{
				case 1:
					cout << "Kgs a Toneladas es: \n"<<c* 0.001;
					break;
				case 2:
					cout << "Kgs a Onzas: \n"<<c * 35.274;
					break;
				case 3:
					cout << "Kgs a Libras: \n"<< c * 2.20462;
					break;
				case 4:
					cout << "Kgs a Microgramos: \n"<< c * 1000000000;
					break;
				case 5:
					cout << "Kgs a Teragramos: \n"<< c * 0.000000001;
					break;
			}
			break;
	}
	
}
