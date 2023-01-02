#include "Show.h"
#include "RotarMatriz.h"
int** rotar_matriz(int** mat,int n,int m)
{
    int** nuevaMat;
    nuevaMat=new int*[m];
    for (int i=0;i<m;i++){
        nuevaMat[i]=new int[n];
    }

    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            nuevaMat[j][i]=mat[i][j];
        }
    }
    for (int i=0;i<n;i++){
        delete[] mat[i];
    }
    delete[] mat;

    mostrar_matriz(nuevaMat,m,n);
    return nuevaMat;
}
