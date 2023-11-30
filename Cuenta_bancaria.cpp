#include <iostream>
#include <string>
#include "Banco.h"
/*
 *Main de proyecto plan de finanzas 
 *Omar Emilio Casillas Alday 
 *A01712114
 *30/11/2023
 *
 */
void main(){

    //Variables para los valores a solicitar
    std::string nom;
    int ing;
    float inter;
    int dep;
    int yea;
    //Peidmos los valores para crear el objeto
    std::cout<<"Inserte nombre:";
    std::cin>>nom;
    std::cout<<"Inserte ingreso inicial:";
    std::cin>>ing;
    std::cout<<"Inserte intereses:";
    std::cin>>inter;
    std::cout<<"Inserte Deposito Mensual:";
    std::cin>>dep;
    std::cout<<"Inserte por cuantos años:";
    std::cin>>yea;
    //Asignamos los valores al objeto
    GananciasAnual cuenta_1(nom, ing, inter, dep,yea);
    //Mostramos ganancias y resumen de cuenta
    cuenta_1.ganancias();
    //Prueba con constructor vacio
    GananciasAnual cuenta_2;
    cuenta_2.resumen();
    cuenta_2.ganancias();




}
