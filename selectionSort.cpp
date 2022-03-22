#include<iostream>
using namespace std;

void selecionSort(int arr[], int n){
    int i, j, idxBandera, idxMinimo;
    for(i=0; i<n;i++){
        idxBandera=i;
        idxMinimo=idxBandera;
        for(j=i;j<n;j++){
            if(arr[idxMinimo]>arr[j]){
                idxMinimo=j;
            }
        }
        if(idxBandera!=idxMinimo){
            swap(arr[idxBandera], arr[idxMinimo] );
        }
    }

}

void swap(int *xp, int *yp){
    int temp=*xp;
    *xp=*yp;
    *yp=temp;
}

void imprimirArreglo(int arr[], int n){
    cout<<endl;
    for(int i=0;i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[]={32, 29, 21, 43, 12, 93, 47};
    int n=sizeof(arr)/sizeof(arr[0]);
    selecionSort(arr, n);
    imprimirArreglo(arr, n);
}