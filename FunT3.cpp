#include <iostream>
#include <stdlib.h>

using namespace std;

//Otros
void YVUELTAA(int Y[], int dad, int mom)/*<-Estar� bien?*/ {
    int cau;
    cau=Y[dad];
    A[dad]=A[mom];
    A[mom]=cau;
}


//Metodo de Burbuja
void Burbuja(int A[], int n){
    int aux=0;
    for (int i=1; i<=n; i++){
        for (int j=0; i<=n-1; j++){
            if (A[j]>A[j+1]){
                YVUELTAA(A,j,j+1)
            }
        }
    }
}

//Insercion directa
void ID(int B[], int n){
    int k;
    for (int i=0; i<n; i++){
        k=B[i];
        for(int j=i-1; j>=0 and B[j>k];j--){
            B[j+1]=B[j];
        }
        B[j+1]=k;
    }
}


//Seleccion multiple ....Ordenamiento por selecci�n?
void SM(int C[], int n){
    int mom; //MOM es un valor minimo
    for (int i=0;i<n;i++){
        mom=i;//La posici�n i se asigna a mom
        for (int j=i+1/*Se analiza desde la posici�n i+1 en delante*/;j<=n/*Hasta N*/;j++){
            if (C[j]<C[mom])//Si la posici�n j es menor a la posici�n anteriormente asignada
                mom=j;//La posici�n se guarda en mom
        }
        //AYUDA AQUI!!!
        //Y la idea es que se intercambie con su antecesor
        YVUELTAA(C,i,mom);
    }
}


//Shell sort


//Merge Sort


//Heap sort


//Heap sort


//Quick sort


//Menu


//Otros
