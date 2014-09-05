#include <iostream>
#include <stdlib.h>

using namespace std;

//Otros
void YVUELTAA(int Y[], int V[], int dad, int mom){
    int cau;
    cau=Y[dad+1];
    A[dad+1]=A[mom];
    A[j+1]=aux;
}


//Metodo de Burbuja
void Burbuja(int A[], int n){
    int aux=0;
    for (int i=1; i<=n; i++){
        for (int j=0; i<=n-1; j++){
            if (A[j]>A[j+1]){
                aux=A[j];
                A[j]=A[j+1];
                A[j+1]=aux;
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


//Seleccion multiple ....Ordenamiento por selección?
void SM(int C[], int n){
    int mom;
    for (int i=0;i<n;i++){
        mom=i;
        for (int j=i+1;j<=n;j++){
            if (C[j]<C[mom])
                mom=j;
        }
        YVUELTAA(C,C,i,mom);
    }
}


//Shell sort


//Merge Sort


//Heap sort


//Heap sort


//Quick sort


//Menu


//Otros
