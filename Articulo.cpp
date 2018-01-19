//
// Created by alhec on 15/01/2018.
//

#include "Articulo.h"

//Definicion de Métodos y Constructor

Articulo::Articulo() {
    this->costo = 0;
    this->descripcion = "";
    this->existencia = 0;
    this->precio = 0;
    this->sku = 0;

}

 Articulo:: Articulo (int sku, std:: string desc, double pr){
this->costo = 0;
this->descripcion = descripcion;
this->existencia = 0;
this->precio = precio;
this->sku = sku;

    }

//METODOS

void Articulo::compra(int artComp, double cos) {
    this->existencia = existencia + artComp;
    this->costo = cos;
}

bool Articulo::venta(int existencia, int artVendidos) {

    if (existencia < artVendidos) {
        this->costo = false;
    } else(existencia == artVendidos);{
        this->costo=true;
    }

}

int Articulo::verificarExistencia() {
    return existencia;
}

void Articulo::actualizarPrecio(double pr) {
    this->precio=pr;

}
