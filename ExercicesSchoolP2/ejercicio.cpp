#include <iostream>
using namespace std;

int main()
{
    char option;

    cout << "\n\nElije una de las siguintes opciones: \n\n";
    cout << "a) Saber si una persona es alta\n";
    cout << "b) saber si eres de clase media o baja\n";
    cout << "c) Saber tu indice de masa corporal y por consecuencia saber tu estado fisico\n";

    cout << "ELeccion: ";
    cin >> option;

    switch (option)
    {
    case 'a':
    {
        int estatura;
        cout << "Ingresa tu estatura en  centimetros: ";
        cin >> estatura;
        if (estatura > 175)
        {
            cout << "Eres alto\n";
        }
        break;
    }

    case 'b':
    {
        int sueldo;
        cout << "Ingresa tu sueldo mensual: ";
        cin >> sueldo;
        if (sueldo >= 22500 && sueldo <= 45000)
        {
            cout << "Eres considerado clase media en Mexico\n";
        }
        else if(sueldo >= 10000 && sueldo < 22500)
        {
                cout << "Eres considerado clase media baja en Mexico\n";
        }else{
            cout << "Eres considerado clase baja en Mexico\n";
        }
        break;
    }       

    case 'c':
    {
        int peso;
        float estatura, imc;
        cout << "Ingresa tu peso en kilogramos: ";
        cin >> peso;
        cout << "Ingresa tu estatura en metros: ";
        cin >> estatura;
        imc = peso / (estatura * estatura);
        if (imc > 30.0)
        {
            cout << "Tu IMC es de " << imc << " eso significa que tienes sobrepeso\n";
        }
        else if (imc > 25.0 && imc < 29.9)
        {
            cout << "Tu indice de masa corporal es de " << imc << " eso significa que tienes peso superior al normal\n";
        }
        else if (imc > 18.5 && imc < 24.9)
        {
            cout << "Tu indice de masa corporal es de " << imc << " eso significa que tu peso es normal\n";
        }
        else
        {
            cout << "Tu indice de masa corporal es de " << imc << " eso significa que tienes un peso inferior al normal\n";
        }
        break;
    }
    }
    return 0 ;
}



