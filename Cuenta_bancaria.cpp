#include <iostream>
#include <string>
#include "Banco.h"

//A01712114-Omar Emilio Casillas Alday
int main(){
    //pruebas primera clase
    std::string nom;
    int ing;
    float inter;


    CuentaBanco cuenta_2;
    std::cout<<"Inserte nombre:";
    std::cin>>nom;
    std::cout<<"Inserte ingreso inicial:";
    std::cin>>ing;
    std::cout<<"Inserte intereses:";
    std::cin>>inter;
    CuentaBanco cuenta_1(nom, ing, inter);
    std::cout<<"Nombre:"<<cuenta_1.get_nombre()<<std::endl;
    std::cout<<"Ingreso inicial:"<<cuenta_1.get_ingreso_inicial()<<std::endl;
    std::cout<<"Intereses:"<<cuenta_1.get_interes()<<"%"<<std::endl;
    cuenta_1.set_nombre("Roberto");
    cuenta_1.set_ingreso_inicial(2000);
    cuenta_1.set_intereses(7.4);
    cuenta_1.resumen();
    std::cout<<"Prueva cuenta_2:"<<std::endl;
    cuenta_2.resumen();
    std::cout<<'\n';





    //pruebas segunda clase
    int dep;
    std::cout<<"Inserte nombre:";
    std::cin>>nom;
    std::cout<<"Inserte ingreso inicial:";
    std::cin>>ing;
    std::cout<<"Inserte deposito mensual:";
    std::cin>>dep;

    IngresosMensuales cuenta_3;

    IngresosMensuales cuenta_4(nom, ing, dep);
    std::cout<<"Nombre:"<<cuenta_4.get_nombre()<<std::endl;
    std::cout<<"Ingreso inicial:"<<cuenta_4.get_ingreso_inicial()<<std::endl;
    std::cout<<"Deposito mensual: $"<<cuenta_4.get_depositoM()<<std::endl;
    cuenta_4.set_nombre("Ximena");
    cuenta_4.set_ingreso_inicial(5000);
    cuenta_4.set_depositoM(500);
    cuenta_4.resumen();
    std::cout<<"Prueva cuenta_3:"<<std::endl;
    cuenta_3.resumen();
    std::cout<<'\n';
    //pruebas tercera clase
    int ano;
    std::cout<<"Inserte nombre:";
    std::cin>>nom;
    std::cout<<"Inserte ingreso inicial:";
    std::cin>>ing;
    std::cout<<"Inserte deposito mensual:";
    std::cin>>dep;
    std::cout<<"Inserte intereses:";
    std::cin>>inter;
    std::cout<<"Inserte años:";
    std::cin>>ano;
    GananciasAnual cuenta_5;
    GananciasAnual cuenta_6(nom, ing, inter,dep, ano);
    std::cout<<"Nombre:"<<cuenta_6.get_nombre()<<std::endl;
    std::cout<<"Ingreso inicial:"<<cuenta_6.get_ingreso_inicial()<<std::endl;
    std::cout<<"Intereses:"<<cuenta_6.get_intereses()<<std::endl;
    std::cout<<"Deposito mensual: $"<<cuenta_6.get_depositoM()<<std::endl;
    std::cout<<"Años:"<<cuenta_6.get_anos()<<std::endl;
    cuenta_6.ganancias();
    cuenta_6.set_nombre("Emilio");
    cuenta_6.set_ingreso_inicial(1000);
    cuenta_6.set_intereses(11.7);
    cuenta_6.set_depositoM(500);
    cuenta_6.set_anos(2);
    cuenta_6.ganancias();
    std::cout<<"Prueva cuenta_5:"<<std::endl;
    cuenta_5.ganancias();
