#include "ArbolBinarioOrd.h"

template <class T>
ArbolBinarioOrd<T>::ArbolBinarioOrd(){
    this->raiz=NULL;
}

template <class T>
ArbolBinarioOrd<T>::~ArbolBinarioOrd(){
    if(this->raiz !=NULL){
        delete this->raiz;
        this->raiz=NULL;
    }
}

template <class T>
bool ArbolBinarioOrd<T>::esVacio(){
    return this->raiz==NULL;
}

template <class T>
NodoBin<T> * ArbolBinarioOrd<T>::getRaiz(){
    return this->raiz;
}

template <class T>
bool ArbolBinarioOrd<T>::insertar(NodoBin<T> *nuevo){
NodoBin <T> *padre = this->raiz;

//cambia su estado cuadno se agrega un nodo
bool agregado= false;

if(this->raiz == NULL){
    this->raiz=nuevo;
}else{
    do{
        std::cout<<"\nNodo : "<<nuevo->obtenerDato()<<std::endl;
        std::cout<<"Padre : "<<padre->obtenerDato()<<std::endl;
      //  if(padre->obtenerHijoIzq()!=NULL)
     //       std::cout<<"Hijo izquierdo : "<<padre->obtenerHijoIzq()->obtenerDato()<<std::endl;
     //   if(padre->obtenerHijoDer()!=NULL)
      //      std::cout<<"Hijo Derecho: "<<padre->obtenerHijoDer()->obtenerDato()<<std::endl;

        if(nuevo->obtenerDato() < padre->obtenerDato()){
          //  std::cout<<"Izquierda\n";
            if(padre->obtenerHijoIzq()==NULL){
                std::cout<<"Agregado: "<<nuevo->obtenerDato()<<" izquierda de "<< padre->obtenerDato()<<std::endl;
                padre->fijarHijoIzq(nuevo);
                agregado = true;

            }else
                std::cout<<"cambio de padre";
                padre = padre->obtenerHijoIzq();
                
        }else{
          //  std::cout<<"Derecha\n";
            if(padre->obtenerHijoDer()==NULL){
                padre->fijarHijoDer(nuevo);
                agregado = true;
                std::cout<<"Agregado: "<<nuevo->obtenerDato()<<" Derecha de "<< padre->obtenerDato()<<std::endl;

            }else
                //std::cout<<"cambio de padre";
                padre=padre->obtenerHijoDer();
        }


    }while(!agregado);
    }
}

template <class T>
int ArbolBinarioOrd<T>::altura(){

}

template <class T>
int ArbolBinarioOrd<T>::tamahno(){

}

template <class T>
void ArbolBinarioOrd<T>::setRaiz(NodoBin<T> *val){
    if(this->raiz == NULL){
        
        this->raiz=val;
    }
}



template <class T>
bool ArbolBinarioOrd<T>::eliminar(T& val){

}

template <class T>
void ArbolBinarioOrd<T>::preOrden(){

}

template <class T>
void ArbolBinarioOrd<T>::inOrden(){

}

template <class T>
void ArbolBinarioOrd<T>::posOrden(){

}

template <class T>
void ArbolBinarioOrd<T>::nivelOrden(){

}
