//
// Created by Damaris on 04/10/2024.
//
#include "ListaIngredientes.cpp"
#include <iostream>
using namespace std;

class Receta {
public:
    string nombre;
    double tiempoCoccion;
   ListaIngredientes listaingredientes;

    Receta* RecetasSiguiente;

    Receta(string nombre, double tiempoCoccion, ListaIngredientes listaingredientes) {
        this->nombre = nombre;
        this->tiempoCoccion = tiempoCoccion;
        this->listaingredientes = listaingredientes;
        this->RecetasSiguiente = nullptr;

    }


};