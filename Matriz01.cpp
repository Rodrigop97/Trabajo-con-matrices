#include "Show.h"
#include <cstdlib>
#include "Matriz01.h"
void llenar_matriz01(int** mat, int n, int m)
{
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
           mat[i][j]=rand()%2;
        }
    }
    mostrar_matriz(mat,n,m);
}
