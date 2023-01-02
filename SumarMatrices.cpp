#include "Show.h"
#include "SumarMatrices.h"
void sumar_matrices(int** mat1, int **mat2,int n,int m)
{
    int** matriz=new int*[n];
    for(int i=0;i<n;i++){
        matriz[i]=new int[m];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            matriz[i][j]=mat1[i][j]+mat2[i][j];
        }
    }
    mostrar_matriz(matriz,n,m);
}
