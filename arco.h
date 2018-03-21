/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   arco.h
 * Author: Nandi
 *
 * Created on 20 de marzo de 2018, 07:39 PM
 */

#ifndef ARCO_H
#define ARCO_H

#include "nodo.h"

class arco {
public:
    arco();
    arco(const arco& orig);
    virtual ~arco();
    
    bool arcoVisitado(bool = false);
    
private:
    bool visitado = false;
    nodo * a;
    nodo * b;
};

#endif /* ARCO_H */

