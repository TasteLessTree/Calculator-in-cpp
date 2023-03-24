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
    cout << "Escribe un número: " << endl;
    float x;
    cin >> x;

    cout << "Escribe otro número: " << endl;
    float y;
    cin >> y;

    float a;
    a = 1/y;

    linea();
    cout << "\n\n";

    while (true)
    {
        linea();
        //Operaciones
        cout << "Elija una opción \n";
        cout << "1 para cambiar números" << endl;
        cout << "+ para sumar" << endl;
        cout << "- para restar" << endl;
        cout << "* para multiplicar" << endl;
        cout << "/ para dividir"  << endl;
        cout << "\% para resto de la división" << endl;
        cout << "** para " << x << " elevado a " << y << endl;
        cout << "rz para raíz de " << x << " con índice " << y << endl;
        cout << "log para logaritmo de " << x << " en base " << y << endl;
        cout << "pc para el " << x << "\% de " << y << endl;
        cout << "'X' para cerrar" << endl;

        linea();

        //Preguntar sobre la opción elegida
        string operadores;
        cout << "¿Tu opción?" << endl;
        cin >> operadores;
        
        if (operadores == "1"){ //Cambiar valores
            cout << "Escribe un número: " << endl;
            cin >> x;

            cout << "Escribe otro número: " << endl;
            cin >> y;
           float a = 1/y;
           
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
                cout << "𝓲" << endl;
            } else if (x < 0 && y == 2){
                cout << to_string(pow(abs(x), a)) + "𝓲" << endl;
            } else if (x < 0 && fmod(y, 2) != 0){
                cout << pow(x, a) << endl;
            } else if (x < 0 && fmod(y, 2) == 0){
                cout << to_string(pow(abs(x), a)) + "𝓲" << endl;
            } else{ //Raíz normal
                cout << pow(x, a) << endl;
            }
        } else if (operadores == "log"){ //Logaritmos
            //Excepciones
            if ( x <= 0 || y <= 0){
                cout << "Ni el argumento ni la base pueden ser negativos" << endl;
                
                cout << "Escribe un número: " << endl;
                float x;
                cin >> x;

                cout << "Escribe otro número: " << endl;
                float y;
                cin >> y;

                float a;
                a = 1/y;   
            } else if (y == 1){
                cout << "0" << endl;
            } else{ //Logaritmo en base X de argumento Y
                double lg = log(y) / log(x);
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
