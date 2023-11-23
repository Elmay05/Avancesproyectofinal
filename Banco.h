#ifndef BANCO_H_INCLUDED
#define BANCO_H_INCLUDED
//Omar Emilio Casillas Alday - A01712114

class IngresosAnuales{
    private:
        int depositoM;
        int ingresosa;
    public:
        IngresosAnuales():depositoM(0), ingresosa(0){};
        IngresosAnuales(int deposite):depositoM(deposite), ingresosa(deposite*12){};
        int get_depositoM();
        int get_ingresosa();
        void set_depositoM(int dep);
        void resumei();
};

int IngresosAnuales::get_depositoM(){
    return depositoM;
}
int IngresosAnuales::get_ingresosa(){
    return ingresosa;
}
void IngresosAnuales::set_depositoM(int dep){
    depositoM=dep;
    ingresosa=dep*12;
}
void IngresosAnuales::resumei(){
    std::cout<<" deposita "<<depositoM<<" pesos mensualmente y tendrá "<<ingresosa<<"al año"<<std::endl;
}



class CuentaBanco{
    protected:
        std::string nombre;
        int ingreso_inicial;
        float interes;
        IngresosAnuales ingresosanuales;
    public:
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
CuentaBanco::CuentaBanco():ingresosanuales(){
    nombre="N/A";
    ingreso_inicial=0;
    interes=0.0;
}
CuentaBanco::CuentaBanco(std::string nom, int inicial, float inter,int deposite):ingresosanuales(deposite){
    nombre=nom;
    ingreso_inicial=inicial;
    interes=inter;
}
int CuentaBanco::get_deposito(){
    return ingresosanuales.get_depositoM();
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
    ingresosanuales.resumei();
}

class GananciasAnual:public CuentaBanco{
    private:
        int year;
    public:
        GananciasAnual();
        GananciasAnual(std::string nom, int ini, float inter, int deposite, int yea);
        int get_year();
        void set_depositoM(int dep);
        void set_year(int yea);
        void ganancias();

};
GananciasAnual::GananciasAnual():CuentaBanco(){
    year=0;
}
GananciasAnual::GananciasAnual(std::string nom, int ini, float inter, int deposite, int yea):CuentaBanco(nom, ini, inter, deposite){
    year=yea;
}

int GananciasAnual::get_year(){
    return ingresosanuales.get_ingresosa();
}
void GananciasAnual::set_depositoM(int dep){
    ingresosanuales.set_depositoM(dep);
}
void GananciasAnual::set_year(int yea){
    year=yea;
}
void GananciasAnual::ganancias(){
    float total;
    int total_ingresos;
    int total_deposito;
    int depositoM;
    depositoM=ingresosanuales.get_depositoM();
    total=ingreso_inicial;
    total_deposito=ingresosanuales.get_ingresosa();
    if(ingreso_inicial>0 && depositoM>0){
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
