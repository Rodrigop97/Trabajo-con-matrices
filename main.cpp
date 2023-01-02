#include <iostream>
#include "GenerarMatriz.h"
#include "SumarMatrices.h"
#include "LlenarMatriz.h"
#include "RotarMatriz.h"
#include "Matriz01.h"
#include "AniadirKValores.h"
#include "CambiarSubyacentes.h"

using namespace std;

int main()
{
    int n, m;
    int** matriz, **matriz2;
    cout<<"Ingresar n ";
    cin>>n;
    cout<<"Ingresar m ";
    cin>>m;

/*
1) Realice una función que retorne una matriz de números enteros (aleatorios) de n
filas y m columnas, siendo n y m parámetros.
*/
    cout<<"Matriz 1:"<<endl;
    matriz=generar_matriz(n,m);
    cout<<"Matriz 2:"<<endl;
    matriz2=generar_matriz(n,m);

    /*
2) Realice una función que sume todos los elementos de 2 matrices de n filas y m
columnas, siendo n y m parámetros
     */
    cout<<"Matriz 1 + matriz 2:"<<endl;
    sumar_matrices(matriz,matriz2,n,m);
    /*
3) Realice una función que llene una matriz de n filas y m columnas con un número
pasado por parámetro.
*/
    int d;
    cout<<"Ingresar numero para rellenar la matriz 1: ";
    cin>>d;

    llenar_matriz(matriz,n,m,d);
/*
4) Realice una función que rote una matriz de n filas y m columnas siendo n y m
parámetros.
*/
    cout<<"Rotar matriz 2: "<<endl;
    matriz2=rotar_matriz(matriz2,n,m);
/*
5) Realice una función que llene una matriz de n por m (siendo n y m parámetros) con
2 números, de forma aleatoria.
*/
    cout<<"Matriz 1 aleatoria con 0 y 1 "<<endl;
    llenar_matriz01(matriz,n,m);
/*
6) Realice una función que dada una matriz de n por m (siendo n y m parámetros)
llena de 2 números, permita colocar k valores, a partir de la posición x e y; con la
orientación H o V (Horizontal o Vertical). Se debe tener en cuenta, que no se deben
superponer con los valores existentes, ni tampoco salirse de los límites de la misma.
*/
   int x , y, k;
   char orient;
   cout<<"Posicion x (fila) ";
   cin>>x;
   cout<<"Posicion y (columna) ";
   cin>>y;
   cout<<"Cantidad de posiciones ";
   cin>>k;
   cout<<"Orientacion ('h' o 'v') ";
   cin>>orient;
   if (colocar_valores(matriz,x,y,k,orient,n,m)) cout<<"True"<<endl;
   else cout<<"False"<<endl;
   cout<<"-----------------------"<<endl;
/*
7. Realice una función que dada una matriz de n por m (siendo n y m parámetros) la
cual contenga 2 valores (0 y 1 por ejemplo), detecte si es un valor determinado y lo
cambie y a todos los subjacentes.
*/

   cout<<"Posicion x (fila) ";
   cin>>x;
   cout<<"Posicion y (columna) ";
   cin>>y;
   cambiar_subyacentes(matriz,x,y,n,m);
    return 0;
}
