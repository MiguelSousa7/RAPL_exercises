#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10000  // Tamanho do array
#define MAX_VALUE 100000  // Valor máximo dos números aleatórios

// Função para gerar um array aleatório
void generate_random_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = (rand() % MAX_VALUE) + 1;  // Números entre 1 e MAX_VALUE
    }
}

// Função para salvar o array no arquivo
void save_array_to_file(int arr[], int size, const char *filename) {
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return;
    }

    for (int i = 0; i < size; i++) {
        fprintf(file, "%d ", arr[i]);
    }

    fclose(file);
}

int main() {
    int array[SIZE];

    // Inicializa a semente do gerador de números aleatórios
    srand(time(NULL));

    // Gerar e salvar o array
    generate_random_array(array, SIZE);
    save_array_to_file(array, SIZE, "array.txt");

    printf("Arquivo 'array.txt' gerado com sucesso!\n");

    return 0;
}

