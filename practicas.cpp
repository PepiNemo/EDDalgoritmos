#include<iostream>
using namespace std;

void shellSort(int arr[], int n){
    int gap, temp, i, j;
	for (gap = n/2; gap > 0; gap /= 2){//For para calcular el gap.
		for (i = gap; i < n; i += 1){//Ciclo que recorre unitariamente dps del gap.
			temp = arr[i];
			j=i;
			while(j>=gap && arr[j-gap] > temp){//Ciclo que compara los elementos a distancia gap, respecto al indice del anterior ciclo.
				arr[j]=arr[j-gap];
				j=j-gap;
			}
			arr[j] = temp;
		}
	}
}

void printArray(int arr[], int n){
	for (int i=0; i<n; i++)
		cout << arr[i] << " ";
}

int main()
{
	int arr[] = {12, 34, 54, 2, 3}, i;
	int n = sizeof(arr)/sizeof(arr[0]);

	cout << "Array before sorting: \n";
	printArray(arr, n);

	shellSort(arr, n);

	cout << "\nArray after sorting: \n";
	printArray(arr, n);

	return 0;
}
