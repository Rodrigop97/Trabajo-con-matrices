#include <iostream>
#include <iomanip>
#include "Show.h"
using namespace std;
void mostrar_matriz(int** mat, int n, int m)
{
    //cout<<"Matriz "<<endl;
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cout<<setw(5)<<left<<mat[i][j]<<"    ";
        }
        cout<<endl;
    }
    cout<<"-----------------------"<<endl;
}
