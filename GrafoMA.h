/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   GrafoMA.h
 * Author: John
 *
 * Created on 10 de noviembre de 2018, 05:59 PM
 */

#ifndef GRAFOMA_H
#define GRAFOMA_H
#include <vector>
using namespace std;

class GrafoMA  {
public:
    
    typedef int Vertice;
    

    //CONSTRUCTOR
    GrafoMA(int M);  

    
    //DESTRUCTOR
    ~GrafoMA();

    /*	Efecto: Vacía el Grafo.
    Requiere: Grafo inicializado.
    Modifica: El Grafo
     */
    void vaciar();

    /*	Efecto: Verifica si el Grafo está vacío.
    Requiere: Grafo inicializado. 
     */
    bool vacio();

    /*	Efecto: Crea un nuevo vértice en el grafo que contiene a la etiqueta, luego retorna ese vértice.
    Requiere: Grafo inicializado.
    Modifica: El Grafo.
     */
    Vertice agregarVertice(char etiqueta);

    /*	Efecto: Elimina el vértice de entrada.
    Requiere: Vértice aislado y válido en el grafo.
    Modifica: El Grafo.
     */
    void eliminarVertice(Vertice vertice);

    /*	Efecto: Modifica la etiqueta en el vértice de entrada.
    Requiere: Vértice válido en el grafo.
    Modifica: Al vértice de entrada en el Grafo.
     */
    void modificarEtiqueta(char etiqueta, Vertice vertice);

    /*	Efecto: Retorna la etiqueta del vértice de entrada.
    Requiere: Vértice válido en el grafo.
     */
    char* etiqueta(Vertice vertice);

    /*	Efecto: “Crea” una arista que contiene el peso y relaciona los 2 vértices de entrada.
    Requiere: Ambos vértices de entrada válidos en el grafo.
    Modifica: El Grafo.
     */
    void agregarArista(Vertice vertice1, Vertice vertice2, int peso);

    /*	Efecto: Elimina la arista entre los 2 vertices de entrada.
    Requiere: Ambos vértices de entrada válidos en el grafo.
    Modifica: El Grafo.
     */
    void eliminarArista(Vertice vertice1, Vertice vertice2);

    /*	Efecto: Modifica el peso en la arista que relaciona los 2 vértices de entrada.
    Requiere: Ambos vértices de entrada válidos en el grafo.
    Modifica: El Grafo.
     */
    void modificarPeso(Vertice vertice1, Vertice vertice2, int peso);

    /*	Efecto: Retorna el peso de la arista que relaciona a los vértices de entrada.
    Requiere: Ambos vértices de entrada válidos en el grafo.
     */
    int peso(Vertice vertice1, Vertice vertice2);

    /*	Efecto: Verifica si dos vértices son adyacentes.
    Requiere: Ambos vértices de entrada válidos en el grafo.
     */
    bool sonAdyacentes(Vertice vertice1, Vertice vertice2);

    /*	Efecto: Retorna el “primer” vértice del Grafo.
    Requiere: Grafo inicializado y grafo con vertices.
     */
    Vertice primerVertice();

    /*	Efecto: Retorna el “siguiente” vértice al vértice de entrada en el Grafo.
    Requiere: Grafo inicializado y vértice de entrada válido en el grafo.
     */
    Vertice siguienteVertice(Vertice vertice);

    /*	Efecto: Retorna el “primer” vértice adyacente del vértice de entrada.
    Requiere: Vértice de entrada válido en el grafo.
     */
    Vertice primerVerticeAdyacente(Vertice vertice);

    /*	Efecto: Retorna el “siguiente” vértice Adyacente del vértice Adyacente de entrada.
    Requiere: Vértice de entrada válido en el grafo.
     */
    Vertice siguienteVerticeAdyacente(Vertice vertice1, Vertice vertice2);

    /*	Efecto: Retorna el número de vértices adyacentes que tiene el vértice de entrada.
    Requiere: Vértice de entrada válido en el grafo.
     */
    int numVerticesAdyacentes(Vertice vertice);

    /*	Efecto: Retorna el número de vértices que tiene el grafo.
    Requiere: Grafo inicializado.
     */
    int numVertices();

private:

    vector<vector<int>> matrizAdyacencia;
    vector<char*> vectorEtiquetas;
    int ultimo;
};

#endif /* GRAFOMA_H */

