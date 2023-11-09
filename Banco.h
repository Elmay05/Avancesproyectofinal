#include <string>
#include <iostream>
//A01712114-Omar Emilio Casillas Alday
//Primera clase
class CuentaBanco{
    private:
        std::string nombre;
        int ingreso_inicial;
        float interes;
    public:
        CuentaBanco();
        CuentaBanco(std::string nom, int inicial, float inter);
        std::string get_nombre();
        int get_ingreso_inicial();
        float get_interes();

        void set_nombre(std::string nom);
        void set_ingreso_inicial(int ini);
        void set_intereses(float inter);
        void resumen();
};
CuentaBanco::CuentaBanco(){
    nombre="N/A";
    ingreso_inicial=0;
    interes=0.0;
}
CuentaBanco::CuentaBanco(std::string nom, int inicial, float inter){
    nombre=nom;
    ingreso_inicial=inicial;
    interes=inter;
}
std::string CuentaBanco::get_nombre(){
    return nombre;
}
int CuentaBanco::get_ingreso_inicial(){
    return ingreso_inicial;
}
float CuentaBanco::get_interes(){
    return interes;
}
void CuentaBanco::set_nombre(std::string nom){
    nombre=nom;
}
void CuentaBanco::set_ingreso_inicial(int ini){
    ingreso_inicial=ini;
}
void CuentaBanco::set_intereses(float inter){
    interes=inter;
}
void CuentaBanco::resumen(){
    std::cout<<nombre<<" inicia con "<<ingreso_inicial<<" con "<<interes<<"% de intereses"<<std::endl;
}


//Segunda clase
class IngresosMensuales{
    private:
        std::string nombre;
        int ingreso_inicial;
        int depositoM;
    public:
        IngresosMensuales();
        IngresosMensuales(std::string nom, int ini, int deposit);
        std::string get_nombre();
        int get_ingreso_inicial();
        int get_depositoM();
        void set_nombre(std::string nom);
        void set_ingreso_inicial(int ini);
        void set_depositoM(int dep);
        void resumen();
};
IngresosMensuales::IngresosMensuales(){
    nombre="No existe";
    ingreso_inicial=0;
    depositoM=0;
}
IngresosMensuales::IngresosMensuales(std::string nom, int ini, int deposit){
    nombre=nom;
    ingreso_inicial=ini;
    depositoM=deposit;
}
std::string IngresosMensuales::get_nombre(){
    return nombre;
}
int IngresosMensuales::get_ingreso_inicial(){
    return ingreso_inicial;
}
int IngresosMensuales::get_depositoM(){
    return depositoM;
}
void IngresosMensuales::set_nombre(std::string nom){
    nombre=nom;
}
void IngresosMensuales::set_ingreso_inicial(int ini){
    ingreso_inicial=ini;
}
void IngresosMensuales::set_depositoM(int dep){
    depositoM=dep;
}
void IngresosMensuales::resumen(){
    std::cout<<nombre<<" inicia con "<<ingreso_inicial<<" y deposita "<<depositoM<<" pesos mensualmente"<<std::endl;
}

//Tercera clase
class GananciasAnual{
    private:
        std::string nombre;
        int ingreso_inicial;
        float intereses;
        int depositoM;
        int anos;
    public:
        GananciasAnual();
        GananciasAnual(std::string nom, int ini, float inter, int dep, int ano);
        std::string get_nombre();
        int get_ingreso_inicial();
        float get_intereses();
        int get_depositoM();
        int get_anos();

        void set_nombre(std::string nom);
        void set_ingreso_inicial(int ini);
        void set_intereses(float inter);
        void set_depositoM(int dep);
        void set_anos(int ano);
        void ganancias();
        void resumen();
};
GananciasAnual::GananciasAnual(){
    nombre="N/A";
    ingreso_inicial=0;
    intereses=0.0;
    depositoM=0;
    anos=0;
}
GananciasAnual::GananciasAnual(std::string nom, int ini, float inter, int dep, int ano){
    nombre=nom;
    ingreso_inicial=ini;
    intereses=inter;
    depositoM=dep;
    anos=ano;
}
std::string GananciasAnual::get_nombre(){
    return nombre;
}
int GananciasAnual::get_ingreso_inicial(){
    return ingreso_inicial;
}
float GananciasAnual::get_intereses(){
    return intereses;
}
int GananciasAnual::get_depositoM(){
    return depositoM;
}
int GananciasAnual::get_anos(){
    return anos;
}
void GananciasAnual::set_nombre(std::string nom){
    nombre=nom;
}
void GananciasAnual::set_ingreso_inicial(int ini){
    ingreso_inicial=ini;
}
void GananciasAnual::set_intereses(float inter){
    intereses=inter;
}
void GananciasAnual::set_depositoM(int dep){
    depositoM=dep;
}
void GananciasAnual::set_anos(int ano){
    anos=ano;
}
void GananciasAnual::ganancias(){
    float total;
    int total_ingresos;
    int total_deposito;

    total=ingreso_inicial;
    total_deposito=depositoM*12;
    if(ingreso_inicial>0 && depositoM>0){
        for(int i=0; i<anos;i++){
          total_ingresos=total_deposito+total;
          total=total_ingresos*(intereses/100)+total_ingresos;
        };
        std::cout<<nombre<<" inicia con $"<<ingreso_inicial<<", tiene "<<intereses<<"% de intereses, mensualmente depositará $"<<depositoM<<" y tendrá "<<total<<" en "<<anos<<" años"<<std::endl;
    }else{
        std::cout<<"No existen beneficios para esta cuenta";
    }
}

// Banco.h
