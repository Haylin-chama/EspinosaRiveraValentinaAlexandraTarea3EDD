#include <iostream>
#include <stdlib.h>

using namespace std;

//Otros
void YVUELTAA(int Y[], int dad, int mom)/*<-Estará bien?*/ {
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


//Seleccion multiple ....Ordenamiento por selección?
void SM(int C[], int n){
    int mom; //MOM es un valor minimo
    for (int i=0;i<n;i++){
        mom=i;//La posición i se asigna a mom
        for (int j=i+1/*Se analiza desde la posición i+1 en delante*/;j<=n/*Hasta N*/;j++){
            if (C[j]<C[mom])//Si la posición j es menor a la posición anteriormente asignada
                mom=j;//La posición se guarda en mom
        }
        //La posición mom debe intercambiarse con el primero o el que le sigue al primero y así...
        YVUELTAA(C,i,mom);
    }
}

//Shell sort


//Merge Sort
void MS(int D[],int minimo, int medio, int maximo){
    int AUX[maximo]
    int mi=minimo,i=0,j=medio+1,k;
    while (mi<=medio and j<=maximo){
        if(D[h]<=D[j]){
            AUX[i]=A[h];
            h++;
        }
        else
            AUX[i]=A[j];
            j++;
    }
    i++;

    if(h>medio){
        for(k=j;k<=maximo;k++){
            AUX[i]=D[k];
            i++;
        }
    }
    else{
        for(k=h;k<=medio;k++){
            AUX[i]=D[k];
            i++;
        }
    }
    for(k=0;k<=maximo-minimo;k++){
        D[k+minimo]=AUX[k];
    }
}

void MSR(int D[], int minimo, int maximo)/*OJO el maximo es el largo del arreglo*/{
    int medio;
    if (l<=1)
        cout<<"La lista ya está ordenada";
    else{
        if(bajo<alta){
            mitad=(minimo+maximo)/2;
            MSR(D,minimo,medio);
            MSR(D,medio+1,maximo);
            MS(D,minimo,medio,maximo);
        }
    }
}

//Heap sort


//Heap sort


//Quick sort


//Menu


//Otros
