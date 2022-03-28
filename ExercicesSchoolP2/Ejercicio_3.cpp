# include <iostream>

using namespace std;

int main (){
    int option, ope;
    int num_1, num_2;
    cout << "Ingresa una de las siguintes opciones\n";
    cout << "1.- Suma\n2.- Resta\n3.-Multiplicacion\n4.-Division\n5.-Modulo: ";
    cin >> option;
    cout <<  "Ingresa un numero: ";
    cin >> num_1;
    cout << "Ingresa otro numero: ";
    cin >> num_2;

    switch (option){

        case 1 : {
            ope =  num_1 + num_2;
            cout << ope << endl;
            break;
        }

        case 2: {
            ope = num_1 - num_2;
            cout << ope << endl;
            break;
        }

        case 3 : {
            ope = num_1 * num_2;
            cout << ope << endl;
            break;
        }

        case 4 : {
            ope = num_1 / num_2;
            cout << ope << endl;
            break;
        }

        case 5 : {
            ope = num_1 % num_2;
            cout << ope << endl;
            break;
        }
        default : cout << "Numero incorrecto, Intentalo de nuevo\n";
        
    }
    return 0;
}

