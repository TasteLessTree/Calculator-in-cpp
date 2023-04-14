#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

int linea (){
    cout << "------------------------------" << endl;
    return 0;
}

int main(){
    linea();
    // Números que se van a operar
    cout << "Escribe un número: ";
    float x;
    cin >> x;

    cout << "Escribe otro número: ";
    float y;
    cin >> y;

    float z;
    z = 1/y;

    linea();
    cout << "\n\n";

    while (true)
    {
        cout << endl;
        linea();
        //Operaciones
        cout << "Elija una opción: \n";
        cout << "1 → cambiar números" << endl;
        cout << "+ → sumar" << endl;
        cout << "- → restar" << endl;
        cout << "* → multiplicar" << endl;
        cout << "/ → dividir"  << endl;
        cout << "\% → resto de la división" << endl;
        cout << "** → " << x << " elevado a " << y << endl;
        cout << "rz → raíz de " << x << " con índice " << y << endl;
        cout << "log → logaritmo de " << x << " en base " << y << endl;
        cout << "pc → " << x << "\% de " << y << endl;
        cout << "'X' para cerrar" << endl;

        linea();

        //Preguntar sobre la opción elegida
        string operadores;
        cout << "¿Tu opción? ";
        cin >> operadores;
        
        if (operadores == "1"){ //Cambiar valores
            cout << "Escribe un número: ";
            cin >> x;

            cout << "Escribe otro número: ";
            cin >> y;
            float z = 1/y;
           
        } else if (operadores == "+"){ //Suma
            cout << x + y << endl;
        } else if (operadores == "-"){ //Resta
            cout << x -y << endl;
        } else if (operadores == "*"){ //Multiplicaión
            cout << x * y << endl;
        } else if (operadores == "/"){ //División
            //Excepción
            if (y == 0){
                cout << "No se puede dividir entre 0" << endl;
            }
            else{
                cout << x / y << endl;
            }
        } else if (operadores == "%"){ //Módulo
            //Excepción
            if (y == 0){
                cout << "No se puede dividir entre 0" << endl;
            } else{
                cout << fmod(x, y) << endl;
            }
        } else if (operadores == "**"){ //Potenicas
            cout << pow(x, y) << endl;
        } else if (operadores == "rz"){ //Raíces
            //Excepción con índices pares y x<0
            if (x == -1 && y == 2){
                cout << "i" << endl;
            } else if (x < 0 && y == 2){
                cout << to_string(pow(abs(x), z)) + "i" << endl;
            } else if (x < 0 && fmod(y, 2) != 0){
                cout << pow(x, z) << endl;
            } else if (x < 0 && fmod(y, 2) == 0){
                cout << to_string(pow(abs(x), z)) + "i" << endl;
            } else{ //Raíz normal
                cout << pow(x, z) << endl;
            }
        } else if (operadores == "log"){ //Logaritmos
            //Excepciones
            if ( x <= 0 || y <= 0){
                cout << "Ni el argumento ni la base pueden ser negativos" << endl;
                
                cout << "Escribe un número: ";
                cin >> x;

                cout << "Escribe otro número: ";
                cin >> y;
                float z = 1/y;
            } else if (y == 1){
                cout << "0" << endl;
            } else{ //Logaritmo de X en base Y
                double lg = log(x) / log(y);
                cout << lg << endl;
            }
        } else if (operadores == "pc"){ //X% de Y
            cout << (x*y)/100 << endl;
        } else if (operadores == "X" || operadores == "x"){
            cout << "Aplicación cerrada" << endl;
            break;
        } else{ //Operador incorrecto
            cout << "Operador incorrecto, por favor introduzca otro: " << endl;
        }
    }
    return 0;
}

//TLT
