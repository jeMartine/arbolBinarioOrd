#ifndef ARBOLBINARIOORD_H 
#define ARBOLBINARIOORD_H
#include "NodoBin.h"

template <class T>

class ArbolBinarioOrd {
private:
    NodoBin <T> * raiz;
public:
    ArbolBinarioOrd();
    ~ArbolBinarioOrd();
    bool esVacio();
    NodoBin<T> * getRaiz();
    void setRaiz(NodoBin<T> *val);
    int altura();
    int tamahno();
    bool insertar(NodoBin<T> *nuevo);
    bool eliminar(T& val);
    void preOrden();
    void inOrden();
    void posOrden();
    void nivelOrden();
};

#include "ArbolBinarioOrd.hxx"

#endif // ARBOLBINARIOORD_H