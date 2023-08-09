#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

int main(){
	
	
	int matriz[4] = {23, -9, 13, 9};
	//matriz ;
	bubbleSort(matriz, 4);
	
	return 0;
	
}

void bubbleSort(int arr[], int size) {
    int i, j;
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
    printf("RESULTADO DA MATRIZ NA ORDEM CRESCENTE: \n %d", arr);
}