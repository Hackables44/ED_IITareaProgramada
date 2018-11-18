/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   GrafoMA.cpp
 * Author: John
 * 
 * Created on 10 de noviembre de 2018, 05:59 PM
 */

#include "GrafoMA.h"
typedef int Vertice;

GrafoMA::GrafoMA(int M) {
    vectorEtiquetas.resize(M);

    matrizAdyacencia.resize(M);
    for (int i = 0; i < M; ++i) {
        matrizAdyacencia[i].resize(M);
    }
}

GrafoMA::~GrafoMA() {
    vaciar();
}

void GrafoMA::vaciar() {
    ultimo = 0;
}

bool GrafoMA::vacio() {
    bool vacio = true;
    if (ultimo) {
        vacio = false;
    }
    return vacio;
}

Vertice GrafoMA::agregarVertice(char* etiqueta) {
    vectorEtiquetas[ultimo] = etiqueta;

    if (ultimo < matrizAdyacencia.size() + 1) {
        for (int i = 0; i < ultimo; ++i) {
            matrizAdyacencia[i][ultimo] = -1;
            matrizAdyacencia[ultimo][i] = -1;
        }
        ++ultimo;
    }
    
    return vectorEtiquetas[ultimo-1];
}


void GrafoMA::eliminarVertice(Vertice vertice){

}

void GrafoMA::modificarEtiqueta(char etiqueta, Vertice vertice){
    vectorEtiquetas[vertice] = etiqueta;
}


char* GrafoMA::etiqueta(Vertice vertice){
    return vectorEtiquetas[vertice];
}

void GrafoMA::agregarArista(Vertice vertice1, Vertice vertice2, int peso){
    matrizAdyacencia[vertice1][vertice2] = peso;
    matrizAdyacencia[vertice2][vertice1] = peso;
}


void GrafoMA::eliminarArista(Vertice vertice1, Vertice vertice2){
    matrizAdyacencia[vertice1][vertice2] = -1;
    matrizAdyacencia[vertice2][vertice1] = -1;
}

void GrafoMA::modificarPeso(Vertice vertice1, Vertice vertice2, int peso){
    matrizAdyacencia[vertice1][vertice2] = peso;
    matrizAdyacencia[vertice2][vertice1] = peso;
}

int GrafoMA::peso(Vertice vertice1, Vertice vertice2){
    return matrizAdyacencia[vertice1][vertice2];
}

bool GrafoMA::sonAdyacentes(Vertice vertice1, Vertice vertice2){
    bool son = true;
    if(matrizAdyacencia[vertice1][vertice2] == -1){
        son = false;
    }
    return son;
}

Vertice GrafoMA::primerVertice(){
    return 0;
}

Vertice GrafoMA::siguienteVertice(Vertice vertice){
    Vertice retorna;
    if(vertice < ultimo - 1){
        retorna = vertice++;
    }else{
        retorna = 0;
    }
    
    return retorna;
}

Vertice GrafoMA::primerVerticeAdyacente(Vertice vertice){
    bool encontro = false;
    Vertice retorno = -1;
    for(int i = 0; i < ultimo && !encontro; ++i){
        if(matrizAdyacencia[vertice][i] != -1){
            retorno = i;
            encontro = true;
        }
    }
    
    return retorno;
}

Vertice GrafoMA::siguienteVerticeAdyacente(Vertice vertice1, Vertice vertice2){
    
}

