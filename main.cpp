/*realice un programa en C++ que pida mediante consola la siguiente informción_
-Nombre
-apellido
-edad
-sexo
-trabajo
-luego de obtenida la informacion debe de mostras en consola
*/

#include <iostream>

using namespace std;

int main(){
char nombre[30];
string apellidos;
int edad;
char sexo;
bool trabajo;

/*para leer un CHAR cuando se define un tamaño es recomendable mediante un
 * "cin.getline" (nombre_de_la_variable, cantidad_de_caracteres, terminar con un
 * salto de linea "\n") */

    cout <<"Ingrese su nombre : "; cin.getline(nombre, 30, '\n');

/* Cuando se trabaja con un STRING no utilizar el "cin" tampoco el "cin.getline"*/

    cout << "Ingrese su apellido :"; getline(cin, apellidos);
    cout << "Ingrese su edad: "; cin >> edad;
// Cuando se trabaja con un CHAR podemos utilizar un "cin" o un "cin.getline"
    cout << "Ingrese su sexo: "; cin >> sexo;
    cout << "¿Usted trabaja?"; cin >> trabajo;

    //SE ACABAN DE ALMACENAR LAS VARIABLES CON UN "cin" EN CADA VARIABLE//

    cout << " \n##MOSTRANDO RESULTADOS##" << endl;

    cout << "\nSu nombre es: " << nombre << endl;
    cout << "Su apellido es: " << apellidos << endl;
    cout << "Su edad es: " << edad << endl;
    cout << "Su sexo es: " << sexo << endl;
    cout << "Esta trabajando " << trabajo << endl;

    //Si no se pone "return 0" pedira el primer valor pero no
    //permitira ir al siguiente valor
    return 0;
}
