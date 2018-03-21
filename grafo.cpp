/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   grafo.cpp
 * Author: Nandi
 * 
 * Created on 20 de marzo de 2018, 07:41 PM
 */

#include "grafo.h"

grafo::grafo(nodo * N) {
    primero = actual = N;
}

grafo::grafo(const grafo& orig) {
}

grafo::~grafo() {
}

void grafo::insertaNodoActivoFinal(nodo* nd) {
    actual = primero;
    if( primero == NULL ) {
        primero = new nodo( nd, primero);
    }
    else {
        actual = primero;
        while( actual->getSigNodo() != NULL) {
            actual = actual->setSigNodo();
        }
        actual->setSigNodo( new nodo( nd, NULL));
    }
        
}

