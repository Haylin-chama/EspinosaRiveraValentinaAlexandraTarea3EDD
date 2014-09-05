#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

//Otros
void YVUELTAA(int Y[], int dad, int mom)/*<-Estará bien?*/ {
    int cau;
    cau=Y[dad];
    Y[dad]=Y[mom];
    Y[mom]=cau;
}

//Metodo de Burbuja
void Burbuja(int A[], int n){
    for (int i=1; i<=n; i++){
        for (int j=0; i<=n-1; j++){
            if (A[j]>A[j+1]){
                YVUELTAA(A,j,j+1);
            }
        }
    }
}

//Insercion directa
void ID(int B[], int n){
    int k=0;
    for (int i=0; i<n; i++){
        k=B[i];
        int j=i-1;
        for(j; j>=0 and B[j]>k;j--){
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
void SSPost(int W[], int l){
    int k,aux;
    for(int i=l/2;i>0;i=i/2){
        for(int j=i;j<l;j++){
            aux=W[j];
            for(k=j;k>=i and W[k - i]> aux; k-=i ){
                W[k]=W[k-i];
		}
		W[k]=aux;
	}
}
for ( int i=0;i<l;i++){
    cout<<W[i]<<endl;}
}

//Merge Sort
void MS(int D[],int minimo, int medio, int maximo){
    int AUX[maximo-minimo+1];
    int mi=minimo,i=0,j=medio+1,k;
    while (mi<=medio and j<=maximo){
        if(D[mi]<=D[j]){
            AUX[i]=D[mi];
            mi++;
        }
        else
            AUX[i]=D[j];
            j++;
    }
    i++;

    if(mi>medio){
        for(k=j;k<=maximo;k++){
            AUX[i]=D[k];
            i++;
        }
    }
    else{
        for(k=mi;k<=medio;k++){
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
    if (maximo<=1)
        cout<<"La lista ya está ordenada";
    else{
        if(minimo<maximo){
            medio=(minimo+maximo)/2;
            MSR(D,minimo,medio);
            MSR(D,medio+1,maximo);
            MS(D,minimo,medio,maximo);
        }
    }
}

//Heap sort
void Heap(int A[], int n){
    int item,temp;
    for(int k=n;k>0;k--){
        for(int i=1;i<=k;i++){
            item=A[i];
            int j=i/2;
            while(j>0 and A[j]<item){
                A[i]=A[j];
                i=j;
                j=j/2;
            }
            A[i]=item;
        }
        temp=A[1];
        A[1]=A[k];
        A[k]=temp;
    }
    cout<<"Arreglo Ordenado: [";
    for(int i=0;i<n;i++)
        cout<<A[i] <<" ";
    cout<<"]";

}

//Quick sort
void QS(int A[],int y,int l){
    int i, j, x , aux;
    i = y;
    j = l;
    x = A[ (y + l) /2 ];
    do{
        while( (A[i] < x) && (j <= l))
            i++;
        while( (x < A[j]) && (j > y) )
            j--;
        if( i <= j ){
            aux = A[i]; A[i] = A[j]; A[j] = aux;
            i++;  j--;
        }
    }while( i <= j );
    if( y < j )
        QS( A, y, j );
    if( i < l )
        QS( A, i, l );
}

//Menu
void Llenar(int A[], int &n){
    char o;
    cout<<"Cantidad de elementos en el arreglo: ";
    cin>>n;
    cout<<"     1. Ingresar datos manualmente"<<endl;
    cout<<"     2. Generar datos aleatorios"<<endl;
    cin >>o;cout<<endl;
    switch(o){
    case '1':
        cout <<"Ingrese Dato en ";
            for(int i=0; i<n; i++){
                cout<<"Posicion:"<<i<<endl;
                cin>>A[i];
            };
        break;
    case '2':
        srand((unsigned)time(NULL));
        for (int i=0;i<n;i++){
            A[i]=rand()%10;
        }
        cout<<"Arreglo final: [";
        for (int i=0; i<n; i++){
            cout<<A[i]<<" ";
        }
        cout<<"]";
        break;
    default:
        cout<<"Opción ingresada no válida";
        break;
    }
}
