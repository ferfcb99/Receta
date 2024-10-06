//
// Created by Damaris on 04/10/2024.
//
#include <iostream>
#include <list>
#include "Receta.cpp"

using namespace std;

class ListaReceta {
    public:
    Receta* receta;

    ListaReceta() {
        this->receta = nullptr;
    }
    void agregarReceta(string nombre, double tiempoCoccion, ListaIngredientes listaIngredientes) {
        Receta* nuevaReceta = new Receta(nombre, tiempoCoccion, listaIngredientes);
        if (receta == nullptr) {
            receta = nuevaReceta;
        }else {
            Receta* temporal = receta;
            while (temporal->RecetasSiguiente != nullptr) {
                temporal = temporal->RecetasSiguiente;
            }
            temporal->RecetasSiguiente = nuevaReceta;
        }

    }
    void mostrarReceta() {
        Receta* recetaTemporal = receta;
        if(recetaTemporal ==nullptr) {
            cout<<"Receta esta vacia"<<endl;
        }
        int i = 0;
        while (recetaTemporal != nullptr) {
            std::cout<<"----- RECETA "<<(i+1)<< " ------"<<std::endl;
            std::cout<< recetaTemporal->nombre << " " << recetaTemporal->tiempoCoccion <<std::endl;
            recetaTemporal->listaingredientes.mostrarIngredientes();
            std::cout<<"----- RECETA "<<(i+1)<< " ------"<<std::endl;
            std::cout<<""<<std::endl;
            recetaTemporal = recetaTemporal->RecetasSiguiente;
            i++;
        }
    }
};
