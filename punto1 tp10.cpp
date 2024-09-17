#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Alumno {
private:
string nombre;
double nota1;
double nota2;
double nota3;
public:
Alumno(string nombre, int nota1, int nota2, int nota3)
: nombre(nombre), nota1(nota1), nota2(nota2), nota3(nota3) {}
string getNombre() const { return nombre; }
double getNota1() const { return nota1; }
double getNota2() const { return nota2; }
double getNota3() const { return nota3; }
double calcularPromedio() const { return (nota1 + nota2 + nota3)/ 3; }
};
int main() {
vector<Alumno> alumnos;
string nombre;
int nota1, nota2, nota3;
cout << "Ingrese el nombre del alumno: ";
cin >> nombre;
cout << "Ingrese la nota 1 del alumno: ";
cin >> nota1;
cout << "Ingrese la nota 2 del alumno: ";
cin >> nota2;
cout << "Ingrese la nota 3 del alumno: ";
cin >> nota3;
cout << "Nombre: " <<nombre << endl;
cout << "Nota 1: " <<nota1 << endl;
cout << "Nota 2: " <<nota2 << endl;
cout << "Nota 3: " <<nota3 << endl;
cout << endl;
return 0;
}
