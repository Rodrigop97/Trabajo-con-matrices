#include "Show.h"
#include "CambiarSubyacentes.h"
void cambiar_subyacentes(int** mat,int x,int y,int n ,int m)
{
    int ref;
    if (mat[x][y]==0) ref=1;
    if (mat[x][y]==1) ref=0;
    mat[x][y]=ref;
    if (x>0) mat[x-1][y]=ref;
    if (y>0) mat[x][y-1]=ref;
    if (x<n-1)mat[x+1][y]=ref;
    if (y<m-1) mat[x][y+1]=ref;
    mostrar_matriz(mat,n,m);
}
