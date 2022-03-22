#include<iostream>
using namespace std;

void insertionSort(int arr[], int n){
    int i,j,key;
    for(i=1;i<n;i++){
        key=arr[i];
        j=i-1;
        while(j>=0 && key<arr[j]){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
}

void imprimirArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arrreglin[]={32,1,22,54,12,321};
    int n=sizeof(arrreglin)/sizeof(arrreglin[0]);
    insertionSort(arrreglin, n);
    imprimirArray(arrreglin, n);

    return 0;

}