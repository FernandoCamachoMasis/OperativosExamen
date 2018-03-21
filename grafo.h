/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   grafo.h
 * Author: Nandi
 *
 * Created on 20 de marzo de 2018, 07:41 PM
 */

#ifndef GRAFO_H
#define GRAFO_H

#include <list>

#include "nodo.h"

class grafo {
public:
    grafo(nodo*);
    grafo(const grafo& orig);
    virtual ~grafo();
    virtual string toString();
    
    virtual void insertaNodoActivoFinal( nodo* nd );
    
private:
    
    nodo* primero;
    nodo* actual;
    list <nodo> * l; 
    

};

#endif /* GRAFO_H */

