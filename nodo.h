/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   nodo.h
 * Author: Nandi
 *
 * Created on 19 de marzo de 2018, 04:18 PM
 */

#ifndef NODO_H
#define NODO_H

#include "arco.h" 

using namespace std;

#include <iostream>
#include <list>

#include "arco.h"

class nodo {
public:
    nodo( nodo*);
    nodo(const nodo& orig);
    virtual ~nodo();
    
    nodo* getSigNodo();
    void setSigNodo(nodo *sig);
    
    virtual string toString();
    
private:
    nodo* sigNodo();
    // clase *dato;
    bool visited = false;
 
    list <*nodo> * arc;
    
    
};

#endif /* NODO_H */

