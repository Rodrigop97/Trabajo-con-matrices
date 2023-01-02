#include "Show.h"
#include "LlenarMatriz.h"
void llenar_matriz(int** mat,int n, int m, int dat)
{
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            mat[i][j]=dat;
        }
    }
    mostrar_matriz(mat,n,m);
}
