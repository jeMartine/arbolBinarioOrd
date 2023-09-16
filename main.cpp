#include <iostream>
#include "ArbolBinarioOrd.h" 
#include "NodoBin.h"

using namespace std;

int main(){
    int nNodos=16;
    //string prim[nNodos] = {"INF092","REC002","VEN037","REC039","VEN149","INF122","SOP013","REC097","INF145","INF125","INF119","SOP126","REC010","REC114","REC162","INF042"};
    NodoBin<string> nodos[nNodos];
    int prim[nNodos]= {7, 3, 0, -3, 1, 5, 4, 6, 20, 15, 25, 30};
    ArbolBinarioOrd<int> arbol;


    for(int i=0; i<nNodos; i++)
        arbol.insertar(prim[i]);
    

};
    