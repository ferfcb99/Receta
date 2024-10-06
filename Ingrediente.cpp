//

#include <iostream>
using namespace std;

class Ingrediente {
public:
    string nombre;
    double precio;

    Ingrediente *ingredienteSiguiente;

    Ingrediente(string nombre, double precio) {
        this->nombre = nombre;
        this->precio = precio;
        this->ingredienteSiguiente = nullptr;
    }



};