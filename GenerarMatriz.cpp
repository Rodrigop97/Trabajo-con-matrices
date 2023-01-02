#include <iostream>
#include "Show.h"
#include "GenerarMatriz.h"
int** generar_matriz(int n, int m)
{
    int** matriz;
    matriz=new int*[n];
    for (int i=0;i<n;i++){
        matriz[i]=new int[m];
        for (int j=0;j<m;j++){
            matriz[i][j]=rand();
        }
    }
    mostrar_matriz(matriz,n,m);
    return matriz;
}
