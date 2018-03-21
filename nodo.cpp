/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   nodo.cpp
 * Author: Nandi
 * 
 * Created on 19 de marzo de 2018, 04:18 PM
 */

#include "nodo.h"

nodo::nodo( nodo* sig = NULL ) {
    sigNodo = sig;
}

nodo::nodo(const nodo& orig) {
}

nodo::~nodo() {
    delete sigNodo;
}

nodo* nodo::getSigNodo() {
    return this->sigNodo();
}


void nodo::setSigNodo(nodo* sig) {
    this->sigNodo = sig;
}

string nodo::toString() {
    stringstream s;
    //s << /* getDatoAExtraer() */ ->toString() <<endl;
    return s.str();
}

