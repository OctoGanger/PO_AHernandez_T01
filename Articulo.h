//
// Created by alhec on 15/01/2018.
//

#ifndef PO_AHERNANDEZ_T01_ARTICULO_H
#define PO_AHERNANDEZ_T01_ARTICULO_H

#include<iostream>;

class Articulo {
//Atributos

protected:
    int existencia;
    double precio;
    double costo;


public:
    int sku;
    std::string descripcion;

    // constructor
    Articulo();
    Articulo (int sku, std:: string desc, double pr);


    // *******METODOS******

    //Generales
    void compra( int artComp, double cos);

    bool venta( int existencia,int artVendidos);

    int verificarExistencia();

    void actualizarPrecio(double pr);


    // Getters
    int getExistencia();
    double getPrecio();
    double getCosto();

    //Setters
void setExistencia (int ex);
    void setPrecio(double pr);
    void setCost( double cos);








};


#endif //PO_AHERNANDEZ_T01_ARTICULO_H
