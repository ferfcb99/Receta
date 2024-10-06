#include <iostream>
#include <ostream>
//#include "ListaIngredientes.cpp"
#include <list>
//
// Created by Damaris on 04/10/2024.
//
#include "ListaReceta.cpp"


ListaIngredientes capturaIngredientes() {

    int cantidadIngredientes = 0;
    std::cout << "Ingrese la cantidad de ingredientes que deseas incluir en tu receta"<<std::endl;
    std::cin >> cantidadIngredientes;
    int i = 1;

    ListaIngredientes listaIngredientes;

    while (cantidadIngredientes > 0) {
        string nombreIngrediente;
        double precioIngrediente;
        std::cout << "Ingresa el nombre del ingrediente  " << i << std::endl;
        std::cin >> nombreIngrediente;
        std::cout << "Ingresa el percio del ingrediente  " << i << std::endl;
        std::cin >> precioIngrediente;

        // agregando ingrediente a la lista
        listaIngredientes.agregarIngrediente(nombreIngrediente, precioIngrediente);

        cantidadIngredientes--;
        i++;
    }

    return listaIngredientes;
}

int main() {

    ListaIngredientes listaIngredientes;
    listaIngredientes.agregarIngrediente("Tortillas, Precio-> $", 20);
    listaIngredientes.agregarIngrediente("Pollo, Precio-> $", 60);
    listaIngredientes.agregarIngrediente("Salsa verde, Precio-> $", 40);


    ListaIngredientes listaIngredientes1;
    listaIngredientes1.agregarIngrediente("Pollo, Precio-> $", 60);
    listaIngredientes1.agregarIngrediente("Zanahorias, Precio-> $", 10);
    listaIngredientes1.agregarIngrediente("Papas, Precio-> $", 35);

    ListaReceta listaReceta;
    listaReceta.agregarReceta(" Enchiladas Suizas -> El tiempo de coccion es: ", 2.5, listaIngredientes);
    listaReceta.agregarReceta("Caldo de Pollo", 10.5, listaIngredientes1);


    std::cout << "-----BIENVENIDO AL MENU DE RECETAS DEL CHAVO DEL OCHO VA A QUERER SU TORTA DE JAMON?-----";
    int opcion;
    do {
        std::cout << "1. Ver recetas disponibles" << std::endl;
        std::cout << "2. Agregar nueva receta" << std::endl;
        std::cout << "3. Modificar receta" << std::endl;
        std::cout << "4. Eliminar receta" << std::endl;
        std::cout << "5. Salir" << std::endl;
        std::cout << "Seleccione una opcion: ";
        std::cin >> opcion;
        switch (opcion) {
            case 1:
                listaReceta.mostrarReceta();
                break;
            case 2: {
                std::cout << "Ingrese el nombre de la receta a agregar: "<<std::endl;
                string nombreReceta;
                std::cin >> nombreReceta;

                std::cout << "Ingrese el tiempo de coccion de la receta a agregar: "<<std::endl;
                double tiempoCoccion;
                std::cin >> tiempoCoccion;

                ListaIngredientes lista_Ingredientes = capturaIngredientes();

                listaReceta.agregarReceta(nombreReceta, tiempoCoccion, lista_Ingredientes);
                break;
            }
            case 3:
                break;
            case 4:
                break;
            case 5:
                cout<<"Saliendo.....";
                break;
            case 6:
                cout<<"El numero ingresado es incorrecto, ayudanos poniendo un numero del 1 al 5\n";
                cout<<"\n";
                break;
        }
    }while(opcion != 5);





}


