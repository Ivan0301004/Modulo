#include <iostream>
#include <cmath>
using namespace std;

int main(){
    char letter;

    cout << "Elije una de las siguientes opciones;\n";
    cout << "a) Area de un circulo\nb) Area de un rectangulo\n";
    cout << "c) Area de un petagono\nd) Area de un triangulo\n";
    cout << "Eleccion: ";
    cin >> letter;

    switch(letter){
        case 'a': {
            float area, radio;
            float pi = 3.1415;
            cout << "ingresa la medida del diametro: "; cin >>radio;
            area = pi * pow(radio,2);
            cout << "EL are total de el circulo es: " << area <<endl;
            break;

        }

        case 'b': {
            float area, base, altura;
            cout << "Ingresa la medida de la base: "; cin >> base;
            cout << "Ingresa la medida de la altura: "; cin >> altura;
            area = base * altura ;
            cout << "El area total del rectangulo es de " << area << endl; 
            break;
        }

        case 'c':{
            float apotema, lados, area;
            cout << "Ingresa la medida del apotema: "; cin >> apotema;
            cout << "Ingresa la medida de uno los lados: "; cin >> lados;
            area = (lados * 5) * apotema / 2;
            cout << "El area del pentagono es de: " << area << endl;
            break;
        }

        case 'd':{
            float base, altura, area;
            cout << "Ingresa la medida de la base: "; cin >> base;
            cout << "Ingresa la medida de la altura: "; cin >> altura;
            area = base * altura / 2;
            cout << "El area total de el triangulo es de " << area << endl;
            break;
        }default :
            cout << "Caracter incorrecto. Intentalo de nuevo\n";
        
    }
    return 0;
}



