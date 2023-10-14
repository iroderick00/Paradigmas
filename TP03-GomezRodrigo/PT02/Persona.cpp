#include "Persona.h"
#include <iostream>

Persona::Persona(string _nombre, string _biografia, int _edad) : nombre(nombre), biografia(_biografia), edad(_edad) {}

Persona::Persona(const Persona &copia) : nombre(copia.nombre), biografia(copia.biografia), edad(copia.edad){}

Persona::~Persona(){}

string Persona::GetNombre(){ return nombre; }

string Persona::GetBiografia(){ return biografia; }

int Persona::GetEdad(){ return edad; }

void Persona::MostrarInformacion()
{
    cout << "Nombre: " << nombre << endl;
    cout << "Biografia: " << biografia << endl;
    cout << "Edad: " << edad << endl;
}