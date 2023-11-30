#ifndef BANCO_H_INCLUDED
#define BANCO_H_INCLUDED
#include <iostream>
/*
 *Proyecto plan de finanzas 
 *Omar Emilio Casillas Alday 
 *A01712114
 *30/11/2023
 *
 */


/* 
 *Clase IngresosAnuales que contiene los depositos mensuales y los hace anuales
 *con el fin de utilizarlos mas adelante en la clase CuentaBanco
 *
 */
//Declaracion de la clase que será objeto 
class IngresosAnuales{
    private:
        //Declaro las variables de instancia
        int depositoM;
        int ingresosa;
    public:
        //Declaro metodos
        //Constructor default
        IngresosAnuales():depositoM(0), ingresosa(0){};
        //Constructor con parametros para llenar
        IngresosAnuales(int deposite):depositoM(deposite), ingresosa(deposite*12){};
        int get_depositoM();
        int get_ingresosa();
        void set_depositoM(int dep);
        void resumei();
};
//getter deposito mensual
int IngresosAnuales::get_depositoM(){
    return depositoM;
}
//getter ingresos anuales
int IngresosAnuales::get_ingresosa(){
    return ingresosa;
}
//setter deposito mensual que cambia tambien el ingreso anual
void IngresosAnuales::set_depositoM(int dep){
    depositoM=dep;
    ingresosa=dep*12;
}
//Crea un resumen del objeto mostrando el seposito mensual y el ingreso anual
void IngresosAnuales::resumei(){
    std::cout<<" deposita "<<depositoM<<" pesos mensualmente y tendrá "<<ingresosa<<"al año"<<std::endl;
}

/*
 *Clase CuentaBanco que es donde registran la cuenta bancaria de una persona la cual heredará
 *sus atributos a otra clase llamada GananciasAnuales 
 *
 */

//Declaracion de la clase CuentaBanco
class CuentaBanco{
    protected:
        //Declaaro variables de instancia
        std::string nombre;
        int ingreso_inicial;
        float interes;
        IngresosAnuales ingresosanuales;
    public:
        //Declaro los metodos que va a tener el objeto
        CuentaBanco();
        CuentaBanco(std::string nom, int inicial, float inter,int deposite);
        std::string get_nombre();
        int get_ingreso_inicial();
        float get_interes();
        int get_deposito();
        void set_nombre(std::string nom);
        void set_ingreso_inicial(int ini);
        void set_intereses(float inter);
        void resumen();
};
//Constructor por default que usa constructor default de objeto ingresosanuales
CuentaBanco::CuentaBanco():ingresosanuales(){
    nombre="N/A";
    ingreso_inicial=0;
    interes=0.0;
}
/*Constructor que resive los valores para llenar las variables de instancia y utiliza constructor que resive valores para 
*llenar varialbes del nuevo objeto
*/
CuentaBanco::CuentaBanco(std::string nom, int inicial, float inter,int deposite):ingresosanuales(deposite){
    nombre=nom;
    ingreso_inicial=inicial;
    interes=inter;
}

//getter deposito
int CuentaBanco::get_deposito(){
    return ingresosanuales.get_depositoM();
}
//getter nombre
std::string CuentaBanco::get_nombre(){
    return nombre;
}
//getter ingreso inicial
int CuentaBanco::get_ingreso_inicial(){
    return ingreso_inicial;
}
//getter intereses
float CuentaBanco::get_interes(){
    return interes;
}
//seter nombre
void CuentaBanco::set_nombre(std::string nom){
    nombre=nom;
}
//seter ingreso inicial
void CuentaBanco::set_ingreso_inicial(int ini){
    ingreso_inicial=ini;
}
//seter intereses
void CuentaBanco::set_intereses(float inter){
    interes=inter;
}
//imprime un resumen de la cuenta mostrando nombre, ingreso inicial, intereses y el resumen del objeto ingresos anuales
void CuentaBanco::resumen(){
    std::cout<<nombre<<" inicia con "<<ingreso_inicial<<" con "<<interes<<"% de intereses"<<std::endl;
    ingresosanuales.resumei();
}
//Declaracino de la clace GananciasAnuales que hereda de CuentaBanco
class GananciasAnual:public CuentaBanco{
    private:
        //Declaro variables de instancia
        int year;
    public:
        //Declaro lso metodos del objeto
        GananciasAnual();
        GananciasAnual(std::string nom, int ini, float inter, int deposite, int yea);
        int get_year();
        void set_depositoM(int dep);
        void set_year(int yea);
        void ganancias();

};
//Constructor por default que utiliza constructor default de CuentaBanco
GananciasAnual::GananciasAnual():CuentaBanco(){
    year=0;
}
/*
 *Constructor donde recibe valores para llenar las variables de instancia 
 *que utiliza Constructor de CuentaBanco donde recibe valores para llenar las variables de instancia
 */

GananciasAnual::GananciasAnual(std::string nom, int ini, float inter, int deposite, int yea):CuentaBanco(nom, ini, inter, deposite){
    year=yea;
}
//getter de los añor a invertir
int GananciasAnual::get_year(){
    return ingresosanuales.get_ingresosa();
}
//seter de depositoMensual que utiliza setter del objeto ingresos anuales
void GananciasAnual::set_depositoM(int dep){
    ingresosanuales.set_depositoM(dep);
}
//setter de los años a invertir 
void GananciasAnual::set_year(int yea){
    year=yea;
}
/*Calcula cuales son las ganancias anuales con los datos recibidos y da un resumen de todo si es que hay datos
 *en caso de que no, manda un mensaje mostrando que no existen beneficios para la cuenta
 */
    
void GananciasAnual::ganancias(){
    float total;
    int total_ingresos;
    int total_deposito;

    ;
    total=ingreso_inicial;
    total_deposito=ingresosanuales.get_ingresosa();
    if(ingreso_inicial>0 && ingresosanuales.get_depositoM()>0){
        for(int i=0; i<year;i++){
          total_ingresos=total_deposito+total;
          total=total_ingresos*(interes/100)+total_ingresos;
        };
        std::cout<<nombre<<" inicia con $"<<ingreso_inicial<<", tiene "<<interes<<"% de intereses, mensualmente depositará $"<<ingresosanuales.get_depositoM()<<" y tendrá "<<total<<" en "<<year<<" años"<<std::endl;
    }else{
        std::cout<<"No existen beneficios para esta cuenta";

    }
}

#endif // BANCO_H_INCLUDED
