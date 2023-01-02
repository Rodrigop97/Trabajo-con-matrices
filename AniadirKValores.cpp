#include "AniadirKValores.h"
bool colocar_valores(int** mat,int x,int y,int k,char o,int n,int m)
{
    bool band=1;
    int ref=mat[x][y];

    if (o=='h'){
        if(y+k>=m) band=0;
        else{
            for (int i=y;i<=y+k;i++){
                if (ref!=mat[x][i]) band=0;
            }
        }
    }
    if (o=='v'){
        if(x+k>=n) band=0;
        else{
            for (int i=x;i<=x+k;i++){
                if (ref!=mat[i][y]) band=0;
            }
        }
    }
    return band;
}
