//
// Created by Damaris on 03/
#include <iostream>
#include "Ingrediente.cpp"
using namespace std;

class ListaIngredientes {
public:

    Ingrediente* ingredientes; // esta es la lista de ingrediente // [tomate, lechuga, POLLO]
                                                                    // tmp:  [tomate, lechuga, POLLO,  atun]

    ListaIngredientes() {
        this->ingredientes = nullptr;
    }

    void agregarIngrediente(string nombre, double precio) {
        Ingrediente* nuevoIngrediente = new Ingrediente(nombre, precio);

        if(ingredientes == nullptr) {
            ingredientes = nuevoIngrediente;
        }else {
            Ingrediente* temp = ingredientes;
            while(temp->ingredienteSiguiente != nullptr) {
                temp = temp->ingredienteSiguiente;
            }
            temp->ingredienteSiguiente = nuevoIngrediente;
        }


    }

    void mostrarIngredientes() { // [tomate, lechuga, POLLO,  atun]
        Ingrediente* listaTemporal = ingredientes;
        if(listaTemporal == nullptr) {
            std::cout<<"La lista es null"<<std::endl;
        }
        cout << "\nINGREDIENTES:" << endl;
        while(listaTemporal != nullptr) {
            std::cout<< listaTemporal->nombre << " " << listaTemporal->precio<<std::endl;
            listaTemporal = listaTemporal->ingredienteSiguiente;
        }

    }

};