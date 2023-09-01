#include <iostream>
#include <string>

using namespace std;

class CEmpleado {
private:
    string nombre;
    int anio_ingreso;
    float salario;
    string direccion;

public:
    CEmpleado(string n, int anio, float sal, const string& dir);

    string GetNombre();
    int GetAnioIngreso();
    string GetDireccion();
    float GetSalario();

    int CalcularAntiguedad();
    bool ViveEnWallStreet();
};

CEmpleado::CEmpleado(string n, int anio, float sal, const string& dir) {
    nombre = n;
    anio_ingreso = anio;
    salario = sal;
    direccion = dir;
}

string CEmpleado::GetNombre() {
    return nombre;
}

int CEmpleado::GetAnioIngreso() {
    return anio_ingreso;
}

string CEmpleado::GetDireccion() {
    return direccion;
}

float CEmpleado::GetSalario() {
    return salario;
}

int CEmpleado::CalcularAntiguedad() {
    int anio_actual = 2023;
    return anio_actual - anio_ingreso;
}

bool CEmpleado::ViveEnWallStreet() {
    return direccion.find("WallStreet") != string::npos;
}

int main() {
    string nombre = "Robert";
    int anio_ingreso = 2014;
    float salario = 80.000;
    string direccion = "64C- WallStreet";

    CEmpleado empleado(nombre, anio_ingreso, salario, direccion);

    cout << "Name\tYear of joining\tAddress" << endl;
    cout << empleado.GetNombre() << "\t" << empleado.GetAnioIngreso() << "\t\t" << empleado.GetDireccion() << endl;

    cout << "\nAnios en servicio: " << empleado.CalcularAntiguedad() << " Anios." << endl;


    if (empleado.ViveEnWallStreet()) {
        cout << "\nEl empleado vive en Wall Street." << endl;
    } else {
        cout << "\nEl empleado no vive Wall Street." << endl;
    }

    return 0;
}


