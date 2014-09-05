#include <iostream>
#include <time.h>
#include <stdlib.h>
#include "CabeceraT3.h"

using namespace std;

int main()
{
    int A[1000],n=0;
    char o;
    cout<<"     MENU ORDENAMIENTO DE ARREGLOS"<<endl;
    cout<<"1. Metodo de Burbuja"<<endl;
    cout<<"2. Insercion directa"<<endl;
    cout<<"3. Seleccion multiple"<<endl;
    cout<<"4. Shell sort"<<endl;
    cout<<"5. Merge Sort"<<endl;
    cout<<"6. Heap sort"<<endl;
    cout<<"7. Quick sort"<<endl;
    cout<<"S. Salir."<<endl;
    cin>>o;
    switch(o){
    case '1':
        Llenar(A,n);
        Burbuja(A,n);
        system("pause");
        system("cls");
        break;
    case '2':
        Llenar(A,n);
        ID(A,n);
        system("pause");
        system("cls");
        break;
    case '3':
        Llenar(A,n);
        SM(A,n);
        system("pause");
        system("cls");
        break;
    case '4':
        Llenar(A,n);
        SSPost(A,n);
        system("pause");
        system("cls");
        break;
    case '5':
        Llenar(A,n);
        MSR(A, 0 , n);
        system("pause");
        system("cls");
        break;
    case '6':
        Llenar(A,n);
        Heap(A,n);
        system("pause");
        system("cls");
        break;
    case '7':
        Llenar(A,n);
        QS(A, 0 , n);
        system("pause");
        system("cls");
        break;
    case 'S':
        break;
    default:
        cout<<"Opción ingresada no válida";
        break;
    }
}
