#include <stdio.h>

// Função para trocar dois elementos de posição
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Função para ordenar a matriz em ordem crescente
void bubbleSort(int *arr, int size) {
    int i, j;
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

// Função para imprimir a matriz
void printArray(int *arr, int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {9, -3, 4, 200, 2, 78, 5, 10, 0};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Matriz original: ");
    printArray(arr, size);

    bubbleSort(arr, size);

    printf("Matriz ordenada: ");
    printArray(arr, size);

    return 0;
}

/*
A ordenação em bolha (bubble sort) é um algoritmo de ordenação simples e intuitivo.
Ele percorre repetidamente a lista a ser ordenada, compara pares adjacentes de elementos e os troca se estiverem na ordem errada.
Esse processo é repetido até que a lista esteja totalmente ordenada.

Como o algoritmo de ordenação em bolha funciona:

    Começando no início da lista, compare o primeiro elemento com o próximo elemento.
    Se o primeiro elemento for maior que o próximo, troque-os de posição.
    Mova para o próximo par de elementos e repita o passo anterior.
    Continue percorrendo toda a lista, comparando e trocando elementos adjacentes, se necessário.
    Repita os passos 1 e 2 para cada elemento da lista, até que nenhum elemento precise mais ser trocado durante uma passagem completa.
    Quando uma passagem completa for concluída sem que nenhuma troca seja feita, a lista estará ordenada.

Visualmente, o algoritmo de ordenação em bolha faz com que os elementos maiores "subam" para a posição correta,
assim como as bolhas sobem na água, daí o nome "bubble sort".

Embora o bubble sort seja um algoritmo simples de entender e implementar,
ele não é muito eficiente para grandes quantidades de dados, pois requer um número considerável de comparações e trocas.
Sua complexidade média e pior caso é O(n^2), onde "n" representa o número de elementos na lista. Portanto,
é mais adequado para pequenos conjuntos de dados ou para fins educacionais.

Existem algoritmos de ordenação mais eficientes, como o quicksort, mergesort e heapsort, que são preferíveis para grandes conjuntos de dados.
*/
