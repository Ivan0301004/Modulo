#include <iostream>
using namespace std;

int main()
{
    char option;

    cout << "Este programa es un convertidor de Pesos Mexicanos\n";
    cout << "a las monedas mas importantes en el mundo actualmente.\n";

    cout << "Elije una de las siguintes diez opciones,\n colocando el caracater correspondiente.\n\n\n";
    cout << "a) Dolar Americano\nb) Euro\nc) Libra Esterlina\nd) Franco Suizo\n";
    cout << "e) Yen Japones\nf) Dolar Hongkones\ng) Dolar Canadiense\nh) Yuan Chino\n";
    cout << "i) Dolar Australiana\nj) Real Brasilenho\n\n";

    cout << "Eleccion: ";
    cin >> option;

    switch (option)
    {
    case 'a':
    {
        float pesos, total;
        cout << "Ingresa la cantidad de pesos a convertir: ";
        cin >> pesos;
        total = pesos / 20.3;
        cout << pesos << " Pesos Mexicanos equivalen a " << total << " Dolares Americanos\n";
        break;
    }

    case 'b':
    {
        float pesos, total;
        cout << "Ingresa la cantidad de pesos a convertir: ";
        cin >> pesos;
        total = pesos / 22;
        cout << pesos << " Pesos Mexicanos equivalen a " << total << " Euros\n";
        break;
    }

    case 'c':
    {
        float pesos, total;
        cout << "Ingresa la cantidad de pesos a convertir: ";
        cin >> pesos;
        total = pesos / 26.43;
        cout << pesos << " Pesos Mexicanos equivalen a " << total << " Libras Esterlinas\n";
        break;
    }

    case 'd':
    {
        float pesos, total;
        cout << "Ingresa la cantidad de pesos a convertir: ";
        cin >> pesos;
        total = pesos / 21.56;
        cout << pesos << " Pesos Mexicanos equivalen a " << total << " Francos Suizo\n";
        break;
    }

    case 'e':
    {
        float pesos, total;
        cout << "Ingresa la cantidad de pesos a convertir: ";
        cin >> pesos;
        total = pesos / 0.1641008;
        cout << pesos << " Pesos Mexicanos equivalen a " << total << " Yenes Japones\n";
        break;
    }

    case 'f':
    {
        float pesos, total;
        cout << "Ingresa la cantidad de pesos a convertir: ";
        cin >> pesos;
        total = pesos / 2.5587;
        cout << pesos << " Pesos Mexicanos equivalen a " << total << " Dolares Hongkoneses\n";
        break;
    }

    case 'g':
    {
        float pesos, total;
        cout << "Ingresa la cantidad de pesos a convertir: ";
        cin >> pesos;
        total = pesos / 16.05;
        cout << pesos << " Pesos Mexicanos equivalen a " << total << " Dolares Canadienses\n";
        break;
    }

    case 'h':
    {
        float pesos, total;
        cout << "Ingresa la cantidad de pesos a convertir: ";
        cin >> pesos;
        total = pesos / 3.1469;
        cout << pesos << " Pesos Mexicanos equivalen a " << total << " Yuanes Chinos\n";
        break;
    }

    case 'i':
    {
        float pesos, total;
        cout << "Ingresa la cantidad de pesos a convertir: ";
        cin >> pesos;
        total = pesos / 14.8411;
        cout << pesos << " Pesos Mexicanos equivalen a " << total << " Dolares Autralianos\n";
        break;
    }

    case 'j':
    {
        float pesos, total;
        cout << "Ingresa la cantidad de pesos a convertir: ";
        cin >> pesos;
        total = pesos / 4.2236;
        cout << pesos << " Pesos Mexicanos equivalen a " << total << " Reales Brazilenhos\n";
        break;
    }

    default:
        cout << "Caracter incorrecto. Intentalo de nuevo\n\n";
    }
    return 0;
}
