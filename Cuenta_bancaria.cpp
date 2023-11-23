#include <iostream>
#include <string>
#include "Banco.h"

//A01712114-Omar Emilio Casillas Alday
int main(){


    std::string nom;
    int ing;
    float inter;
    int dep;
    int yea;

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
    GananciasAnual cuenta_1(nom, ing, inter, dep,yea);

    cuenta_1.ganancias();
    //Prueba constructor vacio
    GananciasAnual cuenta_2;
    cuenta_2.resumen();
    cuenta_2.ganancias();




}
